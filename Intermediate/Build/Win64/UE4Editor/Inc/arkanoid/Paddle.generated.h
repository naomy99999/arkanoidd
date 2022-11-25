// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define ARKANOID_Paddle_generated_h

#define arkanoid_Source_arkanoid_Paddle_h_11_SPARSE_DATA
#define arkanoid_Source_arkanoid_Paddle_h_11_RPC_WRAPPERS
#define arkanoid_Source_arkanoid_Paddle_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define arkanoid_Source_arkanoid_Paddle_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/arkanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define arkanoid_Source_arkanoid_Paddle_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/arkanoid"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define arkanoid_Source_arkanoid_Paddle_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public:


#define arkanoid_Source_arkanoid_Paddle_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle)


#define arkanoid_Source_arkanoid_Paddle_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Instance() { return STRUCT_OFFSET(APaddle, Instance); } \
	FORCEINLINE static uint32 __PPO__SM_Padle() { return STRUCT_OFFSET(APaddle, SM_Padle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APaddle, FloatingMovement); }


#define arkanoid_Source_arkanoid_Paddle_h_8_PROLOG
#define arkanoid_Source_arkanoid_Paddle_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoid_Source_arkanoid_Paddle_h_11_PRIVATE_PROPERTY_OFFSET \
	arkanoid_Source_arkanoid_Paddle_h_11_SPARSE_DATA \
	arkanoid_Source_arkanoid_Paddle_h_11_RPC_WRAPPERS \
	arkanoid_Source_arkanoid_Paddle_h_11_INCLASS \
	arkanoid_Source_arkanoid_Paddle_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define arkanoid_Source_arkanoid_Paddle_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	arkanoid_Source_arkanoid_Paddle_h_11_PRIVATE_PROPERTY_OFFSET \
	arkanoid_Source_arkanoid_Paddle_h_11_SPARSE_DATA \
	arkanoid_Source_arkanoid_Paddle_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	arkanoid_Source_arkanoid_Paddle_h_11_INCLASS_NO_PURE_DECLS \
	arkanoid_Source_arkanoid_Paddle_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID arkanoid_Source_arkanoid_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
