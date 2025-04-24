// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDown_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TopDown;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TopDown()
	{
		if (!Z_Registration_Info_UPackage__Script_TopDown.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TopDown",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD8F3E7B3,
				0xE53CE5B3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TopDown.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TopDown.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TopDown(Z_Construct_UPackage__Script_TopDown, TEXT("/Script/TopDown"), Z_Registration_Info_UPackage__Script_TopDown, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD8F3E7B3, 0xE53CE5B3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
