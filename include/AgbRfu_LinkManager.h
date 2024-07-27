#ifndef GUARD_LINKMANAGER_H
#define GUARD_LINKMANAGER_H

//-----------------------------------------------------------------
// Constant definition
//-----------------------------------------------------------------

// Link Manager operation mode (specified by u8 parent_child argument of rfu_LMAN_establishConnection)
//#define MODE_CHILD                                    0        // Start Link Manager in CHILD mode
//#define MODE_PARENT                                    1        // Start Link Manager in PARENT mode
//Note: This value uses the item defined by AgbRFU_LL.h.
#define MODE_P_C_SWITCH 2        // Start Link Manager in parent-child switching mode.

// Value of lman.p_c_switch_flag
#define PCSWITCH_1ST_SC_START   0x01
#define PCSWITCH_1ST_SC         0x02
#define PCSWITCH_2ND_SP_START   0x03
#define PCSWITCH_2ND_SP         0x04
#define PCSWITCH_3RD_SC_START   0x05
#define PCSWITCH_3RD_SC         0x06
#define PCSWITCH_CP             0x07
#define PCSWITCH_SC_LOCK        0x08
#define PCSWITCH_FORCE_SP_START 0x09

// Period for which parent-child switching search specified
#define PCSWITCH_ALL_PERIOD                                             180             // Entire cycle 180 frames
#define PCSWITCH_SP_PERIOD                                               40             // Child period 40 frames

// Error code returned by Link Manager API (rfu_LMAN_...return value of function)
#define LMAN_ERROR_MANAGER_BUSY                                1    // Link Manager is already running.
#define LMAN_ERROR_AGB_CLK_LISTENER                            2    // AGB is clock listener so link manager cannot run.
#define LMAN_ERROR_PID_NOT_FOUND                            3    // Parent device information of the specified PID does not exist in rfuLinkStatus->partner[0-3].
#define LMAN_ERROR_ILLEGAL_PARAMETER                        4    // Specified argument is unusual.
#define LMAN_ERROR_NOW_LINK_RECOVERY                        5    // New settings were ignored because link recovery was under way when current link recovery was ON and new settings turned link recovery OFF.
#define LMAN_ERROR_NOW_COMMUNICATION                        6    // New settings were ignored because currently communicating with NI.
#define LMAN_ERROR_NOW_SEARCH_PARENT                        7        // Parent search currently under way, so ignore new setting.

// Details of messages and the related parameters returned by the u8 msg, u8 param_count, and lman.param[0-1] arguments of the LMAN callback generated by the operation of the Link Manager.
//        msg name                                          msg No.    param qty    param[0]                    param[1]        Description
#define LMAN_MSG_INITIALIZE_COMPLETED                    0x00    //    0            -                            -            Generated when RFU reset and initial settings are completed
#define LMAN_MSG_NEW_CHILD_CONNECT_DETECTED              0x10    //    1        Bit indicating slot                -            Generated when new child device connection was detected at RFU level.
//          with detected connection
#define LMAN_MSG_NEW_CHILD_CONNECT_ACCEPTED              0x11    //    1        Bit indicating slot                -            Generated when game identification information from child device connected at RFU level is received and accepted (game serial numbers match).
//          where connection was accepted
#define LMAN_MSG_NEW_CHILD_CONNECT_REJECTED              0x12    //    1        Bit indicating slot                -            Generated when the connection from the child device connected at RFU level is rejected (game identification information reception failed or game serial numbers do not match).
//          where connection was rejected
#define LMAN_MSG_SEARCH_CHILD_PERIOD_EXPIRED             0x13    //    0            -                            -            Generated when SearchChild operation time expires.
#define LMAN_MSG_END_WAIT_CHILD_NAME                     0x14    //    0            -                            -            Generated when reception of game identification information from all child devices completes after the SearchChild operation time expires.
#define LMAN_MSG_PARENT_FOUND                            0x20    //    1        Bit indicating                     -            Generated when valid (game serial numbers match) parent devices are found during SearchParent.
//          rfuLinkStatus->partner[x] index number storing the valid parent devices (game serial number matches) from among the discovered parent devices.
#define LMAN_MSG_SEARCH_PARENT_PERIOD_EXPIRED            0x21    //    0            -                            -            Generated when SearchParent time expires.
#define LMAN_MSG_CONNECT_PARENT_SUCCESSED                0x22    //    1        Connected slot number            -            Generated when connection with parent device at RFU level succeeds.
#define LMAN_MSG_CONNECT_PARENT_FAILED                   0x23    //    1        Connection failure reason        -            Generated when connection with parent device at RFU level fails.
#define LMAN_MSG_CHILD_NAME_SEND_COMPLETED               0x24    //    0            -                            -            Generated when transmission of the child's game identification information to the parent device succeeds after connection with parent device at RFU level succeeds.
#define LMAN_MSG_CHILD_NAME_SEND_FAILED_AND_DISCONNECTED 0x25    //    0        -                            -            Generated when transmission of the child's game identification information to the parent device fails after connection with parent device at RFU level succeeds.
#define LMAN_MSG_LINK_LOSS_DETECTED_AND_DISCONNECTED     0x30    //    1        Bit indicating slot                -            Generated when a link cut is detected and that slot disconnects. (Generated only when link recovery is OFF.)
//         that was disconnected and where link cut was detected but link recover not attempted
#define LMAN_MSG_LINK_LOSS_DETECTED_AND_START_RECOVERY   0x31    //    1        Bit indicating slot                -            Generated when a link cut is detected and the link recovery process starts. (Generated only when link recovery is ON.)
//         where link cut was detected and link recovery was started
#define LMAN_MSG_LINK_RECOVERY_SUCCESSED                 0x32    //    1        Bit indicating slot                -            Generated when link recovery succeeds. (Generated only when link recovery is ON.)
//        where link recovery succeeded
#define LMAN_MSG_LINK_RECOVERY_FAILED_AND_DISCONNECTED   0x33    //    1        Bit indicating slot                -            Generated when link recovery fails and that slot disconnects. (Generated only when link recovery is ON.)
//        where link recovery failed and that disconnected
#define LMAN_MSG_LINK_DISCONNECTED_BY_USER               0x40    //    1    Generated on disconnection by execution of rfu_REQ_disconnect by disconnected user.
//         Slot indicated in bits    *Note: If rfu_REQ_disconnect is used for disconnection during link recovery in the child device, the link recovery is also suspended, but the only message returned is DISCONNECTED_BY_USER.
#define LMAN_MSG_CHANGE_AGB_CLOCK_LISTENER                  0x41    //    0            -                            -            Generated when the AGB-RFU clock switches to AGB clock listener after a successful connection or link recovery in the child device. (This message is not generated when the AGB switches to a clock listener when an MSC callback completes.)
#define LMAN_MSG_CHANGE_AGB_CLOCK_MASTER                 0x45    //    0            -                            -            Generated when the AGB-RFU intercommunication clock is switched to the AGB clock master in the child device.
#define LMAN_MSG_RFU_POWER_DOWN                          0x42    //    0            -                            -            Generated when the RFU enters power conservation mode with rfu_LMAN_powerDownRFU.
#define LMAN_MSG_MANAGER_STOPPED                         0x43    //    0            -                            -            Generated when the Link Manager is halted by rfu_LMAN_stopLMAN(0). (This message is not generated during SearchChild, SearchParent, ConnectParent, and LinkRecovery. A message (-PERIOD_EXPIRED, -SUCCESSED, -FAILED) corresponding to the operation completion is returned.)
#define LMAN_MSG_MANAGER_FORCED_STOPPED_AND_RFU_RESET    0x44    //    0            -                            -            Generates when the Link Manager is forcibly halted by rfu_LMAN_stopLMAN(1) and RFU is reset.

#define LMAN_MSG_RECV_DATA_REQ_COMPLETED                 0x50    //    0            -                            -            Generated when the execution of rfu_REQ_recvData completes. (This message is not notification of data reception from a RFU.)

#define LMAN_MSG_REQ_API_ERROR                           0xf0    //    2        REQ_commandID                    REQ_result     REQ-API resulted in error. This message is also generated by an REQ-API executed by either the link manager or the user.
#define LMAN_MSG_WATCH_DOG_TIMER_ERROR                   0xf1    //     0            -                            -            Generated when a MSC callback does not occur even after 6 seconds pass when the AGB is the clock listener.
#define LMAN_MSG_CLOCK_LISTENER_MS_CHANGE_ERROR_BY_DMA      0xf2    //     0            -                            -            Generated when an automatic starting DMA, such as HDMA, is issued at the same time the RFU attempts to send notification and to return the AGB to the clock master while the AGB is the clock listener and the exchange of that information (REQ command) fails.
#define LMAN_MSG_LMAN_API_ERROR_RETURN                   0xf3    //  1        Return error code                -            Generated when LMAN-API execution returns an error.
#define LMAN_MSG_RFU_FATAL_ERROR                         0xff    //    0            -                            -            Generated when the Link Manager cannot recongize a RFU because of the execution of rfu_REQBN_softReset_and_checkID.


// Value of lman.childClockListener_flag
#define RFU_CHILD_CLOCK_LISTENER_OFF     0        // The child device is not operating in AGB clock listener mode. (The child device is in this mode in cases such as when the child has not established a connection or during link recovery.)
#define RFU_CHILD_CLOCK_LISTENER_ON      1        // The child device is operating in AGB clock listener mode. (Child automatically enters this mode when a connection is established.)
#define RFU_CHILD_CLOCK_LISTENER_OFF_REQ 2        // The child device has requested that AGB clock listener mode be halted.

// State of Link Manager (values of lman.state, lman.next_state)
#define LMAN_STATE_READY                    0x00            // Waiting
#define LMAN_STATE_SOFT_RESET_AND_CHECK_ID  0x01            // Requesting execution of rfu_REQBN_softResetAndCheckID (same as below)
#define LMAN_STATE_RESET                    0x02            // rfu_REQ_reset
#define LMAN_STATE_CONFIG_SYSTEM            0x03            // rfu_REQ_configSystem
#define LMAN_STATE_CONFIG_GAME_DATA         0x04            // rfu_REQ_configGameData
#define LMAN_STATE_START_SEARCH_CHILD       0x05            // rfu_REQ_startSearchChild
#define LMAN_STATE_POLL_SEARCH_CHILD        0x06            // rfu_REQ_pollSearchChild
#define LMAN_STATE_END_SEARCH_CHILD         0x07            // rfu_REQ_endSearchChild
#define LMAN_STATE_WAIT_RECV_CHILD_NAME     0x08            // Awaiting reception of game name from connected child device.
#define LMAN_STATE_START_SEARCH_PARENT      0x09            // rfu_REQ_startSearchParent
#define LMAN_STATE_POLL_SEARCH_PARENT       0x0a            // rfu_REQ_pollSearchParent
#define LMAN_STATE_END_SEARCH_PARENT        0x0b            // rfu_REQ_endSearchParent
#define LMAN_STATE_START_CONNECT_PARENT     0x0c            // rfu_REQ_startConnectParent
#define LMAN_STATE_POLL_CONNECT_PARENT      0x0d            // rfu_REQ_pollConnectParent
#define LMAN_STATE_END_CONNECT_PARENT       0x0e            // rfu_REQ_endConnectParent
#define LMAN_STATE_SEND_CHILD_NAME          0x0f            // Sending child game name.
#define LMAN_STATE_START_LINK_RECOVERY      0x10            // rfu_REQ_CHILD_startConnectRecovery
#define LMAN_STATE_POLL_LINK_RECOVERY       0x11            // rfu_REQ_CHILD_pollConnectRecovery
#define LMAN_STATE_END_LINK_RECOVERY        0x12            // rfu_REQ_CHILD_endConnectRecovery
#define LMAN_STATE_MS_CHANGE                0x13            // rfu_REQ_changeMasterListener
#define LMAN_STATE_WAIT_CLOCK_MASTER        0x14            // Waiting for AGB-RFU intercommunication clock to become AGB clock master.
#define LMAN_STATE_STOP_MODE                0x15            // rfu_REQ_stopMode
#define LMAN_STATE_BACK_STATE               0x16            // Following the completion of link-recovery processing, return the Link Manager state to the state present before link-recovery processing was initiated.
#define LMAN_FORCED_STOP_AND_RFU_RESET      0x17            // Attempt to forcibly stop Link Manager using rfu_LMAN_stopLMAN(1).
#define LMAN_STATE_WAIT_CHANGE_CLOCK_MASTER 0x18            // Attempt to return to AGB clock master after child fails in sending game name.

struct Padded_U8
{
    u8 value;
};

// Parameter group used in initial setting run of the link manager (rfu_LMAN_initializeRFU)
typedef struct InitializeParametersTag {
    // rfu_REQ_configSystem argument
    u8 maxMFrame;                            // Maximum number of times to re-transmit of RFU level
    u8 MC_TimerCount;                        // MC_Timer count (x16.7ms)
    u16 availSlot_flag;                      // Use RFU-API constant "AVAIL_SLOT1-4" to specify the maximum number of child devices (1 - 4) that can be connected to a parent device.

    // rfu_REQB_configGameData argument
    u8 mboot_flag;                           // Multiplayer boot flag
    u16 serialNo;                            // Game serial number
    u8 *gameName;                            // Game name
    u8 *userName;                            // User name

    // ON/OFF flag for parent fast search operation by child.
    u8 fastSearchParent_flag;                // Flag indicating whether parent fast search operation to be performed by child.

    // Link recovery settings
    u8 linkRecovery_enable;                  // Determines whether or not to execute the link recovery process when a link cut occurs
    u16 linkRecovery_period;                 // Time to spend on the link recovery process (x 16.7 ms)  Note: Runs for unlimited time when specifying 0.

    // Setting for NI-type data transmit/receive period
    u16 NI_failCounter_limit;                //  Limit for failCounter during NI type data transmit/receive (x 16.7 ms) Note: Runs for unlimited time when specifying 0.
}INIT_PARAM;


// Timer that counts with the V-Blank cycle
typedef struct VblankTimerTag {
    u8 active;                               // Timer ON/OFF (bits 0 - 3 indicate ON/OFF for each connected slot)
    u16 count_max;                           // Maximum count value (x16.7ms)
    u16 count[RFU_CHILD_MAX];                // Current count value (x 16.7 ms) for each connected slot
}VBL_TIMER;

typedef struct linkManagerTag
{
    u8 acceptSlot_flag;                             // Connection slot of child for which Link Manager accepted connection, expressed in bits. (This bit is not dropped for a broken link but is dropped with complete disconnection.)
    u8 acceptCount;                                 // Number of child devices for which connections accepted by Link Manager.
    vu8 childClockListener_flag;                       // Flag indicating whether AGB clock listener state is currently being maintained by child.
    vu8 parentAck_flag;                             // Flag indicating the child devices for which the parent received ACK by UNI commmunication.
    u8 state;                                       // Current link manager state
    u8 next_state;                                  // State that the link manager transitions to when it is next called.
    u8 parent_child;                                // Shows whether operating on a parent or child.
    u8 pcswitch_flag;                               // Flag for parent-child switching search.
    u8 RFU_powerOn_flag;                            // Flag indicating whether RFU has been powered down.
    u8 linkRecovery_enable;                         // ON/OFF flag for the link recovery process.
    u8 linkRecovery_start_flag;                     // Link recovery start flag
    u8 fastSearchParent_flag;                       // ON/OFF flag for parent fast search by child.
    u8 connectSlot_flag_old;                        // Value of rfuLinkStatus->connectSlot_flag (internally used by the API) when the link manager was called previously.
    u8 reserveDisconnectSlot_flag;                  // Bit indication of the child slot that was reject by child connection authentication and is waiting for disconnect.
    u8 active;                                      // Link manager operating flag (internally used by the API)
    u8 msc_exe_flag;                                // MSC callback executing flag (internally used by the API)
    u8 child_slot;                                  // Slot number where child device connected (internally used by the API)
    u8 state_bak[2];                                // Backup of link manager state (internally used by the API)
    u16 param[2];                                   // Region where parameters returned when LMAN callback occurs are stored.
    u16 NI_failCounter_limit;                       // Period of failCounter during NI type data transmit/receive (x 16.7 ms) Note: Runs for unlimited time when specifying 0
    u16 connect_period;                             // Count for the period to execute a connection process (x 16.7 ms). Note: Runs for unlimited time when specifying 0.
    u16 pcswitch_period_bak;                        // Backup for No. 3 SC period during parent-child switching search.
    u16 work;                                       // Work region used by the link manager.
    u16 *acceptable_serialNo_list;                  // List of game serial numbers that can accept connections. (See Note below)
    VBL_TIMER nameAcceptTimer;                      // Timer for period to receive game names from child device.
    VBL_TIMER linkRecoveryTimer;                    // Timer for the link recovery process period for both parent and child. Note: Runs for unlimited time when specifying 0.
    INIT_PARAM *init_param;                         // Pointer to parameter when executing initial setting process.
    void (*LMAN_callback)(u8 msg,u8 param_count);   // Pointer to user-defined LMAN callback routine generated by link manager operation.
    void (*MSC_callback)(u16 REQ_commandID);        // User-defined MSC callback function. (When defining the link manager, defines the MSC callback using rfu_LMAN_initializeManager or rfu_LMAN_setMSCCallback without using rfu_setMSCCallback.)
} LINK_MANAGER;

/*  Note: The acceptable_serialNo_list uses the following format to specify a list of game serial numbers that the parent device can accept connections from and terminates with 0xffff. (maximum 16 devices)

    u16 acceptable_serialNo_list[]={0x0001, 0x0002, 0x0003, 0xffff};
*/

extern struct linkManagerTag lman;

u32 rfu_LMAN_REQBN_softReset_and_checkID(void);
void rfu_LMAN_requestChangeAgbClockMaster(void);
void rfu_LMAN_initializeRFU(INIT_PARAM *init_params);
u8 rfu_LMAN_establishConnection(u8 parent_child, u16 connect_period, u16 name_accept_period, u16 *acceptable_serialNo_list);
void rfu_LMAN_stopManager(bool8 forced_stop_and_RFU_reset_flag);
void rfu_LMAN_setMSCCallback(void (*MSC_callback_p)(u16));
void rfu_LMAN_REQ_sendData(bool8 clockChangeFlag);
void rfu_LMAN_powerDownRFU(void);
u8 rfu_LMAN_CHILD_connectParent(u16 parentId, u16 connect_period);
u8 rfu_LMAN_setLinkRecovery(u8 enable_flag, u16 recovery_period);
void rfu_LMAN_manager_entity(u32 rand);
void rfu_LMAN_syncVBlank(void);
u8 rfu_LMAN_initializeManager(void (*LMAN_callback_p)(u8, u8), void (*MSC_callback_p)(u16));
void rfu_LMAN_forceChangeSP(void);

#endif //GUARD_LINKMANAGER_H
