#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenerateRandomNumber.generated.h"

UCLASS()
class SAMPLECHAT_API UGenerateRandomNumber : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UGenerateRandomNumber();

	UFUNCTION(BlueprintCallable, Category = "BaseBallGame")
	static TArray<int32> GenerateSecretNumber(int32 NumDigits = 3);  // 추후 3개말고 더 늘릴 수도 있어서 매개변수로 디폴트 지정해줬음

private:
	UPROPERTY()
	TArray<int32> InitDigits;
};
