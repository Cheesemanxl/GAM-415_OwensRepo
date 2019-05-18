// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PaintShooterOwensHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintShooterOwensHUD() {}
// Cross Module References
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_APaintShooterOwensHUD_NoRegister();
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_APaintShooterOwensHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PaintShooterOwens();
// End Cross Module References
	void APaintShooterOwensHUD::StaticRegisterNativesAPaintShooterOwensHUD()
	{
	}
	UClass* Z_Construct_UClass_APaintShooterOwensHUD_NoRegister()
	{
		return APaintShooterOwensHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APaintShooterOwensHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_PaintShooterOwens,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "PaintShooterOwensHUD.h" },
				{ "ModuleRelativePath", "PaintShooterOwensHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APaintShooterOwensHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APaintShooterOwensHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaintShooterOwensHUD, 2042559779);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaintShooterOwensHUD(Z_Construct_UClass_APaintShooterOwensHUD, &APaintShooterOwensHUD::StaticClass, TEXT("/Script/PaintShooterOwens"), TEXT("APaintShooterOwensHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaintShooterOwensHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
