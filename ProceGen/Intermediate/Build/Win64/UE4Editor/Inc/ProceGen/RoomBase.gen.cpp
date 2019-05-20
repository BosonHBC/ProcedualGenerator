// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceGen/RoomBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomBase() {}
// Cross Module References
	PROCEGEN_API UScriptStruct* Z_Construct_UScriptStruct_FAABB();
	UPackage* Z_Construct_UPackage__Script_ProceGen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PROCEGEN_API UClass* Z_Construct_UClass_ARoomBase_NoRegister();
	PROCEGEN_API UClass* Z_Construct_UClass_ARoomBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEGEN_API UFunction* Z_Construct_UFunction_ARoomBase_OnBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROCEGEN_API UFunction* Z_Construct_UFunction_ARoomBase_OnEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAABB::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEGEN_API uint32 Get_Z_Construct_UScriptStruct_FAABB_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAABB, Z_Construct_UPackage__Script_ProceGen(), TEXT("AABB"), sizeof(FAABB), Get_Z_Construct_UScriptStruct_FAABB_Hash());
	}
	return Singleton;
}
template<> PROCEGEN_API UScriptStruct* StaticStruct<FAABB>()
{
	return FAABB::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAABB(FAABB::StaticStruct, TEXT("/Script/ProceGen"), TEXT("AABB"), false, nullptr, nullptr);
static struct FScriptStruct_ProceGen_StaticRegisterNativesFAABB
{
	FScriptStruct_ProceGen_StaticRegisterNativesFAABB()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AABB")),new UScriptStruct::TCppStructOps<FAABB>);
	}
} ScriptStruct_ProceGen_StaticRegisterNativesFAABB;
	struct Z_Construct_UScriptStruct_FAABB_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAABB_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAABB_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAABB>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Extend_MetaData[] = {
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Extend = { "Extend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAABB, Extend), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Extend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Extend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAABB, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAABB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Extend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAABB_Statics::NewProp_Center,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAABB_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceGen,
		nullptr,
		&NewStructOps,
		"AABB",
		sizeof(FAABB),
		alignof(FAABB),
		Z_Construct_UScriptStruct_FAABB_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAABB_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAABB_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAABB_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAABB()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAABB_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceGen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AABB"), sizeof(FAABB), Get_Z_Construct_UScriptStruct_FAABB_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAABB_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAABB_Hash() { return 1962416244U; }
	void ARoomBase::StaticRegisterNativesARoomBase()
	{
		UClass* Class = ARoomBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &ARoomBase::execOnBeginOverlap },
			{ "OnEndOverlap", &ARoomBase::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics
	{
		struct RoomBase_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((RoomBase_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RoomBase_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomBase, nullptr, "OnBeginOverlap", sizeof(RoomBase_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoomBase_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoomBase_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics
	{
		struct RoomBase_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoomBase_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomBase, nullptr, "OnEndOverlap", sizeof(RoomBase_eventOnEndOverlap_Parms), Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoomBase_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoomBase_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoomBase_NoRegister()
	{
		return ARoomBase::StaticClass();
	}
	struct Z_Construct_UClass_ARoomBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTick_MetaData[];
#endif
		static void NewProp_bCanTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherRooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_otherRooms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherRooms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inOverlapListNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inOverlapListNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AABB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_AABB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_worldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoomBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceGen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoomBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoomBase_OnBeginOverlap, "OnBeginOverlap" }, // 2636617500
		{ &Z_Construct_UFunction_ARoomBase_OnEndOverlap, "OnEndOverlap" }, // 2334217707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoomBase.h" },
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::NewProp_bCanTick_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	void Z_Construct_UClass_ARoomBase_Statics::NewProp_bCanTick_SetBit(void* Obj)
	{
		((ARoomBase*)Obj)->bCanTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_bCanTick = { "bCanTick", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoomBase), &Z_Construct_UClass_ARoomBase_Statics::NewProp_bCanTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::NewProp_bCanTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::NewProp_bCanTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::NewProp_otherRooms_MetaData[] = {
		{ "ModuleRelativePath", "RoomBase.h" },
		{ "ToolTip", "The lis of stroing others room that overlaped in*" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_otherRooms = { "otherRooms", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomBase, otherRooms), METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::NewProp_otherRooms_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::NewProp_otherRooms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_otherRooms_Inner = { "otherRooms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoomBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::NewProp_inOverlapListNum_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "RoomBase.h" },
		{ "ToolTip", "This is only a reference for the list size, should not be modified" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_inOverlapListNum = { "inOverlapListNum", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomBase, inOverlapListNum), METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::NewProp_inOverlapListNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::NewProp_inOverlapListNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::NewProp_m_AABB_MetaData[] = {
		{ "ModuleRelativePath", "RoomBase.h" },
		{ "ToolTip", "Self defined Bounding Box of my Room base*" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_m_AABB = { "m_AABB", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomBase, m_AABB), Z_Construct_UScriptStruct_FAABB, METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::NewProp_m_AABB_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::NewProp_m_AABB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::NewProp_worldPosition_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_worldPosition = { "worldPosition", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomBase, worldPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::NewProp_worldPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::NewProp_worldPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomBase, id), METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::NewProp_id_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBase_Statics::NewProp_staticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Room" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoomBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomBase_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoomBase, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::NewProp_staticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::NewProp_staticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_bCanTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_otherRooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_otherRooms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_inOverlapListNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_m_AABB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_worldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomBase_Statics::NewProp_staticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoomBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoomBase_Statics::ClassParams = {
		&ARoomBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARoomBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARoomBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARoomBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoomBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoomBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoomBase, 4124337987);
	template<> PROCEGEN_API UClass* StaticClass<ARoomBase>()
	{
		return ARoomBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoomBase(Z_Construct_UClass_ARoomBase, &ARoomBase::StaticClass, TEXT("/Script/ProceGen"), TEXT("ARoomBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
