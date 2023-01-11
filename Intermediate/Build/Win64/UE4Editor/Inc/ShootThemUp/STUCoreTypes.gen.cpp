// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUCoreTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUCoreTypes() {}
// Cross Module References
	SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
// End Cross Module References
class UScriptStruct* FWeaponUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTTHEMUP_API uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponUIData, Z_Construct_UPackage__Script_ShootThemUp(), TEXT("WeaponUIData"), sizeof(FWeaponUIData), Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash());
	}
	return Singleton;
}
template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<FWeaponUIData>()
{
	return FWeaponUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponUIData(FWeaponUIData::StaticStruct, TEXT("/Script/ShootThemUp"), TEXT("WeaponUIData"), false, nullptr, nullptr);
static struct FScriptStruct_ShootThemUp_StaticRegisterNativesFWeaponUIData
{
	FScriptStruct_ShootThemUp_StaticRegisterNativesFWeaponUIData()
	{
		UScriptStruct::DeferCppStructOps<FWeaponUIData>(FName(TEXT("WeaponUIData")));
	}
} ScriptStruct_ShootThemUp_StaticRegisterNativesFWeaponUIData;
	struct Z_Construct_UScriptStruct_FWeaponUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHairIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrossHairIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainIcon = { "MainIcon", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponUIData, MainIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrossHairIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrossHairIcon = { "CrossHairIcon", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponUIData, CrossHairIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrossHairIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrossHairIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrossHairIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
		nullptr,
		&NewStructOps,
		"WeaponUIData",
		sizeof(FWeaponUIData),
		alignof(FWeaponUIData),
		Z_Construct_UScriptStruct_FWeaponUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShootThemUp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponUIData"), sizeof(FWeaponUIData), Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash() { return 3302615423U; }
class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTTHEMUP_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_ShootThemUp(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash());
	}
	return Singleton;
}
template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/ShootThemUp"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShootThemUp_StaticRegisterNativesFWeaponData
{
	FScriptStruct_ShootThemUp_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps<FWeaponData>(FName(TEXT("WeaponData")));
	}
} ScriptStruct_ShootThemUp_StaticRegisterNativesFWeaponData;
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponClass), Z_Construct_UClass_ASTUBaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage = { "ReloadAnimMontage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, ReloadAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
		nullptr,
		&NewStructOps,
		"WeaponData",
		sizeof(FWeaponData),
		alignof(FWeaponData),
		Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShootThemUp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash() { return 2399289292U; }
class UScriptStruct* FAmmoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTTHEMUP_API uint32 Get_Z_Construct_UScriptStruct_FAmmoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoData, Z_Construct_UPackage__Script_ShootThemUp(), TEXT("AmmoData"), sizeof(FAmmoData), Get_Z_Construct_UScriptStruct_FAmmoData_Hash());
	}
	return Singleton;
}
template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<FAmmoData>()
{
	return FAmmoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAmmoData(FAmmoData::StaticStruct, TEXT("/Script/ShootThemUp"), TEXT("AmmoData"), false, nullptr, nullptr);
static struct FScriptStruct_ShootThemUp_StaticRegisterNativesFAmmoData
{
	FScriptStruct_ShootThemUp_StaticRegisterNativesFAmmoData()
	{
		UScriptStruct::DeferCppStructOps<FAmmoData>(FName(TEXT("AmmoData")));
	}
} ScriptStruct_ShootThemUp_StaticRegisterNativesFAmmoData;
	struct Z_Construct_UScriptStruct_FAmmoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bullets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bullets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Clips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Infinite_MetaData[];
#endif
		static void NewProp_Infinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Infinite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoData, Bullets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData[] = {
		{ "Category", "Components" },
		{ "EditCondition", "!Infinite" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips = { "Clips", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoData, Clips), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/STUCoreTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_SetBit(void* Obj)
	{
		((FAmmoData*)Obj)->Infinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite = { "Infinite", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAmmoData), &Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
		nullptr,
		&NewStructOps,
		"AmmoData",
		sizeof(FAmmoData),
		alignof(FAmmoData),
		Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAmmoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAmmoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShootThemUp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AmmoData"), sizeof(FAmmoData), Get_Z_Construct_UScriptStruct_FAmmoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAmmoData_Hash() { return 3683771139U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
