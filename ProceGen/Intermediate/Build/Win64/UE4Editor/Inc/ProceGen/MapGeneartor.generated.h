// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEGEN_MapGeneartor_generated_h
#error "MapGeneartor.generated.h already included, missing '#pragma once' in MapGeneartor.h"
#endif
#define PROCEGEN_MapGeneartor_generated_h

#define ProceGen_Source_ProceGen_MapGeneartor_h_12_RPC_WRAPPERS
#define ProceGen_Source_ProceGen_MapGeneartor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProceGen_Source_ProceGen_MapGeneartor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapGeneartor(); \
	friend struct Z_Construct_UClass_AMapGeneartor_Statics; \
public: \
	DECLARE_CLASS(AMapGeneartor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(AMapGeneartor)


#define ProceGen_Source_ProceGen_MapGeneartor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMapGeneartor(); \
	friend struct Z_Construct_UClass_AMapGeneartor_Statics; \
public: \
	DECLARE_CLASS(AMapGeneartor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(AMapGeneartor)


#define ProceGen_Source_ProceGen_MapGeneartor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapGeneartor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapGeneartor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGeneartor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGeneartor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGeneartor(AMapGeneartor&&); \
	NO_API AMapGeneartor(const AMapGeneartor&); \
public:


#define ProceGen_Source_ProceGen_MapGeneartor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGeneartor(AMapGeneartor&&); \
	NO_API AMapGeneartor(const AMapGeneartor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGeneartor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGeneartor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapGeneartor)


#define ProceGen_Source_ProceGen_MapGeneartor_h_12_PRIVATE_PROPERTY_OFFSET
#define ProceGen_Source_ProceGen_MapGeneartor_h_9_PROLOG
#define ProceGen_Source_ProceGen_MapGeneartor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_RPC_WRAPPERS \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_INCLASS \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceGen_Source_ProceGen_MapGeneartor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_INCLASS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_MapGeneartor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEGEN_API UClass* StaticClass<class AMapGeneartor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceGen_Source_ProceGen_MapGeneartor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
