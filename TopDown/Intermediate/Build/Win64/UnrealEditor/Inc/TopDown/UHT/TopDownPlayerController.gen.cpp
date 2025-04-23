// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown/Private/TopDownPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TOPDOWN_API UClass* Z_Construct_UClass_ATopDownPlayerController();
TOPDOWN_API UClass* Z_Construct_UClass_ATopDownPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDown();
// End Cross Module References

// Begin Class ATopDownPlayerController
void ATopDownPlayerController::StaticRegisterNativesATopDownPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownPlayerController);
UClass* Z_Construct_UClass_ATopDownPlayerController_NoRegister()
{
	return ATopDownPlayerController::StaticClass();
}
struct Z_Construct_UClass_ATopDownPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TopDownPlayerController.h" },
		{ "ModuleRelativePath", "Private/TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Fire_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Dash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TopDownPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Fire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Dash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Fire = { "IA_Fire", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, IA_Fire), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Fire_MetaData), NewProp_IA_Fire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Dash = { "IA_Dash", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, IA_Dash), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Dash_MetaData), NewProp_IA_Dash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Fire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_IA_Dash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATopDownPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownPlayerController_Statics::ClassParams = {
	&ATopDownPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownPlayerController()
{
	if (!Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton, Z_Construct_UClass_ATopDownPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton;
}
template<> TOPDOWN_API UClass* StaticClass<ATopDownPlayerController>()
{
	return ATopDownPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownPlayerController);
ATopDownPlayerController::~ATopDownPlayerController() {}
// End Class ATopDownPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownPlayerController, ATopDownPlayerController::StaticClass, TEXT("ATopDownPlayerController"), &Z_Registration_Info_UClass_ATopDownPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownPlayerController), 3844480777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_3280365279(TEXT("/Script/TopDown"),
	Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TopDownShooter_TopDown_Source_TopDown_Private_TopDownPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
