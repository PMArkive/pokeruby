Route110_SeasideCyclingRoadSouthEntrance_MapScripts:: @ 816347E
	.byte 0

Route110_SeasideCyclingRoadSouthEntrance_EventScript_16347F:: @ 816347F
	lock
	faceplayer
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_19E326, MSGBOX_DEFAULT
	release
	end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_16348B:: @ 816348B
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	compare VAR_RESULT, 0
	goto_if_eq Route110_SeasideCyclingRoadSouthEntrance_EventScript_1634A6
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
	releaseall
	end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_1634A6:: @ 81634A6
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_19E3AD, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Route110_SeasideCyclingRoadSouthEntrance_Movement_1634BB
	waitmovement 0
	releaseall
	end

Route110_SeasideCyclingRoadSouthEntrance_Movement_1634BB:: @ 81634BB
	walk_left
	step_end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_1634BD:: @ 81634BD
	lockall
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	releaseall
	end
