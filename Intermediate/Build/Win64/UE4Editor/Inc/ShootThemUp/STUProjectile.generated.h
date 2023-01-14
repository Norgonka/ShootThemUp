// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHOOTTHEMUP_STUProjectile_generated_h
#error "STUProjectile.generated.h already included, missing '#pragma once' in STUProjectile.h"
#endif
#define SHOOTTHEMUP_STUProjectile_generated_h

#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_SPARSE_DATA
#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUProjectile(); \
	friend struct Z_Construct_UClass_ASTUProjectile_Statics; \
public: \
	DECLARE_CLASS(ASTUProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(ASTUProjectile)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASTUProjectile(); \
	friend struct Z_Construct_UClass_ASTUProjectile_Statics; \
public: \
	DECLARE_CLASS(ASTUProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(ASTUProjectile)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUProjectile(ASTUProjectile&&); \
	NO_API ASTUProjectile(const ASTUProjectile&); \
public:


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUProjectile(ASTUProjectile&&); \
	NO_API ASTUProjectile(const ASTUProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUProjectile)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ASTUProjectile, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(ASTUProjectile, MovementComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponFXComponent() { return STRUCT_OFFSET(ASTUProjectile, WeaponFXComponent); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(ASTUProjectile, DamageRadius); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(ASTUProjectile, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__DoFullDamage() { return STRUCT_OFFSET(ASTUProjectile, DoFullDamage); } \
	FORCEINLINE static uint32 __PPO__LifeSeconds() { return STRUCT_OFFSET(ASTUProjectile, LifeSeconds); }


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_13_PROLOG
#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_SPARSE_DATA \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_RPC_WRAPPERS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_INCLASS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_SPARSE_DATA \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_INCLASS_NO_PURE_DECLS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class ASTUProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projects_ShootThemUp_Source_ShootThemUp_Public_Weapon_STUProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
