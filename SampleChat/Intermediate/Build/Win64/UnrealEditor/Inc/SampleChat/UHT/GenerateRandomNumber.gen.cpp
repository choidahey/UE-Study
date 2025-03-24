// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/GenerateRandomNumber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateRandomNumber() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UGenerateRandomNumber();
SAMPLECHAT_API UClass* Z_Construct_UClass_UGenerateRandomNumber_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UGenerateRandomNumber Function GenerateSecretNumber
struct Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics
{
	struct GenerateRandomNumber_eventGenerateSecretNumber_Parms
	{
		int32 NumDigits;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseBallGame" },
		{ "CPP_Default_NumDigits", "3" },
		{ "ModuleRelativePath", "Public/GenerateRandomNumber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDigits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::NewProp_NumDigits = { "NumDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateRandomNumber_eventGenerateSecretNumber_Parms, NumDigits), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GenerateRandomNumber_eventGenerateSecretNumber_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::NewProp_NumDigits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateRandomNumber, nullptr, "GenerateSecretNumber", nullptr, nullptr, Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::GenerateRandomNumber_eventGenerateSecretNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::GenerateRandomNumber_eventGenerateSecretNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGenerateRandomNumber::execGenerateSecretNumber)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumDigits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=UGenerateRandomNumber::GenerateSecretNumber(Z_Param_NumDigits);
	P_NATIVE_END;
}
// End Class UGenerateRandomNumber Function GenerateSecretNumber

// Begin Class UGenerateRandomNumber
void UGenerateRandomNumber::StaticRegisterNativesUGenerateRandomNumber()
{
	UClass* Class = UGenerateRandomNumber::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateSecretNumber", &UGenerateRandomNumber::execGenerateSecretNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateRandomNumber);
UClass* Z_Construct_UClass_UGenerateRandomNumber_NoRegister()
{
	return UGenerateRandomNumber::StaticClass();
}
struct Z_Construct_UClass_UGenerateRandomNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GenerateRandomNumber.h" },
		{ "ModuleRelativePath", "Public/GenerateRandomNumber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitDigits_MetaData[] = {
		{ "ModuleRelativePath", "Public/GenerateRandomNumber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitDigits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitDigits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenerateRandomNumber_GenerateSecretNumber, "GenerateSecretNumber" }, // 2987641104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateRandomNumber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGenerateRandomNumber_Statics::NewProp_InitDigits_Inner = { "InitDigits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateRandomNumber_Statics::NewProp_InitDigits = { "InitDigits", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenerateRandomNumber, InitDigits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitDigits_MetaData), NewProp_InitDigits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateRandomNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateRandomNumber_Statics::NewProp_InitDigits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateRandomNumber_Statics::NewProp_InitDigits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateRandomNumber_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenerateRandomNumber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateRandomNumber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateRandomNumber_Statics::ClassParams = {
	&UGenerateRandomNumber::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGenerateRandomNumber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateRandomNumber_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateRandomNumber_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenerateRandomNumber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenerateRandomNumber()
{
	if (!Z_Registration_Info_UClass_UGenerateRandomNumber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateRandomNumber.OuterSingleton, Z_Construct_UClass_UGenerateRandomNumber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenerateRandomNumber.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UGenerateRandomNumber>()
{
	return UGenerateRandomNumber::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateRandomNumber);
UGenerateRandomNumber::~UGenerateRandomNumber() {}
// End Class UGenerateRandomNumber

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateRandomNumber, UGenerateRandomNumber::StaticClass, TEXT("UGenerateRandomNumber"), &Z_Registration_Info_UClass_UGenerateRandomNumber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateRandomNumber), 4104106715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_2645828387(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_GenerateRandomNumber_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
