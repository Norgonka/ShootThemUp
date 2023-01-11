// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/Player/STUBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUBaseCharacter() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseCharacter_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUWeaponComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(ASTUBaseCharacter::execOnGroundLanded)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGroundLanded(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASTUBaseCharacter::execGetMovementDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASTUBaseCharacter::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	void ASTUBaseCharacter::StaticRegisterNativesASTUBaseCharacter()
	{
		UClass* Class = ASTUBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovementDirection", &ASTUBaseCharacter::execGetMovementDirection },
			{ "IsRunning", &ASTUBaseCharacter::execIsRunning },
			{ "OnGroundLanded", &ASTUBaseCharacter::execOnGroundLanded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics
	{
		struct STUBaseCharacter_eventGetMovementDirection_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUBaseCharacter_eventGetMovementDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTUBaseCharacter, nullptr, "GetMovementDirection", nullptr, nullptr, sizeof(STUBaseCharacter_eventGetMovementDirection_Parms), Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics
	{
		struct STUBaseCharacter_eventIsRunning_Parms
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
	void Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUBaseCharacter_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUBaseCharacter_eventIsRunning_Parms), &Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTUBaseCharacter, nullptr, "IsRunning", nullptr, nullptr, sizeof(STUBaseCharacter_eventIsRunning_Parms), Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTUBaseCharacter_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTUBaseCharacter_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics
	{
		struct STUBaseCharacter_eventOnGroundLanded_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUBaseCharacter_eventOnGroundLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTUBaseCharacter, nullptr, "OnGroundLanded", nullptr, nullptr, sizeof(STUBaseCharacter_eventOnGroundLanded_Parms), Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTUBaseCharacter_NoRegister()
	{
		return ASTUBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASTUBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthTextComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthTextComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanOnDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanOnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandedDamageVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandedDamageVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandedDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandedDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTUBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTUBaseCharacter_GetMovementDirection, "GetMovementDirection" }, // 4062507923
		{ &Z_Construct_UFunction_ASTUBaseCharacter_IsRunning, "IsRunning" }, // 1929280275
		{ &Z_Construct_UFunction_ASTUBaseCharacter_OnGroundLanded, "OnGroundLanded" }, // 2915036244
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/STUBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, HealthComponent), Z_Construct_UClass_USTUHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthTextComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthTextComponent = { "HealthTextComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, HealthTextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthTextComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthTextComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_WeaponComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_WeaponComponent = { "WeaponComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, WeaponComponent), Z_Construct_UClass_USTUWeaponComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_WeaponComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_WeaponComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_DeathAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_DeathAnimMontage = { "DeathAnimMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, DeathAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_DeathAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_DeathAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LifeSpanOnDeath_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LifeSpanOnDeath = { "LifeSpanOnDeath", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, LifeSpanOnDeath), METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LifeSpanOnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LifeSpanOnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamageVelocity_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamageVelocity = { "LandedDamageVelocity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, LandedDamageVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamageVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamageVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Player/STUBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamage = { "LandedDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUBaseCharacter, LandedDamage), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_HealthTextComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_WeaponComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_DeathAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LifeSpanOnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamageVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_LandedDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUBaseCharacter_Statics::ClassParams = {
		&ASTUBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTUBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTUBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUBaseCharacter, 2549539962);
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUBaseCharacter>()
	{
		return ASTUBaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUBaseCharacter(Z_Construct_UClass_ASTUBaseCharacter, &ASTUBaseCharacter::StaticClass, TEXT("/Script/ShootThemUp"), TEXT("ASTUBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
