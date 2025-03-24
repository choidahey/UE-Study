#include "JudgementNumber.h"

FString UJudgementNumber::Judgment(const TArray<int32>& SecretNumber, const FString& PlayerNumber)
{
    int32 SlashIndex = PlayerNumber.Find(TEXT("/"));
    if (SlashIndex == INDEX_NONE)
    {
        // �����ð� ������ �߸��� �����̹Ƿ� ���� ó��
        return TEXT("Invalid Format - No slash found");
    }

    // 2) ������ ������ ���ڿ��� ����
    FString GuessStr = PlayerNumber.Mid(SlashIndex + 1);

    // 3) ���ڿ� ���̰� SecretNumber ���̿� ������ Ȯ��
    if (GuessStr.Len() != SecretNumber.Num())
    {
        return TEXT("Out Of Index Length");
    }

    if (!GuessStr.IsNumeric())
    {
        return TEXT("Not Valid Input - Not Numeric");
    }

    // 2-2) ���ڿ� ���̸�ŭ �迭�� ����
    TArray<int32> PlayerNumberArray;
    PlayerNumberArray.Reserve(GuessStr.Len());

    // 2-3) �� ���ڸ� ���ڷ� ��ȯ�Ͽ� �迭�� �߰�
    for (int32 i = 0; i < GuessStr.Len(); i++)
    {
        // '0' ���ڸ� ���� ���� ���ڷ� ��ȯ
        int32 Digit = GuessStr[i] - '0';
        PlayerNumberArray.Add(Digit);
    }

    // 3) ��Ʈ����ũ / �� ���
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

    // 4) ��� ��ȯ
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
