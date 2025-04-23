// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWN_TopDownPlayerController_generated_h
#error "TopDownPlayerController.generated.h already included, missing '#pragma once' in TopDownPlayerController.h"
#endif
#define TOPDOWN_TopDownPlayerController_generated_h

#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownPlayerController(); \
	friend struct Z_Construct_UClass_ATopDownPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATopDownPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDown"), NO_API) \
	DECLARE_SERIALIZER(ATopDownPlayerController)


#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATopDownPlayerController(ATopDownPlayerController&&); \
	ATopDownPlayerController(const ATopDownPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownPlayerController) \
	NO_API virtual ~ATopDownPlayerController();


#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_15_PROLOG
#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWN_API UClass* StaticClass<class ATopDownPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
