#include "GenerateRandomNumber.h"
#include "Math/UnrealMathUtility.h"


UGenerateRandomNumber::UGenerateRandomNumber()
{
}

TArray<int32> UGenerateRandomNumber::GenerateSecretNumber(int32 NumDigits)
{
	TArray<int32> Digits = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	TArray<int32> SecretNumber;

	for (int i = 0; i < NumDigits; i++)
	{
		int32 RandomIndex = FMath::RandRange(0, Digits.Num() - 1);
		int32 SelectedDigit = Digits[RandomIndex]; // 예를 들어, Digits[2] 즉, 3을 가져옴
		SecretNumber.Add(SelectedDigit);          // 3을 추가
		Digits.RemoveAt(RandomIndex);
	}

	FString SecretStr;
	for (int32 Num : SecretNumber)
	{
		SecretStr += FString::FromInt(Num);
	}
	UE_LOG(LogTemp, Log, TEXT("Secret Number: %s"), *SecretStr);

	return SecretNumber;
}
