// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceGen/ProceGenGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceGenGameMode() {}
// Cross Module References
	PROCEGEN_API UClass* Z_Construct_UClass_AProceGenGameMode_NoRegister();
	PROCEGEN_API UClass* Z_Construct_UClass_AProceGenGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProceGen();
// End Cross Module References
	void AProceGenGameMode::StaticRegisterNativesAProceGenGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProceGenGameMode_NoRegister()
	{
		return AProceGenGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProceGenGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceGenGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceGenGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProceGenGameMode.h" },
		{ "ModuleRelativePath", "ProceGenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceGenGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceGenGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceGenGameMode_Statics::ClassParams = {
		&AProceGenGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AProceGenGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProceGenGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceGenGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceGenGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceGenGameMode, 1257918853);
	template<> PROCEGEN_API UClass* StaticClass<AProceGenGameMode>()
	{
		return AProceGenGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceGenGameMode(Z_Construct_UClass_AProceGenGameMode, &AProceGenGameMode::StaticClass, TEXT("/Script/ProceGen"), TEXT("AProceGenGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceGenGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
