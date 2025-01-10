#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.h"

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // 시작 위치 초기화
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

// 10회 움직이면서 좌표출력
void AMyActor::Move()
{
    int moveCount = 10; // 총 이동 횟수

    for (int i = 0; i < moveCount; i++)
    {
        int move_x = Step();
        int move_y = Step();

        FVector2D newPosition = currentPosition + FVector2D(move_x, move_y);

        float distance = Distance(currentPosition, newPosition);
        totalDistance += distance;

        previousPosition = currentPosition;
        currentPosition = newPosition;

        //// 액터의 월드 좌표 업데이트?
        //FVector NewLocation = FVector(currentPosition.X, currentPosition.Y, GetActorLocation().Z);
        //SetActorLocation(NewLocation);

        UE_LOG(LogTemp, Warning, TEXT(
            "position: (%.0f, %.0f), move distance : %.2f"), currentPosition.X, currentPosition.Y, distance);
        
        CreateEvent();

        UE_LOG(LogTemp, Warning, TEXT("--------------------------------------------------------"));
    }

    // 총 이동 거리
    UE_LOG(LogTemp, Warning, TEXT("total distance : %.2f"), totalDistance);
    // 총 이벤트 횟수
    UE_LOG(LogTemp, Warning, TEXT("total event : %d"), totalEvents);
}

// 0, 1 랜덤 반환
int AMyActor::Step()
{
    return FMath::RandRange(0, 1);
}

// 이전 좌표기준 이동 거리 출력
float AMyActor::Distance(FVector2D first, FVector2D second)
{
    float x = second.X - first.X;
    float y = second.Y - first.Y;

    return FMath::Sqrt(x * x + y * y);
}

// 50% 확률로 랜덤하게 이벤트 발생
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




