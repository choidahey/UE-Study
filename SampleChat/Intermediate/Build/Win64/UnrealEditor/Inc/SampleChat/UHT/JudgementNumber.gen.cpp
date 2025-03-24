// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/JudgementNumber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJudgementNumber() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UJudgementNumber();
SAMPLECHAT_API UClass* Z_Construct_UClass_UJudgementNumber_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UJudgementNumber Function Judgment
struct Z_Construct_UFunction_UJudgementNumber_Judgment_Statics
{
	struct JudgementNumber_eventJudgment_Parms
	{
		TArray<int32> SecretNumber;
		FString PlayerNumber;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseBallGame" },
		{ "ModuleRelativePath", "Public/JudgementNumber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecretNumber_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecretNumber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNumber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_SecretNumber_Inner = { "SecretNumber", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_SecretNumber = { "SecretNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JudgementNumber_eventJudgment_Parms, SecretNumber), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretNumber_MetaData), NewProp_SecretNumber_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_PlayerNumber = { "PlayerNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JudgementNumber_eventJudgment_Parms, PlayerNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNumber_MetaData), NewProp_PlayerNumber_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JudgementNumber_eventJudgment_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_SecretNumber_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_SecretNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_PlayerNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJudgementNumber, nullptr, "Judgment", nullptr, nullptr, Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::JudgementNumber_eventJudgment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::JudgementNumber_eventJudgment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJudgementNumber_Judgment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJudgementNumber_Judgment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJudgementNumber::execJudgment)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_SecretNumber);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UJudgementNumber::Judgment(Z_Param_Out_SecretNumber,Z_Param_PlayerNumber);
	P_NATIVE_END;
}
// End Class UJudgementNumber Function Judgment

// Begin Class UJudgementNumber
void UJudgementNumber::StaticRegisterNativesUJudgementNumber()
{
	UClass* Class = UJudgementNumber::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Judgment", &UJudgementNumber::execJudgment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJudgementNumber);
UClass* Z_Construct_UClass_UJudgementNumber_NoRegister()
{
	return UJudgementNumber::StaticClass();
}
struct Z_Construct_UClass_UJudgementNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JudgementNumber.h" },
		{ "ModuleRelativePath", "Public/JudgementNumber.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJudgementNumber_Judgment, "Judgment" }, // 4183302829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJudgementNumber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJudgementNumber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJudgementNumber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJudgementNumber_Statics::ClassParams = {
	&UJudgementNumber::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJudgementNumber_Statics::Class_MetaDataParams), Z_Construct_UClass_UJudgementNumber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJudgementNumber()
{
	if (!Z_Registration_Info_UClass_UJudgementNumber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJudgementNumber.OuterSingleton, Z_Construct_UClass_UJudgementNumber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJudgementNumber.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UJudgementNumber>()
{
	return UJudgementNumber::StaticClass();
}
UJudgementNumber::UJudgementNumber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJudgementNumber);
UJudgementNumber::~UJudgementNumber() {}
// End Class UJudgementNumber

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJudgementNumber, UJudgementNumber::StaticClass, TEXT("UJudgementNumber"), &Z_Registration_Info_UClass_UJudgementNumber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJudgementNumber), 2482494686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_2636836028(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_Public_JudgementNumber_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
