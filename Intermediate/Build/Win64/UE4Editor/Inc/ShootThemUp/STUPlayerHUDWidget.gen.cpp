// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/UI/STUPlayerHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUPlayerHUDWidget() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUPlayerHUDWidget_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUPlayerHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
	SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
// End Cross Module References
	DEFINE_FUNCTION(USTUPlayerHUDWidget::execIsPlayerSpectating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerSpectating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerHUDWidget::execIsPlayerAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerHUDWidget::execGetCurrentWeaponAmmoData)
	{
		P_GET_STRUCT_REF(FAmmoData,Z_Param_Out_AmmoData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentWeaponAmmoData(Z_Param_Out_AmmoData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerHUDWidget::execGetCurrentWeaponUIData)
	{
		P_GET_STRUCT_REF(FWeaponUIData,Z_Param_Out_UIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentWeaponUIData(Z_Param_Out_UIData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerHUDWidget::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	static FName NAME_USTUPlayerHUDWidget_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	void USTUPlayerHUDWidget::OnTakeDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_USTUPlayerHUDWidget_OnTakeDamage),NULL);
	}
	void USTUPlayerHUDWidget::StaticRegisterNativesUSTUPlayerHUDWidget()
	{
		UClass* Class = USTUPlayerHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWeaponAmmoData", &USTUPlayerHUDWidget::execGetCurrentWeaponAmmoData },
			{ "GetCurrentWeaponUIData", &USTUPlayerHUDWidget::execGetCurrentWeaponUIData },
			{ "GetHealthPercent", &USTUPlayerHUDWidget::execGetHealthPercent },
			{ "IsPlayerAlive", &USTUPlayerHUDWidget::execIsPlayerAlive },
			{ "IsPlayerSpectating", &USTUPlayerHUDWidget::execIsPlayerSpectating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics
	{
		struct STUPlayerHUDWidget_eventGetCurrentWeaponAmmoData_Parms
		{
			FAmmoData AmmoData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerHUDWidget_eventGetCurrentWeaponAmmoData_Parms, AmmoData), Z_Construct_UScriptStruct_FAmmoData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerHUDWidget_eventGetCurrentWeaponAmmoData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerHUDWidget_eventGetCurrentWeaponAmmoData_Parms), &Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::NewProp_AmmoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerHUDWidget, nullptr, "GetCurrentWeaponAmmoData", nullptr, nullptr, sizeof(STUPlayerHUDWidget_eventGetCurrentWeaponAmmoData_Parms), Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics
	{
		struct STUPlayerHUDWidget_eventGetCurrentWeaponUIData_Parms
		{
			FWeaponUIData UIData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerHUDWidget_eventGetCurrentWeaponUIData_Parms, UIData), Z_Construct_UScriptStruct_FWeaponUIData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerHUDWidget_eventGetCurrentWeaponUIData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerHUDWidget_eventGetCurrentWeaponUIData_Parms), &Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::NewProp_UIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerHUDWidget, nullptr, "GetCurrentWeaponUIData", nullptr, nullptr, sizeof(STUPlayerHUDWidget_eventGetCurrentWeaponUIData_Parms), Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics
	{
		struct STUPlayerHUDWidget_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerHUDWidget_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerHUDWidget, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(STUPlayerHUDWidget_eventGetHealthPercent_Parms), Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics
	{
		struct STUPlayerHUDWidget_eventIsPlayerAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerHUDWidget_eventIsPlayerAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerHUDWidget_eventIsPlayerAlive_Parms), &Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerHUDWidget, nullptr, "IsPlayerAlive", nullptr, nullptr, sizeof(STUPlayerHUDWidget_eventIsPlayerAlive_Parms), Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics
	{
		struct STUPlayerHUDWidget_eventIsPlayerSpectating_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerHUDWidget_eventIsPlayerSpectating_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerHUDWidget_eventIsPlayerSpectating_Parms), &Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerHUDWidget, nullptr, "IsPlayerSpectating", nullptr, nullptr, sizeof(STUPlayerHUDWidget_eventIsPlayerSpectating_Parms), Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerHUDWidget, nullptr, "OnTakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUPlayerHUDWidget_NoRegister()
	{
		return USTUPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUPlayerHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponAmmoData, "GetCurrentWeaponAmmoData" }, // 1957308099
		{ &Z_Construct_UFunction_USTUPlayerHUDWidget_GetCurrentWeaponUIData, "GetCurrentWeaponUIData" }, // 286601599
		{ &Z_Construct_UFunction_USTUPlayerHUDWidget_GetHealthPercent, "GetHealthPercent" }, // 3046009845
		{ &Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerAlive, "IsPlayerAlive" }, // 2636334039
		{ &Z_Construct_UFunction_USTUPlayerHUDWidget_IsPlayerSpectating, "IsPlayerSpectating" }, // 1376613602
		{ &Z_Construct_UFunction_USTUPlayerHUDWidget_OnTakeDamage, "OnTakeDamage" }, // 3292877930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/STUPlayerHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUPlayerHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUPlayerHUDWidget_Statics::ClassParams = {
		&USTUPlayerHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUPlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUPlayerHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUPlayerHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUPlayerHUDWidget, 229513858);
	template<> SHOOTTHEMUP_API UClass* StaticClass<USTUPlayerHUDWidget>()
	{
		return USTUPlayerHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUPlayerHUDWidget(Z_Construct_UClass_USTUPlayerHUDWidget, &USTUPlayerHUDWidget::StaticClass, TEXT("/Script/ShootThemUp"), TEXT("USTUPlayerHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUPlayerHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
