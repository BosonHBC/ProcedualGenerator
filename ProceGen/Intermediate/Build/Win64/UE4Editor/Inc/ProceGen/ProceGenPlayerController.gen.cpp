// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceGen/ProceGenPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceGenPlayerController() {}
// Cross Module References
	PROCEGEN_API UClass* Z_Construct_UClass_AProceGenPlayerController_NoRegister();
	PROCEGEN_API UClass* Z_Construct_UClass_AProceGenPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProceGen();
// End Cross Module References
	void AProceGenPlayerController::StaticRegisterNativesAProceGenPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AProceGenPlayerController_NoRegister()
	{
		return AProceGenPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AProceGenPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceGenPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceGenPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProceGenPlayerController.h" },
		{ "ModuleRelativePath", "ProceGenPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceGenPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceGenPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceGenPlayerController_Statics::ClassParams = {
		&AProceGenPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceGenPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProceGenPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceGenPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceGenPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceGenPlayerController, 2451566273);
	template<> PROCEGEN_API UClass* StaticClass<AProceGenPlayerController>()
	{
		return AProceGenPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceGenPlayerController(Z_Construct_UClass_AProceGenPlayerController, &AProceGenPlayerController::StaticClass, TEXT("/Script/ProceGen"), TEXT("AProceGenPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceGenPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
