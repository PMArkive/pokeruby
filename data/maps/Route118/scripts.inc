Route118_MapScripts:: @ 8150F28
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_MapScript1_150F2E
	.byte 0

Route118_MapScript1_150F2E:: @ 8150F2E
	call Route118_EventScript_1AE313
	end

Route118_EventScript_150F34:: @ 8150F34
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_150F89
	msgbox Route118_Text_170F12, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route118_EventScript_150F5E
	compare VAR_RESULT, NO
	goto_if_eq Route118_EventScript_150F7F
	end

Route118_EventScript_150F5E:: @ 8150F5E
	msgbox Route118_Text_170F46, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	setflag FLAG_RECEIVED_GOOD_ROD
	msgbox Route118_Text_170F7E, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_150F7F:: @ 8150F7F
	msgbox Route118_Text_170FB0, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_150F89:: @ 8150F89
	msgbox Route118_Text_170FC8, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_150F93:: @ 8150F93
	msgbox Route118_Text_170FFE, MSGBOX_NPC
	end

Route118_EventScript_150F9C:: @ 8150F9C
	msgbox Route118_Text_17108B, MSGBOX_SIGN
	end

Route118_EventScript_150FA5:: @ 8150FA5
	msgbox Route118_Text_1710A5, MSGBOX_SIGN
	end

Route118_EventScript_150FAE:: @ 8150FAE
	lockall
	setvar VAR_0x8008, 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	applymovement 19, Route118_Movement_151069
	waitmovement 0
	goto Route118_EventScript_151004
	end

Route118_EventScript_150FCE:: @ 8150FCE
	lockall
	setvar VAR_0x8008, 1
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	goto Route118_EventScript_151004
	end

Route118_EventScript_150FE4:: @ 8150FE4
	lockall
	setvar VAR_0x8008, 2
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	applymovement 19, Route118_Movement_15106B
	waitmovement 0
	goto Route118_EventScript_151004
	end

Route118_EventScript_151004:: @ 8151004
	playse SE_LEDGE
	applymovement 19, Route118_Movement_15106D
	waitmovement 0
	delay 30
	msgbox Route118_Text_170D66, MSGBOX_DEFAULT
	closemessage
	compare VAR_0x8008, 0
	call_if_eq Route118_EventScript_151048
	compare VAR_0x8008, 1
	call_if_eq Route118_EventScript_151053
	compare VAR_0x8008, 2
	call_if_eq Route118_EventScript_15105E
	setvar VAR_ROUTE118_STATE, 1
	removeobject 19
	releaseall
	end

Route118_EventScript_151048:: @ 8151048
	applymovement 19, Route118_Movement_151071
	waitmovement 0
	return

Route118_EventScript_151053:: @ 8151053
	applymovement 19, Route118_Movement_15107C
	waitmovement 0
	return

Route118_EventScript_15105E:: @ 815105E
	applymovement 19, Route118_Movement_151086
	waitmovement 0
	return

Route118_Movement_151069:: @ 8151069
	walk_left
	step_end

Route118_Movement_15106B:: @ 815106B
	walk_right
	step_end

Route118_Movement_15106D:: @ 815106D
	jump_2_down
	delay_16
	walk_down
	step_end

Route118_Movement_151071:: @ 8151071
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route118_Movement_15107C:: @ 815107C
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route118_Movement_151086:: @ 8151086
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route118_EventScript_15108F:: @ 815108F
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_1BDFF4, Route118_Text_1BE03C
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_1510B6
	msgbox Route118_Text_1BE05E, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_1510B6:: @ 81510B6
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_1BE0AB, Route118_Text_1BE0D3
	msgbox Route118_Text_1BE104, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_1510CD:: @ 81510CD
	trainerbattle_single TRAINER_BARNY, Route118_Text_1BE24A, Route118_Text_1BE291
	msgbox Route118_Text_1BE2BE, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_1510E4:: @ 81510E4
	trainerbattle_single TRAINER_WADE, Route118_Text_1BE318, Route118_Text_1BE385
	msgbox Route118_Text_1BE39C, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_1510FB:: @ 81510FB
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_1BE3E8, Route118_Text_1BE406
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq Route118_EventScript_151122
	msgbox Route118_Text_1BE413, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_151122:: @ 8151122
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_1BE489, Route118_Text_1BE4CC
	msgbox Route118_Text_1BE4D9, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_151139:: @ 8151139
	trainerbattle_single TRAINER_PERRY, Route118_Text_1BE148, Route118_Text_1BE188
	msgbox Route118_Text_1BE19D, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_151150:: @ 8151150
	trainerbattle_single TRAINER_CHESTER, Route118_Text_1BE1D7, Route118_Text_1BE1F5
	msgbox Route118_Text_1BE20D, MSGBOX_AUTOCLOSE
	end
