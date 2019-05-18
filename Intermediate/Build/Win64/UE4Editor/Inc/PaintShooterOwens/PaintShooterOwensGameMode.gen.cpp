// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PaintShooterOwensGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintShooterOwensGameMode() {}
// Cross Module References
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_APaintShooterOwensGameMode_NoRegister();
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_APaintShooterOwensGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PaintShooterOwens();
// End Cross Module References
	void APaintShooterOwensGameMode::StaticRegisterNativesAPaintShooterOwensGameMode()
	{
	}
	UClass* Z_Construct_UClass_APaintShooterOwensGameMode_NoRegister()
	{
		return APaintShooterOwensGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APaintShooterOwensGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_PaintShooterOwens,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PaintShooterOwensGameMode.h" },
				{ "ModuleRelativePath", "PaintShooterOwensGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APaintShooterOwensGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APaintShooterOwensGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaintShooterOwensGameMode, 3718877089);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaintShooterOwensGameMode(Z_Construct_UClass_APaintShooterOwensGameMode, &APaintShooterOwensGameMode::StaticClass, TEXT("/Script/PaintShooterOwens"), TEXT("APaintShooterOwensGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaintShooterOwensGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
