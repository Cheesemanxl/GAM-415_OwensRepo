// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PAINTSHOOTEROWENS_PaintShooterOwensProjectile_generated_h
#error "PaintShooterOwensProjectile.generated.h already included, missing '#pragma once' in PaintShooterOwensProjectile.h"
#endif
#define PAINTSHOOTEROWENS_PaintShooterOwensProjectile_generated_h

#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaintShooterOwensProjectile(); \
	friend PAINTSHOOTEROWENS_API class UClass* Z_Construct_UClass_APaintShooterOwensProjectile(); \
public: \
	DECLARE_CLASS(APaintShooterOwensProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintShooterOwens"), NO_API) \
	DECLARE_SERIALIZER(APaintShooterOwensProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPaintShooterOwensProjectile(); \
	friend PAINTSHOOTEROWENS_API class UClass* Z_Construct_UClass_APaintShooterOwensProjectile(); \
public: \
	DECLARE_CLASS(APaintShooterOwensProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PaintShooterOwens"), NO_API) \
	DECLARE_SERIALIZER(APaintShooterOwensProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaintShooterOwensProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaintShooterOwensProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaintShooterOwensProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaintShooterOwensProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaintShooterOwensProjectile(APaintShooterOwensProjectile&&); \
	NO_API APaintShooterOwensProjectile(const APaintShooterOwensProjectile&); \
public:


#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaintShooterOwensProjectile(APaintShooterOwensProjectile&&); \
	NO_API APaintShooterOwensProjectile(const APaintShooterOwensProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaintShooterOwensProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaintShooterOwensProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaintShooterOwensProjectile)


#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APaintShooterOwensProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APaintShooterOwensProjectile, ProjectileMovement); }


#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_9_PROLOG
#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_RPC_WRAPPERS \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_INCLASS \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_INCLASS_NO_PURE_DECLS \
	PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PaintShooterOwens_Source_PaintShooterOwens_PaintShooterOwensProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
