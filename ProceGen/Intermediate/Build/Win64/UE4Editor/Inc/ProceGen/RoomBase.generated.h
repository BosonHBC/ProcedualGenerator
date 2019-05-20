// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROCEGEN_RoomBase_generated_h
#error "RoomBase.generated.h already included, missing '#pragma once' in RoomBase.h"
#endif
#define PROCEGEN_RoomBase_generated_h

#define ProceGen_Source_ProceGen_RoomBase_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAABB_Statics; \
	PROCEGEN_API static class UScriptStruct* StaticStruct();


template<> PROCEGEN_API UScriptStruct* StaticStruct<struct FAABB>();

#define ProceGen_Source_ProceGen_RoomBase_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ProceGen_Source_ProceGen_RoomBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ProceGen_Source_ProceGen_RoomBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoomBase(); \
	friend struct Z_Construct_UClass_ARoomBase_Statics; \
public: \
	DECLARE_CLASS(ARoomBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(ARoomBase)


#define ProceGen_Source_ProceGen_RoomBase_h_30_INCLASS \
private: \
	static void StaticRegisterNativesARoomBase(); \
	friend struct Z_Construct_UClass_ARoomBase_Statics; \
public: \
	DECLARE_CLASS(ARoomBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceGen"), NO_API) \
	DECLARE_SERIALIZER(ARoomBase)


#define ProceGen_Source_ProceGen_RoomBase_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoomBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoomBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoomBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoomBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoomBase(ARoomBase&&); \
	NO_API ARoomBase(const ARoomBase&); \
public:


#define ProceGen_Source_ProceGen_RoomBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoomBase(ARoomBase&&); \
	NO_API ARoomBase(const ARoomBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoomBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoomBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoomBase)


#define ProceGen_Source_ProceGen_RoomBase_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__id() { return STRUCT_OFFSET(ARoomBase, id); } \
	FORCEINLINE static uint32 __PPO__worldPosition() { return STRUCT_OFFSET(ARoomBase, worldPosition); } \
	FORCEINLINE static uint32 __PPO__m_AABB() { return STRUCT_OFFSET(ARoomBase, m_AABB); } \
	FORCEINLINE static uint32 __PPO__RoomEnum() { return STRUCT_OFFSET(ARoomBase, RoomEnum); } \
	FORCEINLINE static uint32 __PPO__inOverlapListNum() { return STRUCT_OFFSET(ARoomBase, inOverlapListNum); } \
	FORCEINLINE static uint32 __PPO__otherRooms() { return STRUCT_OFFSET(ARoomBase, otherRooms); } \
	FORCEINLINE static uint32 __PPO__bCanTick() { return STRUCT_OFFSET(ARoomBase, bCanTick); }


#define ProceGen_Source_ProceGen_RoomBase_h_27_PROLOG
#define ProceGen_Source_ProceGen_RoomBase_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_RoomBase_h_30_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_RoomBase_h_30_RPC_WRAPPERS \
	ProceGen_Source_ProceGen_RoomBase_h_30_INCLASS \
	ProceGen_Source_ProceGen_RoomBase_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceGen_Source_ProceGen_RoomBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceGen_Source_ProceGen_RoomBase_h_30_PRIVATE_PROPERTY_OFFSET \
	ProceGen_Source_ProceGen_RoomBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_RoomBase_h_30_INCLASS_NO_PURE_DECLS \
	ProceGen_Source_ProceGen_RoomBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEGEN_API UClass* StaticClass<class ARoomBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceGen_Source_ProceGen_RoomBase_h


#define FOREACH_ENUM_EROOMENUM(op) \
	op(ERoomEnum::RE_NULL) \
	op(ERoomEnum::RE_MAIN) \
	op(ERoomEnum::RE_HALLWAY) 

enum class ERoomEnum : uint8;
template<> PROCEGEN_API UEnum* StaticEnum<ERoomEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
