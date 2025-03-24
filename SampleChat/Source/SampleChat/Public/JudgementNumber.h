#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JudgementNumber.generated.h"

UCLASS()
class SAMPLECHAT_API UJudgementNumber : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "BaseBallGame")
	static FString Judgment(const TArray<int32>& SecretNumber, const FString& PlayerNumber);

};
