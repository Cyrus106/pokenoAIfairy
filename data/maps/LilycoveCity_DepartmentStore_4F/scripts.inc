LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM26  @ Earthquake
	.2byte ITEM_TM27  @ Return
	.2byte ITEM_TM28  @ Dig
	.2byte ITEM_TM29  @ Psychic
	.2byte ITEM_TM30  @ Shadow Ball
	.2byte ITEM_TM31  @ Brick Break
	.2byte ITEM_TM32  @ Double Team
	.2byte ITEM_TM33  @ Reflect
	.2byte ITEM_TM34  @ Shock Wave
	.2byte ITEM_TM35  @ Flamethrower
	.2byte ITEM_TM36  @ Sludge Bomb
	.2byte ITEM_TM37  @ Sandstorm
	.2byte ITEM_TM38  @ Fire Blast
	.2byte ITEM_TM39  @ Rock Tomb
	.2byte ITEM_TM40  @ Aerial Ace
	.2byte ITEM_TM41  @ Torment
	.2byte ITEM_TM42  @ Facade
	.2byte ITEM_TM43  @ Secret Power
	.2byte ITEM_TM44  @ Rest
	.2byte ITEM_TM45  @ Attract
	.2byte ITEM_TM46  @ Thief
	.2byte ITEM_TM47  @ Steel Wing
	.2byte ITEM_TM48  @ Skill Swap
	.2byte ITEM_TM49  @ Snatch
	.2byte ITEM_TM50  @ Overheat
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
	.2byte ITEM_TM01  @ Focus Punch
	.2byte ITEM_TM02  @ Dragon Claw
	.2byte ITEM_TM03  @ Water Pulse
	.2byte ITEM_TM04  @ Calm Mind
	.2byte ITEM_TM05  @ Roar
	.2byte ITEM_TM06  @ Toxic
	.2byte ITEM_TM07  @ Hail
	.2byte ITEM_TM08  @ Bulk Up
	.2byte ITEM_TM09  @ Bullet Seed
	.2byte ITEM_TM10  @ Hidden Power
	.2byte ITEM_TM11  @ Sunny Day
	.2byte ITEM_TM12  @ Taunt
	.2byte ITEM_TM13  @ Ice Beam
	.2byte ITEM_TM14  @ Blizzard
	.2byte ITEM_TM15  @ Hyper Beam
	.2byte ITEM_TM16  @ Light Screen
	.2byte ITEM_TM17  @ Protect
	.2byte ITEM_TM18  @ Rain Dance
	.2byte ITEM_TM19  @ Giga Drain
	.2byte ITEM_TM20  @ Safeguard
	.2byte ITEM_TM21  @ Frustration
	.2byte ITEM_TM22  @ Solar Beam
	.2byte ITEM_TM23  @ Iron Tail
	.2byte ITEM_TM24  @ Thunderbolt
	.2byte ITEM_TM25  @ Thunder
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

