// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWN_TopDownCharacter_generated_h
#error "TopDownCharacter.generated.h already included, missing '#pragma once' in TopDownCharacter.h"
#endif
#define TOPDOWN_TopDownCharacter_generated_h

#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownCharacter(); \
	friend struct Z_Construct_UClass_ATopDownCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDown"), NO_API) \
	DECLARE_SERIALIZER(ATopDownCharacter)


#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATopDownCharacter(ATopDownCharacter&&); \
	ATopDownCharacter(const ATopDownCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownCharacter) \
	NO_API virtual ~ATopDownCharacter();


#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_14_PROLOG
#define FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWN_API UClass* StaticClass<class ATopDownCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
