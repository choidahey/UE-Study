#include "JudgementNumber.h"

FString UJudgementNumber::Judgment(const TArray<int32>& SecretNumber, const FString& PlayerNumber)
{
    int32 SlashIndex = PlayerNumber.Find(TEXT("/"));
    if (SlashIndex == INDEX_NONE)
    {
        // 슬래시가 없으면 잘못된 포맷이므로 예외 처리
        return TEXT("Invalid Format - No slash found");
    }

    // 2) 슬래시 이후의 문자열만 추출
    FString GuessStr = PlayerNumber.Mid(SlashIndex + 1);

    // 3) 문자열 길이가 SecretNumber 길이와 같은지 확인
    if (GuessStr.Len() != SecretNumber.Num())
    {
        return TEXT("Out Of Index Length");
    }

    if (!GuessStr.IsNumeric())
    {
        return TEXT("Not Valid Input - Not Numeric");
    }

    // 2-2) 문자열 길이만큼 배열을 예약
    TArray<int32> PlayerNumberArray;
    PlayerNumberArray.Reserve(GuessStr.Len());

    // 2-3) 각 문자를 숫자로 변환하여 배열에 추가
    for (int32 i = 0; i < GuessStr.Len(); i++)
    {
        // '0' 문자를 빼서 실제 숫자로 변환
        int32 Digit = GuessStr[i] - '0';
        PlayerNumberArray.Add(Digit);
    }

    // 3) 스트라이크 / 볼 계산
    int32 StrikeCount = 0;
    int32 BallCount = 0;

    for (int32 i = 0; i < SecretNumber.Num(); i++)
    {
        if (PlayerNumberArray[i] == SecretNumber[i])
        {
            StrikeCount++;
        }
        else if (SecretNumber.Contains(PlayerNumberArray[i]))
        {
            BallCount++;
        }
    }

    // 4) 결과 반환
    if (StrikeCount == SecretNumber.Num())
    {
        return TEXT("WIN");
    }
    else if (StrikeCount == 0 && BallCount == 0)
    {
        return TEXT("OUT");
    }
    else
    {
        return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
    }
}
