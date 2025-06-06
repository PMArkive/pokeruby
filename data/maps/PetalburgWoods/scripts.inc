PetalburgWoods_MapScripts:: @ 815CC9C
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoods_MapScript1_15CCA2
	.byte 0

PetalburgWoods_MapScript1_15CCA2:: @ 815CCA2
	call Common_EventScript_SetupEvilTeamGfxIds
	end

PetalburgWoods_EventScript_15CCA8:: @ 815CCA8
	lockall
	call PetalburgWoods_EventScript_15CDE6
	applymovement 4, PetalburgWoods_Movement_15CE89
	waitmovement 0
	msgbox PetalburgWoods_Text_194D92, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_EVIL_TEAM, FALSE
	applymovement 3, PetalburgWoods_Movement_15CEC3
	waitmovement 0
	msgbox PetalburgWoods_Text_194DED, MSGBOX_DEFAULT
	closemessage
	applymovement 3, PetalburgWoods_Movement_15CEB0
	waitmovement 0
	applymovement 4, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox PetalburgWoods_Text_194E6B, MSGBOX_DEFAULT
	closemessage
	applymovement 4, PetalburgWoods_Movement_15CE9E
	waitmovement 0
	msgbox PetalburgWoods_Text_194E9A, MSGBOX_DEFAULT
	applymovement 3, PetalburgWoods_Movement_15CEC8
	waitmovement 0
	msgbox PetalburgWoods_Text_194EE8, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PETALBURG_WOODS_GRUNT, PetalburgWoods_Text_194F83
	applymovement 3, PetalburgWoods_Movement_15CEB3
	waitmovement 0
	call PetalburgWoods_EventScript_15CDFA
	applymovement 4, PetalburgWoods_Movement_15CE80
	waitmovement 0
	goto PetalburgWoods_EventScript_15CE69
	end

PetalburgWoods_EventScript_15CD42:: @ 815CD42
	lockall
	call PetalburgWoods_EventScript_15CDE6
	applymovement 4, PetalburgWoods_Movement_15CE8E
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_194D92, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_EVIL_TEAM, FALSE
	applymovement 3, PetalburgWoods_Movement_15CEC3
	waitmovement 0
	msgbox PetalburgWoods_Text_194DED, MSGBOX_DEFAULT
	closemessage
	applymovement 3, PetalburgWoods_Movement_15CEBF
	waitmovement 0
	applymovement 4, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox PetalburgWoods_Text_194E6B, MSGBOX_DEFAULT
	closemessage
	applymovement 4, PetalburgWoods_Movement_15CEA4
	waitmovement 0
	msgbox PetalburgWoods_Text_194E9A, MSGBOX_DEFAULT
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox PetalburgWoods_Text_194EE8, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PETALBURG_WOODS_GRUNT, PetalburgWoods_Text_194F83
	applymovement 3, PetalburgWoods_Movement_15CEB3
	waitmovement 0
	call PetalburgWoods_EventScript_15CDFA
	applymovement 4, PetalburgWoods_Movement_15CE95
	waitmovement 0
	goto PetalburgWoods_EventScript_15CE69
	end

PetalburgWoods_EventScript_15CDE6:: @ 815CDE6
	applymovement 4, PetalburgWoods_Movement_15CE73
	waitmovement 0
	msgbox PetalburgWoods_Text_194D71, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_15CDFA:: @ 815CDFA
	msgbox PetalburgWoods_Text_194FA4, MSGBOX_DEFAULT
	closemessage
	applymovement 3, PetalburgWoods_Movement_15CEB7
	waitmovement 0
	removeobject 3
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox PetalburgWoods_Text_19507E, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	compare VAR_RESULT, 0
	goto_if_eq PetalburgWoods_EventScript_15CE3F
	goto PetalburgWoods_EventScript_15CE4D
	end

PetalburgWoods_EventScript_15CE3F:: @ 815CE3F
	msgbox PetalburgWoods_Text_195182, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_15CE4D
	end

PetalburgWoods_EventScript_15CE4D:: @ 815CE4D
	msgbox PetalburgWoods_Text_19510A, MSGBOX_DEFAULT
	applymovement 4, PetalburgWoods_Movement_15CEA8
	waitmovement 0
	msgbox PetalburgWoods_Text_195153, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_15CE69:: @ 815CE69
	removeobject 4
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_Movement_15CE73:: @ 815CE73
	face_up
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	face_down
	delay_16
	face_right
	delay_16
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_15CE80:: @ 815CE80
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_15CE89:: @ 815CE89
	delay_16
	face_player
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_15CE8E:: @ 815CE8E
	delay_16
	face_player
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end

PetalburgWoods_Movement_15CE95:: @ 815CE95
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_15CE9E:: @ 815CE9E
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_in_place_fastest_up
	step_end

PetalburgWoods_Movement_15CEA4:: @ 815CEA4
	walk_fast_down
	walk_fast_right
	walk_in_place_fastest_up
	step_end

PetalburgWoods_Movement_15CEA8:: @ 815CEA8
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

PetalburgWoods_Movement_15CEB0:: @ 815CEB0
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_15CEB3:: @ 815CEB3
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

PetalburgWoods_Movement_15CEB7:: @ 815CEB7
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_15CEBF:: @ 815CEBF
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_15CEC3:: @ 815CEC3
	walk_down
	walk_down
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_15CEC8:: @ 815CEC8
	walk_down
	step_end

PetalburgWoods_EventScript_15CECA:: @ 815CECA
	msgbox PetalburgWoods_Text_1953AC, MSGBOX_NPC
	end

PetalburgWoods_EventScript_15CED3:: @ 815CED3
	msgbox PetalburgWoods_Text_19542B, MSGBOX_NPC
	end

PetalburgWoods_EventScript_15CEDC:: @ 815CEDC
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_15CF0B
	msgbox PetalburgWoods_Text_19549E, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MIRACLE_SEED
	release
	end

PetalburgWoods_EventScript_15CF0B:: @ 815CF0B
	msgbox PetalburgWoods_Text_195503, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_15CF15:: @ 815CF15
	msgbox PetalburgWoods_Text_1955B0, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_15CF1E:: @ 815CF1E
	msgbox PetalburgWoods_Text_1956A6, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_15CF27:: @ 815CF27
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_1951BE, PetalburgWoods_Text_195202
	msgbox PetalburgWoods_Text_195232, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_15CF3E:: @ 815CF3E
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_19526A, PetalburgWoods_Text_1952AE
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq PetalburgWoods_EventScript_15CF65
	msgbox PetalburgWoods_Text_1952CC, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_15CF65:: @ 815CF65
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_195306, PetalburgWoods_Text_195338
	msgbox PetalburgWoods_Text_195356, MSGBOX_AUTOCLOSE
	end
