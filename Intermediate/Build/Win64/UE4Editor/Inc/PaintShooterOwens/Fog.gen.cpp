// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Fog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFog() {}
// Cross Module References
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_AFog_NoRegister();
	PAINTSHOOTEROWENS_API UClass* Z_Construct_UClass_AFog();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PaintShooterOwens();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFog::StaticRegisterNativesAFog()
	{
	}
	UClass* Z_Construct_UClass_AFog_NoRegister()
	{
		return AFog::StaticClass();
	}
	UClass* Z_Construct_UClass_AFog()
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
				{ "IncludePath", "Fog.h" },
				{ "ModuleRelativePath", "Fog.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dynamicMaterialInstance_MetaData[] = {
				{ "ModuleRelativePath", "Fog.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_dynamicMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "m_dynamicMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFog, m_dynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_m_dynamicMaterialInstance_MetaData, ARRAY_COUNT(NewProp_m_dynamicMaterialInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dynamicMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Fog.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_dynamicMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "m_dynamicMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFog, m_dynamicMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_m_dynamicMaterial_MetaData, ARRAY_COUNT(NewProp_m_dynamicMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dynamicTexture_MetaData[] = {
				{ "ModuleRelativePath", "Fog.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_dynamicTexture = { UE4CodeGen_Private::EPropertyClass::Object, "m_dynamicTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFog, m_dynamicTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_m_dynamicTexture_MetaData, ARRAY_COUNT(NewProp_m_dynamicTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_squarePlane_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Fog.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_squarePlane = { UE4CodeGen_Private::EPropertyClass::Object, "m_squarePlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFog, m_squarePlane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_squarePlane_MetaData, ARRAY_COUNT(NewProp_m_squarePlane_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_dynamicMaterialInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_dynamicMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_dynamicTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_squarePlane,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFog>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFog::StaticClass,
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
	IMPLEMENT_CLASS(AFog, 27127582);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFog(Z_Construct_UClass_AFog, &AFog::StaticClass, TEXT("/Script/PaintShooterOwens"), TEXT("AFog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
