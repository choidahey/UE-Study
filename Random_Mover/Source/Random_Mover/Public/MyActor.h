#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class RANDOM_MOVER_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void Move();
    int Step();
    float Distance(FVector2D first, FVector2D second);
    void CreateEvent();

private:
    FVector2D currentPosition;
    FVector2D previousPosition;

    float totalDistance;
    int totalEvents;
};
