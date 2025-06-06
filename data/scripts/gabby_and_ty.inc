Route111_EventScript_1AE313:: @ 81AE313
Route118_EventScript_1AE313:: @ 81AE313
Route120_EventScript_1AE313:: @ 81AE313
	cleartrainerflag TRAINER_GABBY_AND_TY_6
	specialvar VAR_RESULT, GabbyAndTyGetBattleNum
	switch VAR_RESULT
	case 0, Route111_EventScript_1AE384
	case 1, Route111_EventScript_1AE38A
	case 2, Route111_EventScript_1AE395
	case 3, Route111_EventScript_1AE3A0
	case 4, Route111_EventScript_1AE3AB
	case 5, Route111_EventScript_1AE3B6
	case 6, Route111_EventScript_1AE3C1
	case 7, Route111_EventScript_1AE3CC
	case 8, Route111_EventScript_1AE3D7
	end

Route111_EventScript_1AE384:: @ 81AE384
	call Route111_EventScript_1AE3E6
	return

Route111_EventScript_1AE38A:: @ 81AE38A
	call Route111_EventScript_1AE3EE
	call Route111_EventScript_1AE3E2
	return

Route111_EventScript_1AE395:: @ 81AE395
	call Route111_EventScript_1AE3F6
	call Route111_EventScript_1AE3EA
	return

Route111_EventScript_1AE3A0:: @ 81AE3A0
	call Route111_EventScript_1AE3FE
	call Route111_EventScript_1AE3F2
	return

Route111_EventScript_1AE3AB:: @ 81AE3AB
	call Route111_EventScript_1AE406
	call Route111_EventScript_1AE3FA
	return

Route111_EventScript_1AE3B6:: @ 81AE3B6
	call Route111_EventScript_1AE40E
	call Route111_EventScript_1AE402
	return

Route111_EventScript_1AE3C1:: @ 81AE3C1
	call Route111_EventScript_1AE416
	call Route111_EventScript_1AE40A
	return

Route111_EventScript_1AE3CC:: @ 81AE3CC
	call Route111_EventScript_1AE41E
	call Route111_EventScript_1AE412
	return

Route111_EventScript_1AE3D7:: @ 81AE3D7
	call Route111_EventScript_1AE40E
	call Route111_EventScript_1AE41A
	return

Route111_EventScript_1AE3E2:: @ 81AE3E2
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE111_1
	return

Route111_EventScript_1AE3E6:: @ 81AE3E6
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE111_1
	return

Route111_EventScript_1AE3EA:: @ 81AE3EA
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE118_1
	return

Route111_EventScript_1AE3EE:: @ 81AE3EE
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE118_1
	return

Route111_EventScript_1AE3F2:: @ 81AE3F2
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE120_1
	return

Route111_EventScript_1AE3F6:: @ 81AE3F6
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE120_1
	return

Route111_EventScript_1AE3FA:: @ 81AE3FA
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE111_2
	return

Route111_EventScript_1AE3FE:: @ 81AE3FE
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE111_2
	return

Route111_EventScript_1AE402:: @ 81AE402
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE118_2
	return

Route111_EventScript_1AE406:: @ 81AE406
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE118_2
	return

Route111_EventScript_1AE40A:: @ 81AE40A
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE120_2
	return

Route111_EventScript_1AE40E:: @ 81AE40E
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE120_2
	return

Route111_EventScript_1AE412:: @ 81AE412
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE111_3
	return

Route111_EventScript_1AE416:: @ 81AE416
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE111_3
	return

Route111_EventScript_1AE41A:: @ 81AE41A
	setflag FLAG_HIDE_GABBY_AND_TY_ROUTE118_3
	return

Route111_EventScript_1AE41E:: @ 81AE41E
	clearflag FLAG_HIDE_GABBY_AND_TY_ROUTE118_3
	return

Route111_EventScript_1AE422:: @ 81AE422
	trainerbattle_double TRAINER_GABBY_AND_TY_1, Route111_Text_1ABED8, Route111_Text_1ABFD3, Route111_Text_1AC5CA, Route111_EventScript_1AE5A2
	msgbox Route111_Text_1AC59E, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_1AE442:: @ 81AE442
	trainerbattle_double TRAINER_GABBY_AND_TY_1, Route111_Text_1AC73B, Route111_Text_1AC892, Route111_Text_1AC820, Route111_EventScript_1AE5A2
	msgbox Route111_Text_1AC7E4, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_1AE462:: @ 81AE462
	trainerbattle_double TRAINER_GABBY_AND_TY_2, Route118_Text_1ABF50, Route118_Text_1AC6F8, Route118_Text_1AC5CA, Route118_EventScript_1AE60F
	msgbox Route118_Text_1AC59E, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_1AE482:: @ 81AE482
	trainerbattle_double TRAINER_GABBY_AND_TY_2, Route118_Text_1AC790, Route118_Text_1AC8D7, Route118_Text_1AC820, Route118_EventScript_1AE60F
	msgbox Route118_Text_1AC7E4, MSGBOX_DEFAULT
	release
	end

Route120_EventScript_1AE4A2:: @ 81AE4A2
	trainerbattle_double TRAINER_GABBY_AND_TY_3, Route120_Text_1ABF50, Route120_Text_1AC6F8, Route120_Text_1AC5CA, Route120_EventScript_1AE60F
	msgbox Route120_Text_1AC59E, MSGBOX_DEFAULT
	release
	end

Route120_EventScript_1AE4C2:: @ 81AE4C2
	trainerbattle_double TRAINER_GABBY_AND_TY_3, Route120_Text_1AC790, Route120_Text_1AC8D7, Route120_Text_1AC820, Route120_EventScript_1AE60F
	msgbox Route120_Text_1AC7E4, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_1AE4E2:: @ 81AE4E2
	trainerbattle_double TRAINER_GABBY_AND_TY_4, Route111_Text_1ABF50, Route111_Text_1AC6F8, Route111_Text_1AC5CA, Route111_EventScript_1AE60F
	msgbox Route111_Text_1AC59E, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_1AE502:: @ 81AE502
	trainerbattle_double TRAINER_GABBY_AND_TY_4, Route111_Text_1AC790, Route111_Text_1AC8D7, Route111_Text_1AC820, Route111_EventScript_1AE60F
	msgbox Route111_Text_1AC7E4, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_1AE522:: @ 81AE522
	trainerbattle_double TRAINER_GABBY_AND_TY_5, Route118_Text_1ABF50, Route118_Text_1AC6F8, Route118_Text_1AC5CA, Route118_EventScript_1AE60F
	msgbox Route118_Text_1AC59E, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_1AE542:: @ 81AE542
	trainerbattle_double TRAINER_GABBY_AND_TY_5, Route118_Text_1AC790, Route118_Text_1AC8D7, Route118_Text_1AC820, Route118_EventScript_1AE60F
	msgbox Route118_Text_1AC7E4, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_1AE562:: @ 81AE562
Route118_EventScript_1AE562:: @ 81AE562
Route120_EventScript_1AE562:: @ 81AE562
	trainerbattle_double TRAINER_GABBY_AND_TY_6, Route111_Text_1ABF50, Route111_Text_1AC6F8, Route111_Text_1AC5CA, Route111_EventScript_1AE60F
	msgbox Route111_Text_1AC59E, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_1AE582:: @ 81AE582
Route118_EventScript_1AE582:: @ 81AE582
Route120_EventScript_1AE582:: @ 81AE582
	trainerbattle_double TRAINER_GABBY_AND_TY_6, Route111_Text_1AC790, Route111_Text_1AC8D7, Route111_Text_1AC820, Route111_EventScript_1AE60F
	msgbox Route111_Text_1AC7E4, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_1AE5A2:: @ 81AE5A2
	special GabbyAndTyBeforeInterview
	special GetGabbyAndTyLocalIds
	compare VAR_FACING, 2
	call_if_eq Route111_EventScript_1AE5E0
	compare VAR_FACING, 1
	call_if_eq Route111_EventScript_1AE5EB
	compare VAR_FACING, 4
	call_if_eq Route111_EventScript_1AE5FD
	goto_if_set FLAG_TEMP_1, Route111_EventScript_1AE73A
	msgbox Route111_Text_1AC015, MSGBOX_YESNO
	goto Route111_EventScript_1AE6F3
	end

Route111_EventScript_1AE5E0:: @ 81AE5E0
	applymovement VAR_0x8004, Route111_Movement_1AE699
	waitmovement 0
	return

Route111_EventScript_1AE5EB:: @ 81AE5EB
	applymovement VAR_0x8004, Route111_Movement_1AE69B
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	return

Route111_EventScript_1AE5FD:: @ 81AE5FD
	applymovement VAR_0x8004, Route111_Movement_1AE69D
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	return

Route111_EventScript_1AE60F:: @ 81AE60F
Route118_EventScript_1AE60F:: @ 81AE60F
Route120_EventScript_1AE60F:: @ 81AE60F
	special GabbyAndTyBeforeInterview
	special GetGabbyAndTyLocalIds
	compare VAR_FACING, 2
	call_if_eq Route111_EventScript_1AE5E0
	compare VAR_FACING, 1
	call_if_eq Route111_EventScript_1AE5EB
	compare VAR_FACING, 4
	call_if_eq Route111_EventScript_1AE5FD
	goto_if_set FLAG_TEMP_1, Route111_EventScript_1AE73A
	specialvar VAR_RESULT, GabbyAndTyGetLastQuote
	compare VAR_RESULT, 0
	goto_if_eq Route111_EventScript_1AE69F
	msgbox Route111_Text_1AC10A, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GabbyAndTyGetLastBattleTrivia
	switch VAR_RESULT
	case 0, Route111_EventScript_1AE6AD
	case 1, Route111_EventScript_1AE6BB
	case 2, Route111_EventScript_1AE6C9
	case 3, Route111_EventScript_1AE6D7
	case 4, Route111_EventScript_1AE6E5
	end

Route111_Movement_1AE699:: @ 81AE699
	walk_in_place_down
	step_end

Route111_Movement_1AE69B:: @ 81AE69B
	walk_in_place_up
	step_end

Route111_Movement_1AE69D:: @ 81AE69D
	walk_in_place_left
	step_end

Route111_EventScript_1AE69F:: @ 81AE69F
	msgbox Route111_Text_1AC60B, MSGBOX_YESNO
	goto Route111_EventScript_1AE6F3
	end

Route111_EventScript_1AE6AD:: @ 81AE6AD
	msgbox Route111_Text_1AC3CF, MSGBOX_YESNO
	goto Route111_EventScript_1AE6F3
	end

Route111_EventScript_1AE6BB:: @ 81AE6BB
	msgbox Route111_Text_1AC18D, MSGBOX_YESNO
	goto Route111_EventScript_1AE6F3
	end

Route111_EventScript_1AE6C9:: @ 81AE6C9
	msgbox Route111_Text_1AC219, MSGBOX_YESNO
	goto Route111_EventScript_1AE6F3
	end

Route111_EventScript_1AE6D7:: @ 81AE6D7
	msgbox Route111_Text_1AC2D6, MSGBOX_YESNO
	goto Route111_EventScript_1AE6F3
	end

Route111_EventScript_1AE6E5:: @ 81AE6E5
	msgbox Route111_Text_1AC355, MSGBOX_YESNO
	goto Route111_EventScript_1AE6F3
	end

Route111_EventScript_1AE6F3:: @ 81AE6F3
	compare VAR_RESULT, NO
	goto_if_eq Route111_EventScript_1AE72D
	msgbox Route111_Text_1AC40F, MSGBOX_DEFAULT
	setvar VAR_0x8004, 10
	call Common_EventScript_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq Route111_EventScript_1AE72D
	msgbox Route111_Text_1AC487, MSGBOX_DEFAULT
	special GabbyAndTyAfterInterview
	setflag FLAG_TEMP_1
	release
	end

Route111_EventScript_1AE72D:: @ 81AE72D
	msgbox Route111_Text_1AC553, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	release
	end

Route111_EventScript_1AE73A:: @ 81AE73A
	msgbox Route111_Text_1AC59E, MSGBOX_DEFAULT
	release
	end
