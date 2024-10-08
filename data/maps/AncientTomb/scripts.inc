AncientTomb_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
	.byte 0

AncientTomb_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_EventScript_TryRemoveRegisteel
	end

AncientTomb_EventScript_TryRemoveRegisteel::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

AncientTomb_OnTransition:
	setflag FLAG_LANDMARK_ANCIENT_TOMB
	call_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_EventScript_ShowRegisteel
	end

AncientTomb_EventScript_ShowRegisteel::
	clearflag FLAG_HIDE_REGISTEEL
	return

AncientTomb_OnLoad:
	call_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_HideRegiEntrance
	end

AncientTomb_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

AncientTomb_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_BigHoleInWall
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
	releaseall
	end

AncientTomb_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

AncientTomb_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
	releaseall
	end

AncientTomb_EventScript_Registeel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGISTEEL, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedRegisteel
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromRegisteel
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromRegisteel
	setflag FLAG_DEFEATED_REGISTEEL
	release
	end

AncientTomb_EventScript_DefeatedRegisteel::
	setflag FLAG_DEFEATED_REGISTEEL
	goto Common_EventScript_RemoveStaticPokemon
	end

AncientTomb_EventScript_RanFromRegisteel::
	setvar VAR_0x8004, SPECIES_REGISTEEL
	goto Common_EventScript_LegendaryFlewAway
	end

AncientTomb_EventScript_Knowles::
	trainerbattle_single TRAINER_KNOWLES, AncientTomb_Text_KnowlesIntro, AncientTomb_Text_KnowlesDefeated
	msgbox AncientTomb_Text_KnowlesPostBattle, MSGBOX_AUTOCLOSE
	end

AncientTomb_Text_KnowlesIntro:
	.string "JIM:Oy,'arry, is that the bloody bobby?\n"
	.string "HARRY: Bloody 'ell its certainly not a\l"
	.string "parcel delivery. What you reckon she is?\l"
	.string "JIM: Trouble, she's nothing but trouble.\l"
	.string "let's give her the friendly London\l"
	.string "greeting and snuff her out before she\l"
	.string "tells the Bobby we're 'ere, ey 'arry?\l"
	.string "HARRY: Cheerio then we can have some\l"
	.string "fish and chips at the pub.$"

AncientTomb_Text_KnowlesDefeated:
	.string "JIM: Aw, bollocks! We've done it now.\n"
	.string "HARRY: We really buggered it this time.\l"
	.string "The UN will have us on a platter for\l"
	.string "supper for failing again.$"


AncientTomb_Text_KnowlesPostBattle:
	.string "If you tell the bobby we are 'ere, our\n"
	.string "country will make sure you end up the\l"
	.string "next Spencer Perceval .$"
