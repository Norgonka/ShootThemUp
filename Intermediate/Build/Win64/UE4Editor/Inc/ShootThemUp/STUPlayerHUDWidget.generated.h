// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAmmoData;
struct FWeaponUIData;
#ifdef SHOOTTHEMUP_STUPlayerHUDWidget_generated_h
#error "STUPlayerHUDWidget.generated.h already included, missing '#pragma once' in STUPlayerHUDWidget.h"
#endif
#define SHOOTTHEMUP_STUPlayerHUDWidget_generated_h

#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_SPARSE_DATA
#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetCurrentWeaponAmmoData); \
	DECLARE_FUNCTION(execGetCurrentWeaponUIData); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetCurrentWeaponAmmoData); \
	DECLARE_FUNCTION(execGetCurrentWeaponUIData); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_USTUPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(USTUPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(USTUPlayerHUDWidget)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSTUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_USTUPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(USTUPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(USTUPlayerHUDWidget)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUPlayerHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUPlayerHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUPlayerHUDWidget(USTUPlayerHUDWidget&&); \
	NO_API USTUPlayerHUDWidget(const USTUPlayerHUDWidget&); \
public:


#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUPlayerHUDWidget(USTUPlayerHUDWidget&&); \
	NO_API USTUPlayerHUDWidget(const USTUPlayerHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUPlayerHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUPlayerHUDWidget)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET
#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_10_PROLOG
#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_SPARSE_DATA \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_RPC_WRAPPERS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_INCLASS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_SPARSE_DATA \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class USTUPlayerHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projects_ShootThemUp_Source_ShootThemUp_Public_UI_STUPlayerHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
