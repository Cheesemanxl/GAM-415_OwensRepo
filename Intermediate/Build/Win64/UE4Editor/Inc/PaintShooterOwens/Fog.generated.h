// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAINTSHOOTEROWENS_Fog_generated_h
#error "Fog.generated.h already included, missing '#pragma once' in Fog.h"
#endif
#define PAINTSHOOTEROWENS_Fog_generated_h

#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_RPC_WRAPPERS
#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFog(); \
	friend PAINTSHOOTEROWENS_API class UClass* Z_Construct_UClass_AFog(); \
public: \
	DECLARE_CLASS(AFog, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintShooterOwens"), NO_API) \
	DECLARE_SERIALIZER(AFog) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFog(); \
	friend PAINTSHOOTEROWENS_API class UClass* Z_Construct_UClass_AFog(); \
public: \
	DECLARE_CLASS(AFog, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintShooterOwens"), NO_API) \
	DECLARE_SERIALIZER(AFog) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFog(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFog(AFog&&); \
	NO_API AFog(const AFog&); \
public:


#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFog(AFog&&); \
	NO_API AFog(const AFog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFog)


#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_squarePlane() { return STRUCT_OFFSET(AFog, m_squarePlane); } \
	FORCEINLINE static uint32 __PPO__m_dynamicTexture() { return STRUCT_OFFSET(AFog, m_dynamicTexture); } \
	FORCEINLINE static uint32 __PPO__m_dynamicMaterial() { return STRUCT_OFFSET(AFog, m_dynamicMaterial); } \
	FORCEINLINE static uint32 __PPO__m_dynamicMaterialInstance() { return STRUCT_OFFSET(AFog, m_dynamicMaterialInstance); }


#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_10_PROLOG
#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_PRIVATE_PROPERTY_OFFSET \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_RPC_WRAPPERS \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_INCLASS \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_PRIVATE_PROPERTY_OFFSET \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_INCLASS_NO_PURE_DECLS \
	PaintShooterOwens_Source_PaintShooterOwens_Fog_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PaintShooterOwens_Source_PaintShooterOwens_Fog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
