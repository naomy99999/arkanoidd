// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/Queen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueen() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_AQueen_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_AQueen();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
// End Cross Module References
	void AQueen::StaticRegisterNativesAQueen()
	{
	}
	UClass* Z_Construct_UClass_AQueen_NoRegister()
	{
		return AQueen::StaticClass();
	}
	struct Z_Construct_UClass_AQueen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQueen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQueen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Queen.h" },
		{ "ModuleRelativePath", "Queen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQueen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQueen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQueen_Statics::ClassParams = {
		&AQueen::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQueen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQueen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQueen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQueen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQueen, 3525353465);
	template<> ARKANOID_API UClass* StaticClass<AQueen>()
	{
		return AQueen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQueen(Z_Construct_UClass_AQueen, &AQueen::StaticClass, TEXT("/Script/arkanoid"), TEXT("AQueen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQueen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
