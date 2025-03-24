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
	static TArray<int32> GenerateSecretNumber(int32 NumDigits = 3);  // ���� 3������ �� �ø� ���� �־ �Ű������� ����Ʈ ����������

private:
	UPROPERTY()
	TArray<int32> InitDigits;
};
