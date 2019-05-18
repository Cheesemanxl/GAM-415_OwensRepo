// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CubeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeActor() {}
// Cross Module References
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_ACubeActor_NoRegister();
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_ACubeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PaintShooterOwens();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void ACubeActor::StaticRegisterNativesACubeActor()
	{
	}
	UClass* Z_Construct_UClass_ACubeActor_NoRegister()
	{
		return ACubeActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ACubeActor()
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
				{ "IncludePath", "CubeActor.h" },
				{ "ModuleRelativePath", "CubeActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
				{ "Category", "CubeActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "CubeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ACubeActor, mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(NewProp_mesh_MetaData, ARRAY_COUNT(NewProp_mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACubeActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACubeActor::StaticClass,
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
	IMPLEMENT_CLASS(ACubeActor, 3328760145);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeActor(Z_Construct_UClass_ACubeActor, &ACubeActor::StaticClass, TEXT("/Script/PaintShooterOwens"), TEXT("ACubeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
