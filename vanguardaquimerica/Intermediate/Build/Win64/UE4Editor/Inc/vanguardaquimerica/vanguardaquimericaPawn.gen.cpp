// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "vanguardaquimerica/vanguardaquimericaPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodevanguardaquimericaPawn() {}
// Cross Module References
	VANGUARDAQUIMERICA_API UClass* Z_Construct_UClass_AvanguardaquimericaPawn_NoRegister();
	VANGUARDAQUIMERICA_API UClass* Z_Construct_UClass_AvanguardaquimericaPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_vanguardaquimerica();
	VANGUARDAQUIMERICA_API UClass* Z_Construct_UClass_AvanguardaquimericaBlock_NoRegister();
// End Cross Module References
	void AvanguardaquimericaPawn::StaticRegisterNativesAvanguardaquimericaPawn()
	{
	}
	UClass* Z_Construct_UClass_AvanguardaquimericaPawn_NoRegister()
	{
		return AvanguardaquimericaPawn::StaticClass();
	}
	struct Z_Construct_UClass_AvanguardaquimericaPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AvanguardaquimericaPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_vanguardaquimerica,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AvanguardaquimericaPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "vanguardaquimericaPawn.h" },
		{ "ModuleRelativePath", "vanguardaquimericaPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AvanguardaquimericaPawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "vanguardaquimericaPawn" },
		{ "ModuleRelativePath", "vanguardaquimericaPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AvanguardaquimericaPawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvanguardaquimericaPawn, CurrentBlockFocus), Z_Construct_UClass_AvanguardaquimericaBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AvanguardaquimericaPawn_Statics::NewProp_CurrentBlockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AvanguardaquimericaPawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AvanguardaquimericaPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AvanguardaquimericaPawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AvanguardaquimericaPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AvanguardaquimericaPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AvanguardaquimericaPawn_Statics::ClassParams = {
		&AvanguardaquimericaPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AvanguardaquimericaPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AvanguardaquimericaPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AvanguardaquimericaPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AvanguardaquimericaPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AvanguardaquimericaPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AvanguardaquimericaPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AvanguardaquimericaPawn, 4280243463);
	template<> VANGUARDAQUIMERICA_API UClass* StaticClass<AvanguardaquimericaPawn>()
	{
		return AvanguardaquimericaPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AvanguardaquimericaPawn(Z_Construct_UClass_AvanguardaquimericaPawn, &AvanguardaquimericaPawn::StaticClass, TEXT("/Script/vanguardaquimerica"), TEXT("AvanguardaquimericaPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AvanguardaquimericaPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
