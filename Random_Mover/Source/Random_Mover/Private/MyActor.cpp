#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.h"

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // ���� ��ġ �ʱ�ȭ
    currentPosition = FVector2D(0, 0);
    previousPosition = currentPosition;

    totalDistance = 0.0f;
    totalEvents = 0;
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    Move();
}

void AMyActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// 10ȸ �����̸鼭 ��ǥ���
void AMyActor::Move()
{
    int moveCount = 10; // �� �̵� Ƚ��

    for (int i = 0; i < moveCount; i++)
    {
        int move_x = Step();
        int move_y = Step();

        FVector2D newPosition = currentPosition + FVector2D(move_x, move_y);

        float distance = Distance(currentPosition, newPosition);
        totalDistance += distance;

        previousPosition = currentPosition;
        currentPosition = newPosition;

        //// ������ ���� ��ǥ ������Ʈ?
        //FVector NewLocation = FVector(currentPosition.X, currentPosition.Y, GetActorLocation().Z);
        //SetActorLocation(NewLocation);

        UE_LOG(LogTemp, Warning, TEXT(
            "position: (%.0f, %.0f), move distance : %.2f"), currentPosition.X, currentPosition.Y, distance);
        
        CreateEvent();

        UE_LOG(LogTemp, Warning, TEXT("--------------------------------------------------------"));
    }

    // �� �̵� �Ÿ�
    UE_LOG(LogTemp, Warning, TEXT("total distance : %.2f"), totalDistance);
    // �� �̺�Ʈ Ƚ��
    UE_LOG(LogTemp, Warning, TEXT("total event : %d"), totalEvents);
}

// 0, 1 ���� ��ȯ
int AMyActor::Step()
{
    return FMath::RandRange(0, 1);
}

// ���� ��ǥ���� �̵� �Ÿ� ���
float AMyActor::Distance(FVector2D first, FVector2D second)
{
    float x = second.X - first.X;
    float y = second.Y - first.Y;

    return FMath::Sqrt(x * x + y * y);
}

// 50% Ȯ���� �����ϰ� �̺�Ʈ �߻�
void AMyActor::CreateEvent()
{
    int eventTrigger = FMath::RandRange(0, 1);

    if (eventTrigger == 1)
    {
        totalEvents++;
        UE_LOG(LogTemp, Warning, TEXT("!!!!!!! A monster has appeared !!!!!!!"));
    }
    else
        UE_LOG(LogTemp, Warning, TEXT("Phew, I got out safely.."));

}




