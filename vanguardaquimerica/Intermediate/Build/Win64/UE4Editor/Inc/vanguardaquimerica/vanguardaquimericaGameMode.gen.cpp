// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "vanguardaquimerica/vanguardaquimericaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodevanguardaquimericaGameMode() {}
// Cross Module References
	VANGUARDAQUIMERICA_API UClass* Z_Construct_UClass_AvanguardaquimericaGameMode_NoRegister();
	VANGUARDAQUIMERICA_API UClass* Z_Construct_UClass_AvanguardaquimericaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_vanguardaquimerica();
// End Cross Module References
	void AvanguardaquimericaGameMode::StaticRegisterNativesAvanguardaquimericaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AvanguardaquimericaGameMode_NoRegister()
	{
		return AvanguardaquimericaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AvanguardaquimericaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AvanguardaquimericaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_vanguardaquimerica,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AvanguardaquimericaGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "vanguardaquimericaGameMode.h" },
		{ "ModuleRelativePath", "vanguardaquimericaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AvanguardaquimericaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AvanguardaquimericaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AvanguardaquimericaGameMode_Statics::ClassParams = {
		&AvanguardaquimericaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AvanguardaquimericaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AvanguardaquimericaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AvanguardaquimericaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AvanguardaquimericaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AvanguardaquimericaGameMode, 2034509049);
	template<> VANGUARDAQUIMERICA_API UClass* StaticClass<AvanguardaquimericaGameMode>()
	{
		return AvanguardaquimericaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AvanguardaquimericaGameMode(Z_Construct_UClass_AvanguardaquimericaGameMode, &AvanguardaquimericaGameMode::StaticClass, TEXT("/Script/vanguardaquimerica"), TEXT("AvanguardaquimericaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AvanguardaquimericaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
