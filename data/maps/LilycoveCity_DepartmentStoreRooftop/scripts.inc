LilycoveCity_DepartmentStoreRooftop_MapScripts:: @ 815A13F
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
	.byte 0

LilycoveCity_DepartmentStoreRooftop_OnTransition:: @ 815A145
	getpricereduction 3
	compare VAR_RESULT, 1
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
	compare VAR_RESULT, 0
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman:: @ 815A15F
	clearflag FLAG_HIDE_ROOFTOP_LADY_LILYCOVE_MART
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman:: @ 815A163
	setflag FLAG_HIDE_ROOFTOP_LADY_LILYCOVE_MART
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman:: @ 815A167
	lock
	faceplayer
	message Text_HowMayIServeYou
	waitmessage
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
	msgbox Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:: @ 815A180
	.2byte DECOR_MUD_BALL
	.2byte DECOR_FENCE_LENGTH
	.2byte DECOR_FENCE_WIDTH
	.2byte DECOR_TIRE
	.2byte DECOR_BREAKABLE_DOOR
	.2byte DECOR_SOLID_BOARD
	.2byte DECOR_SAND_ORNAMENT
	.2byte DECOR_STAND
	.2byte DECOR_SLIDE
	.2byte DECOR_TV
	.2byte DECOR_ROUND_TV
	.2byte DECOR_CUTE_TV
	.2byte DECOR_WAILMER_DOLL
	.2byte DECOR_RHYDON_DOLL
	.2byte DECOR_NONE
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Man:: @ 815A1A0
	lock
	faceplayer
	getpricereduction 3
	compare VAR_RESULT, 1
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale:: @ 815A1BA
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan:: @ 815A1C4
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine:: @ 815A1CD
	lockall
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
	waitmessage
	showmoneybox 0, 0
	nop
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink:: @ 815A1DE
	multichoice 16, 0, 42, 0
	copyvar VAR_TEMP_1, VAR_RESULT
	switch VAR_TEMP_1
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater:: @ 815A21C
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop:: @ 815A227
	setvar VAR_TEMP_0, ITEM_SODA_POP
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade:: @ 815A232
	setvar VAR_TEMP_0, ITEM_LEMONADE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater:: @ 815A23D
	checkmoney 200, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop:: @ 815A244
	checkmoney 300, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade:: @ 815A24B
	checkmoney 350, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater:: @ 815A252
	removemoney 200, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop:: @ 815A259
	removemoney 300, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade:: @ 815A260
	removemoney 350, 0
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink:: @ 815A267
	compare VAR_TEMP_1, 0
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
	compare VAR_TEMP_1, 1
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
	compare VAR_TEMP_1, 2
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	compare VAR_TEMP_1, 0
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
	compare VAR_TEMP_1, 1
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
	compare VAR_TEMP_1, 2
	call_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
	updatemoneybox 0, 0
	nop
	bufferitemname 0, VAR_TEMP_0
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, 14
	msgbox Text_PutItemInPocket, MSGBOX_DEFAULT
	random 64
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, 14
	msgbox Text_PutItemInPocket, MSGBOX_DEFAULT
	random 64
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, 14
	msgbox Text_PutItemInPocket, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink:: @ 815A36E
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
	waitmessage
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink:: @ 815A37A
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink:: @ 815A388
	msgbox Text_TheBagIsFull, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine:: @ 815A396
	hidemoneybox 0, 0
	releaseall
	end
