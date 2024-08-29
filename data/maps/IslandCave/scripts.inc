IslandCave_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, IslandCave_OnResume
	map_script MAP_SCRIPT_ON_LOAD, IslandCave_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, IslandCave_OnTransition
	.byte 0

IslandCave_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, IslandCave_EventScript_TryRemoveRegice
	end

IslandCave_EventScript_TryRemoveRegice::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

IslandCave_OnLoad:
	call_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_HideRegiEntrance
	end

IslandCave_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

IslandCave_OnTransition:
	setflag FLAG_LANDMARK_ISLAND_CAVE
	call IslandCave_EventScript_ClearSteps
	call_if_unset FLAG_DEFEATED_REGICE, IslandCave_EventScript_ShowRegice
	end

IslandCave_EventScript_ShowRegice::
	clearflag FLAG_HIDE_REGICE
	return

IslandCave_EventScript_OpenRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
	special DrawWholeMapView
	playse SE_BANG
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
	end

IslandCave_EventScript_CaveEntranceMiddle::
	lockall
	call_if_set FLAG_TEMP_3, IslandCave_EventScript_ClearSteps
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_BigHoleInWall
	braillemessage IslandCave_Braille_RunLapAroundWall
	setflag FLAG_TEMP_2
	special ShouldDoBrailleRegicePuzzle
	goto IslandCave_EventScript_CloseBrailleMsg
	end

IslandCave_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

IslandCave_EventScript_CaveEntranceSide::
	lockall
	call_if_set FLAG_TEMP_3, IslandCave_EventScript_ClearSteps
	braillemessage IslandCave_Braille_RunLapAroundWall
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CloseBrailleMsg
	setflag FLAG_TEMP_2
	special ShouldDoBrailleRegicePuzzle
	goto IslandCave_EventScript_CloseBrailleMsg
	end

IslandCave_EventScript_CloseBrailleMsg::
	waitbuttonpress
	closebraillemessage
	releaseall
	end

IslandCave_EventScript_ClearSteps::
	setvar VAR_REGICE_STEPS_1, 0
	setvar VAR_REGICE_STEPS_2, 0
	setvar VAR_REGICE_STEPS_3, 0
	clearflag FLAG_TEMP_3
	return

IslandCave_EventScript_Regice::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGICE, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, IslandCave_EventScript_DefeatedRegice
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IslandCave_EventScript_RanFromRegice
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IslandCave_EventScript_RanFromRegice
	setflag FLAG_DEFEATED_REGICE
	release
	end

IslandCave_EventScript_DefeatedRegice::
	setflag FLAG_DEFEATED_REGICE
	goto Common_EventScript_RemoveStaticPokemon
	end

IslandCave_EventScript_RanFromRegice::
	setvar VAR_0x8004, SPECIES_REGICE
	goto Common_EventScript_LegendaryFlewAway
	end

IslandCave_EventScript_Josh::
	trainerbattle_single TRAINER_TYRANT_JOSH, IslandCave_Text_TyrantJoshIntro, IslandCave_Text_TyrantJoshDefeated
	msgbox IslandCave_Text_TyrantJoshPostBattle, MSGBOX_AUTOCLOSE
	end

IslandCave_Text_TyrantJoshIntro:
	.string "JIM:Oy,'arry, is that the bloody bobby?\n"
	.string "HARRY: Bloody 'ell its certainly not a\l"
	.string "parcel delivery. What you reckon she is?\l"
	.string "JIM: Trouble, she's nothing but trouble.\l"
	.string "let's give her the friendly London\l"
	.string "greeting and snuff her out before she\l"
	.string "tells the Bobby we're 'ere, ey 'arry?\l"
	.string "HARRY: Cheerio then we can have some\l"
	.string "fish and chips at the pub.$"

IslandCave_Text_TyrantJoshDefeated:
	.string "JIM: Aw, bollocks! We've done it now.\n"
	.string "HARRY: We really buggered it this time.\l"
	.string "The UN will have us on a platter for\l"
	.string "supper for failing again.$"


IslandCave_Text_TyrantJoshPostBattle:
	.string "If you tell the bobby we are 'ere, our\n"
	.string "country will make sure you end up the\l"
	.string "next Spencer Perceval .$"
