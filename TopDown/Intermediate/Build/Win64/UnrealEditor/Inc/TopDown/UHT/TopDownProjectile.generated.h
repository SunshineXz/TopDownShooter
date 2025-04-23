// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TOPDOWN_TopDownProjectile_generated_h
#error "TopDownProjectile.generated.h already included, missing '#pragma once' in TopDownProjectile.h"
#endif
#define TOPDOWN_TopDownProjectile_generated_h

#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownProjectile(); \
	friend struct Z_Construct_UClass_ATopDownProjectile_Statics; \
public: \
	DECLARE_CLASS(ATopDownProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDown"), NO_API) \
	DECLARE_SERIALIZER(ATopDownProjectile)


#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATopDownProjectile(ATopDownProjectile&&); \
	ATopDownProjectile(const ATopDownProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownProjectile) \
	NO_API virtual ~ATopDownProjectile();


#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_14_PROLOG
#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWN_API UClass* StaticClass<class ATopDownProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
