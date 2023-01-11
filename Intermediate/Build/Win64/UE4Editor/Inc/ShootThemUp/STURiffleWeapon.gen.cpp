// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/Weapon/STURiffleWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTURiffleWeapon() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTURiffleWeapon_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTURiffleWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTURiffleWeapon::StaticRegisterNativesASTURiffleWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASTURiffleWeapon_NoRegister()
	{
		return ASTURiffleWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTURiffleWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTURiffleWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/STURiffleWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/STURiffleWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "STURiffleWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "STURiffleWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "STURiffleWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTURiffleWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTURiffleWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTURiffleWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTURiffleWeapon_Statics::ClassParams = {
		&ASTURiffleWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTURiffleWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTURiffleWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTURiffleWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTURiffleWeapon, 3851572822);
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTURiffleWeapon>()
	{
		return ASTURiffleWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTURiffleWeapon(Z_Construct_UClass_ASTURiffleWeapon, &ASTURiffleWeapon::StaticClass, TEXT("/Script/ShootThemUp"), TEXT("ASTURiffleWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTURiffleWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
