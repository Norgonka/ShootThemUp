// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/Pickups/STUHealthPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUHealthPickup() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUHealthPickup_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUHealthPickup();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBasePickup();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTUHealthPickup::StaticRegisterNativesASTUHealthPickup()
	{
	}
	UClass* Z_Construct_UClass_ASTUHealthPickup_NoRegister()
	{
		return ASTUHealthPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASTUHealthPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUHealthPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBasePickup,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUHealthPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/STUHealthPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/STUHealthPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUHealthPickup_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Pickups/STUHealthPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUHealthPickup_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUHealthPickup, HealAmount), METADATA_PARAMS(Z_Construct_UClass_ASTUHealthPickup_Statics::NewProp_HealAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUHealthPickup_Statics::NewProp_HealAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUHealthPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUHealthPickup_Statics::NewProp_HealAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUHealthPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUHealthPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUHealthPickup_Statics::ClassParams = {
		&ASTUHealthPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUHealthPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUHealthPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTUHealthPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUHealthPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUHealthPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUHealthPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUHealthPickup, 1670407386);
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUHealthPickup>()
	{
		return ASTUHealthPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUHealthPickup(Z_Construct_UClass_ASTUHealthPickup, &ASTUHealthPickup::StaticClass, TEXT("/Script/ShootThemUp"), TEXT("ASTUHealthPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUHealthPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
