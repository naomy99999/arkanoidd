// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/arkanoidGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodearkanoidGameModeBase() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_AarkanoidGameModeBase_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_AarkanoidGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
	ARKANOID_API UClass* Z_Construct_UClass_APaddle_NoRegister();
// End Cross Module References
	void AarkanoidGameModeBase::StaticRegisterNativesAarkanoidGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AarkanoidGameModeBase_NoRegister()
	{
		return AarkanoidGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AarkanoidGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_paleta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_paleta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AarkanoidGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AarkanoidGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "arkanoidGameModeBase.h" },
		{ "ModuleRelativePath", "arkanoidGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AarkanoidGameModeBase_Statics::NewProp_paleta_MetaData[] = {
		{ "ModuleRelativePath", "arkanoidGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AarkanoidGameModeBase_Statics::NewProp_paleta = { "paleta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AarkanoidGameModeBase, paleta), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AarkanoidGameModeBase_Statics::NewProp_paleta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AarkanoidGameModeBase_Statics::NewProp_paleta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AarkanoidGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AarkanoidGameModeBase_Statics::NewProp_paleta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AarkanoidGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AarkanoidGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AarkanoidGameModeBase_Statics::ClassParams = {
		&AarkanoidGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AarkanoidGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AarkanoidGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AarkanoidGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AarkanoidGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AarkanoidGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AarkanoidGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AarkanoidGameModeBase, 2460054697);
	template<> ARKANOID_API UClass* StaticClass<AarkanoidGameModeBase>()
	{
		return AarkanoidGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AarkanoidGameModeBase(Z_Construct_UClass_AarkanoidGameModeBase, &AarkanoidGameModeBase::StaticClass, TEXT("/Script/arkanoid"), TEXT("AarkanoidGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AarkanoidGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
