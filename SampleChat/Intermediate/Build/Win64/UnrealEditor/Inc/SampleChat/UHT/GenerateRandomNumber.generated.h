// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenerateRandomNumber.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_GenerateRandomNumber_generated_h
#error "GenerateRandomNumber.generated.h already included, missing '#pragma once' in GenerateRandomNumber.h"
#endif
#define SAMPLECHAT_GenerateRandomNumber_generated_h

#define FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateSecretNumber);


#define FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenerateRandomNumber(); \
	friend struct Z_Construct_UClass_UGenerateRandomNumber_Statics; \
public: \
	DECLARE_CLASS(UGenerateRandomNumber, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UGenerateRandomNumber)


#define FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenerateRandomNumber(UGenerateRandomNumber&&); \
	UGenerateRandomNumber(const UGenerateRandomNumber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateRandomNumber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateRandomNumber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenerateRandomNumber) \
	NO_API virtual ~UGenerateRandomNumber();


#define FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_7_PROLOG
#define FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_10_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UGenerateRandomNumber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
