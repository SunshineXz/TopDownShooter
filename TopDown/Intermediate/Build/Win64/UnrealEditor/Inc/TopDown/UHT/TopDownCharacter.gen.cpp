// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown/Private/TopDownCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
TOPDOWN_API UClass* Z_Construct_UClass_ATopDownCharacter();
TOPDOWN_API UClass* Z_Construct_UClass_ATopDownCharacter_NoRegister();
TOPDOWN_API UClass* Z_Construct_UClass_ATopDownProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDown();
// End Cross Module References

// Begin Class ATopDownCharacter
void ATopDownCharacter::StaticRegisterNativesATopDownCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownCharacter);
UClass* Z_Construct_UClass_ATopDownCharacter_NoRegister()
{
	return ATopDownCharacter::StaticClass();
}
struct Z_Construct_UClass_ATopDownCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownCharacter.h" },
		{ "ModuleRelativePath", "Private/TopDownCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "TopDownCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TopDownCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "TopDownCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TopDownCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Private/TopDownCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATopDownProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownCharacter_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATopDownCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownCharacter_Statics::ClassParams = {
	&ATopDownCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATopDownCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownCharacter()
{
	if (!Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton, Z_Construct_UClass_ATopDownCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton;
}
template<> TOPDOWN_API UClass* StaticClass<ATopDownCharacter>()
{
	return ATopDownCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownCharacter);
ATopDownCharacter::~ATopDownCharacter() {}
// End Class ATopDownCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownCharacter, ATopDownCharacter::StaticClass, TEXT("ATopDownCharacter"), &Z_Registration_Info_UClass_ATopDownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownCharacter), 1096534055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_738526101(TEXT("/Script/TopDown"),
	Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
