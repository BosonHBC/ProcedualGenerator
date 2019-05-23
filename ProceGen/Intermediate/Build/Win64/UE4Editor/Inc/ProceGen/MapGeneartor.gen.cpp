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
	PROCEGEN_API UEnum* Z_Construct_UEnum_ProceGen_EGenStepEnum();
	UPackage* Z_Construct_UPackage__Script_ProceGen();
	PROCEGEN_API UClass* Z_Construct_UClass_AMapGeneartor_NoRegister();
	PROCEGEN_API UClass* Z_Construct_UClass_AMapGeneartor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEGEN_API UClass* Z_Construct_UClass_ARoomBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EGenStepEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceGen_EGenStepEnum, Z_Construct_UPackage__Script_ProceGen(), TEXT("EGenStepEnum"));
		}
		return Singleton;
	}
	template<> PROCEGEN_API UEnum* StaticEnum<EGenStepEnum>()
	{
		return EGenStepEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenStepEnum(EGenStepEnum_StaticEnum, TEXT("/Script/ProceGen"), TEXT("EGenStepEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceGen_EGenStepEnum_Hash() { return 514419402U; }
	UEnum* Z_Construct_UEnum_ProceGen_EGenStepEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceGen();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenStepEnum"), 0, Get_Z_Construct_UEnum_ProceGen_EGenStepEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenStepEnum::GSE_GENERATING_ROOMS", (int64)EGenStepEnum::GSE_GENERATING_ROOMS },
				{ "EGenStepEnum::GSE_SEPARATING_ROOMS", (int64)EGenStepEnum::GSE_SEPARATING_ROOMS },
				{ "EGenStepEnum::GSE_SELECTING_ROOMS", (int64)EGenStepEnum::GSE_SELECTING_ROOMS },
				{ "EGenStepEnum::GSE_GRAPHING_ROOMS", (int64)EGenStepEnum::GSE_GRAPHING_ROOMS },
				{ "EGenStepEnum::GSE_CHOOSE_HALLWAY", (int64)EGenStepEnum::GSE_CHOOSE_HALLWAY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GSE_CHOOSE_HALLWAY.DispalyName", "Hallway" },
				{ "GSE_GENERATING_ROOMS.DisplayName", "Generaing" },
				{ "GSE_GRAPHING_ROOMS.DispalyName", "Graphing" },
				{ "GSE_SELECTING_ROOMS.DisplayName", "Selecting" },
				{ "GSE_SEPARATING_ROOMS.DisplayName", "Separating" },
				{ "ModuleRelativePath", "MapGeneartor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceGen,
				nullptr,
				"EGenStepEnum",
				"EGenStepEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainRoomList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MainRoomList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainRoomList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UM_MainRoomInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UM_MainRoomInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeThreshold;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenStepEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GenStepEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenStepEnum_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_MainRoomList_MetaData[] = {
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_MainRoomList = { "MainRoomList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, MainRoomList), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_MainRoomList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_MainRoomList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_MainRoomList_Inner = { "MainRoomList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoomBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, RoomList), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoomBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_UM_MainRoomInst_MetaData[] = {
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_UM_MainRoomInst = { "UM_MainRoomInst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, UM_MainRoomInst), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_UM_MainRoomInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_UM_MainRoomInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_CenterArea_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_CenterArea = { "CenterArea", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, CenterArea), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_CenterArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_CenterArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_SizeThreshold_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
		{ "ToolTip", "Selecting Main Rooms" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_SizeThreshold = { "SizeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, SizeThreshold), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_SizeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_SizeThreshold_MetaData)) };
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
		{ "ToolTip", "Seperating Rooms" },
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
		{ "ToolTip", "Room Property" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount = { "StartRoomAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, StartRoomAmount), METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGeneartor_Statics::NewProp_GenStepEnum_MetaData[] = {
		{ "Category", "MapGeneartor" },
		{ "ModuleRelativePath", "MapGeneartor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_GenStepEnum = { "GenStepEnum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGeneartor, GenStepEnum), Z_Construct_UEnum_ProceGen_EGenStepEnum, METADATA_PARAMS(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_GenStepEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapGeneartor_Statics::NewProp_GenStepEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMapGeneartor_Statics::NewProp_GenStepEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGeneartor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_MainRoomList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_MainRoomList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_UM_MainRoomInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_CenterArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_SizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_bGenerateRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_ShiftingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_EllipseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_RoomSizeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_StartRoomAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_GenStepEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGeneartor_Statics::NewProp_GenStepEnum_Underlying,
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
	IMPLEMENT_CLASS(AMapGeneartor, 1294335398);
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
