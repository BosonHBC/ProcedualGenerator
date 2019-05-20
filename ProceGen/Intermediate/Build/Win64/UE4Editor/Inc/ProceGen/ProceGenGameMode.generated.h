// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEGEN_ProceGenGameMode_generated_h
#error "ProceGenGameMode.generated.h already included, missing '#pragma once' in ProceGenGameMode.h"
#endif
#define PROCEGEN_ProceGenGameMode_generated_h

#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_RPC_WRAPPERS
#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceGenGameMode(); \
	friend struct Z_Construct_UClass_AProceGenGameMode_Statics; \
public: \
	DECLARE_CLASS(AProceGenGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProceGen"), PROCEGEN_API) \
	DECLARE_SERIALIZER(AProceGenGameMode)


#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProceGenGameMode(); \
	friend struct Z_Construct_UClass_AProceGenGameMode_Statics; \
public: \
	DECLARE_CLASS(AProceGenGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProceGen"), PROCEGEN_API) \
	DECLARE_SERIALIZER(AProceGenGameMode)


#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEGEN_API AProceGenGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceGenGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEGEN_API, AProceGenGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceGenGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROCEGEN_API AProceGenGameMode(AProceGenGameMode&&); \
	PROCEGEN_API AProceGenGameMode(const AProceGenGameMode&); \
public:


#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROCEGEN_API AProceGenGameMode(AProceGenGameMode&&); \
	PROCEGEN_API AProceGenGameMode(const AProceGenGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEGEN_API, AProceGenGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceGenGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceGenGameMode)


#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define ProceGen_Source_ProceGen_ProceGenGameMode_h_9_PROLOG
#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_RPC_WRAPPERS \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_INCLASS \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceGen_Source_ProceGen_ProceGenGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_INCLASS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_ProceGenGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEGEN_API UClass* StaticClass<class AProceGenGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceGen_Source_ProceGen_ProceGenGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
