// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEGEN_ProceGenPlayerController_generated_h
#error "ProceGenPlayerController.generated.h already included, missing '#pragma once' in ProceGenPlayerController.h"
#endif
#define PROCEGEN_ProceGenPlayerController_generated_h

#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_RPC_WRAPPERS
#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceGenPlayerController(); \
	friend struct Z_Construct_UClass_AProceGenPlayerController_Statics; \
public: \
	DECLARE_CLASS(AProceGenPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(AProceGenPlayerController)


#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProceGenPlayerController(); \
	friend struct Z_Construct_UClass_AProceGenPlayerController_Statics; \
public: \
	DECLARE_CLASS(AProceGenPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(AProceGenPlayerController)


#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProceGenPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceGenPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceGenPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceGenPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceGenPlayerController(AProceGenPlayerController&&); \
	NO_API AProceGenPlayerController(const AProceGenPlayerController&); \
public:


#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProceGenPlayerController(AProceGenPlayerController&&); \
	NO_API AProceGenPlayerController(const AProceGenPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceGenPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceGenPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceGenPlayerController)


#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_PRIVATE_PROPERTY_OFFSET
#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_9_PROLOG
#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_RPC_WRAPPERS \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_INCLASS \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_ProceGenPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEGEN_API UClass* StaticClass<class AProceGenPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceGen_Source_ProceGen_ProceGenPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
