// Gun.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8
{
    Automatic UMETA(DisplayName = "Automatic"),
    Semi UMETA(DisplayName = "Semi"),
    Burst UMETA(DisplayName = "Burst")
};

UCLASS()
class CUBES_API AGun : public AActor
{
    GENERATED_BODY()

public: 
    AGun();

    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Gun")
    void Fire();

    UFUNCTION(BlueprintCallable, Category = "Gun")
    void ChangeFireMode(EFireMode NewFireMode);

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gun")
    class USkeletalMeshComponent* GunMesh;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gun")
    FVector MuzzleOffset;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun|Attributes")
    float Damage;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun|Attributes")
    float FireRate;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gun|Attributes")
    float ReloadTime;

protected:
    virtual void BeginPlay() override;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gun")
    void AutomaticFire();
    virtual void AutomaticFire_Implementation();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gun")
    void SemiFire();
    virtual void SemiFire_Implementation();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Gun")
    void BurstFire();
    virtual void BurstFire_Implementation();

private:
    EFireMode CurrentFireMode;

    FTimerHandle BurstTimerHandle;
};
