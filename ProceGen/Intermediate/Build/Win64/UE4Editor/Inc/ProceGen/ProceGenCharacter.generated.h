// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEGEN_ProceGenCharacter_generated_h
#error "ProceGenCharacter.generated.h already included, missing '#pragma once' in ProceGenCharacter.h"
#endif
#define PROCEGEN_ProceGenCharacter_generated_h

#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_RPC_WRAPPERS
#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceGenCharacter(); \
	friend struct Z_Construct_UClass_AProceGenCharacter_Statics; \
public: \
	DECLARE_CLASS(AProceGenCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(AProceGenCharacter)


#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProceGenCharacter(); \
	friend struct Z_Construct_UClass_AProceGenCharacter_Statics; \
public: \
	DECLARE_CLASS(AProceGenCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(AProceGenCharacter)


#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProceGenCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceGenCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceGenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceGenCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceGenCharacter(AProceGenCharacter&&); \
	NO_API AProceGenCharacter(const AProceGenCharacter&); \
public:


#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceGenCharacter(AProceGenCharacter&&); \
	NO_API AProceGenCharacter(const AProceGenCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceGenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceGenCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceGenCharacter)


#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AProceGenCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProceGenCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AProceGenCharacter, CursorToWorld); }


#define ProceGen_Source_ProceGen_ProceGenCharacter_h_9_PROLOG
#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_RPC_WRAPPERS \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_INCLASS \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceGen_Source_ProceGen_ProceGenCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_ProceGenCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEGEN_API UClass* StaticClass<class AProceGenCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceGen_Source_ProceGen_ProceGenCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
