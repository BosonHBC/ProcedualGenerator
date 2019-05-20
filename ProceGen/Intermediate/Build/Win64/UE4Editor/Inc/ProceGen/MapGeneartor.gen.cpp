// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceGen/MapGeneartor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapGeneartor() {}
// Cross Module References
	PROCEGEN_API UClass* Z_Construct_UClass_AMapGeneartor_NoRegister();
	PROCEGEN_API UClass* Z_Construct_UClass_AMapGeneartor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceGen();
	PROCEGEN_API UClass* Z_Construct_UClass_ARoomBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void AMapGeneartor::StaticRegisterNativesAMapGeneartor()
	{
	}
	UClass* Z_Construct_UClass_AMapGeneartor_NoRegister()
	{
		return AMapGeneartor::StaticClass();
	}
	struct Z_Construct_UClass_AMapGeneartor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateRoom_MetaData[];
#endif
		static void NewProp_bGenerateRoom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShiftingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomActorToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipseSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EllipseSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomSizeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_RoomSizeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomSizeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_RoomSizeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoomAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_StartRoomAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapGeneartor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapGeneartor.h" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, RoomList), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoomBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	void Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom_SetBit(void* Obj)
	{
		((AMapGeneartor*)Obj)->bGenerateRoom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom = { "bGenerateRoom", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapGeneartor), &Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_ShiftingSpeed_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_ShiftingSpeed = { "ShiftingSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, ShiftingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_ShiftingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_ShiftingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomActorToSpawn_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomActorToSpawn = { "RoomActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, RoomActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomActorToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_EllipseSize_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_EllipseSize = { "EllipseSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, EllipseSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_EllipseSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_EllipseSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMax_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMax = { "RoomSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, RoomSizeMax), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMin_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMin = { "RoomSizeMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, RoomSizeMin), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount = { "StartRoomAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, StartRoomAmount), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGeneartor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_ShiftingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_EllipseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapGeneartor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapGeneartor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapGeneartor_Statics::ClassParams = {
		&AMapGeneartor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMapGeneartor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapGeneartor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapGeneartor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapGeneartor, 1695233643);
	template<> PROCEGEN_API UClass* StaticClass<AMapGeneartor>()
	{
		return AMapGeneartor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapGeneartor(Z_Construct_UClass_AMapGeneartor, &AMapGeneartor::StaticClass, TEXT("/Script/ProceGen"), TEXT("AMapGeneartor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapGeneartor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
