DesertRuins_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_OnResume
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_OnTransition
	.byte 0

DesertRuins_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_EventScript_TryRemoveRegirock
	end

DesertRuins_EventScript_TryRemoveRegirock::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

DesertRuins_OnLoad:
	call_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_HideRegiEntrance
	end

DesertRuins_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

DesertRuins_OnTransition:
	setflag FLAG_LANDMARK_DESERT_RUINS
	call_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_EventScript_ShowRegirock
	end

DesertRuins_EventScript_ShowRegirock::
	clearflag FLAG_HIDE_REGIROCK
	return

DesertRuins_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_BigHoleInWall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

DesertRuins_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_Regirock::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DesertRuins_EventScript_DefeatedRegirock
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DesertRuins_EventScript_RanFromRegirock
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_RanFromRegirock
	setflag FLAG_DEFEATED_REGIROCK
	release
	end

DesertRuins_EventScript_DefeatedRegirock::
	setflag FLAG_DEFEATED_REGIROCK
	goto Common_EventScript_RemoveStaticPokemon
	end

DesertRuins_EventScript_RanFromRegirock::
	setvar VAR_0x8004, SPECIES_REGIROCK
	goto Common_EventScript_LegendaryFlewAway
	end

DesertRuins_EventScript_JimandHarry::
	trainerbattle_single TRAINER_JIM_AND_HARRY, DesertRuins_Text_JimandHarryIntro, DesertRuins_Text_JimandHarryDefeated
	msgbox DesertRuins_Text_JimandHarryPostBattle, MSGBOX_AUTOCLOSE
	end

DesertRuins_Text_JimandHarryIntro:
	.string "JIM:Why did King Ramses endure 7\n"
	.string "plagues and still release Moses'\l"
	.string "people? He did the hard part, he just\l"
	.string "choked and gave up!\l"
	.string "HARRY:Please don't use any ape pokemon\l"
	.string "against me or I'll forefeit, no it's not\l"
	.string "typist, I don't care what pokeX says,\l"
	.string "Apes are scary$"


DesertRuins_Text_JimandHarryDefeated:
	.string "JIM: -I sputter so hard and start\n"
	.string "coughing and some green stuff came out\l"
	.string "over your pokemon-\l"
	.string "HARRY:..........Uuugh How long was I\l"
	.string "fucking muted? I thought you were just\l"
	.string "ignoring me$"


DesertRuins_Text_JimandHarryPostBattle:
	.string "JIM:Do you have any idea how soaked my\n"
	.string "armpits are right now?\l"
	.string "HARRY:Listen, I know you think you're\l"
	.string "really good, but I let you win, okay? \l"
	.string "(he is visibly holding back tears)$"
