// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTTHEMUP_STUBaseCharacter_generated_h
#error "STUBaseCharacter.generated.h already included, missing '#pragma once' in STUBaseCharacter.h"
#endif
#define SHOOTTHEMUP_STUBaseCharacter_generated_h

#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_SPARSE_DATA
#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMovementDirection); \
	DECLARE_FUNCTION(execIsRunning);


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMovementDirection); \
	DECLARE_FUNCTION(execIsRunning);


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUBaseCharacter(); \
	friend struct Z_Construct_UClass_ASTUBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTUBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(ASTUBaseCharacter)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTUBaseCharacter(); \
	friend struct Z_Construct_UClass_ASTUBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTUBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(ASTUBaseCharacter)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUBaseCharacter(ASTUBaseCharacter&&); \
	NO_API ASTUBaseCharacter(const ASTUBaseCharacter&); \
public:


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUBaseCharacter(ASTUBaseCharacter&&); \
	NO_API ASTUBaseCharacter(const ASTUBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUBaseCharacter)


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(ASTUBaseCharacter, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASTUBaseCharacter, CameraComponent); }


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_12_PROLOG
#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_SPARSE_DATA \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_RPC_WRAPPERS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_INCLASS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_SPARSE_DATA \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class ASTUBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projects_ShootThemUp_Source_ShootThemUp_Public_Player_STUBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
