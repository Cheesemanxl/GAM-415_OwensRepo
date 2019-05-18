// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RuntimeCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeCube() {}
// Cross Module References
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_ARuntimeCube_NoRegister();
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_ARuntimeCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PaintShooterOwens();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
// End Cross Module References
	void ARuntimeCube::StaticRegisterNativesARuntimeCube()
	{
	}
	UClass* Z_Construct_UClass_ARuntimeCube_NoRegister()
	{
		return ARuntimeCube::StaticClass();
	}
	UClass* Z_Construct_UClass_ARuntimeCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_PaintShooterOwens,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "RuntimeCube.h" },
				{ "ModuleRelativePath", "RuntimeCube.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
				{ "Category", "RuntimeCube" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "RuntimeCube.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ARuntimeCube, mesh), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_mesh_MetaData, ARRAY_COUNT(NewProp_mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARuntimeCube>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARuntimeCube::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARuntimeCube, 2848790291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARuntimeCube(Z_Construct_UClass_ARuntimeCube, &ARuntimeCube::StaticClass, TEXT("/Script/PaintShooterOwens"), TEXT("ARuntimeCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARuntimeCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
