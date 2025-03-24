// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JudgementNumber.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_JudgementNumber_generated_h
#error "JudgementNumber.generated.h already included, missing '#pragma once' in JudgementNumber.h"
#endif
#define SAMPLECHAT_JudgementNumber_generated_h

#define FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJudgment);


#define FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJudgementNumber(); \
	friend struct Z_Construct_UClass_UJudgementNumber_Statics; \
public: \
	DECLARE_CLASS(UJudgementNumber, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UJudgementNumber)


#define FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJudgementNumber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJudgementNumber(UJudgementNumber&&); \
	UJudgementNumber(const UJudgementNumber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJudgementNumber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJudgementNumber); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJudgementNumber) \
	NO_API virtual ~UJudgementNumber();


#define FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_7_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_10_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UJudgementNumber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
