#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Particles/ParticleSystem.h"
#include "Gun.h"
#include "Projectile.h"
#include "WeaponProperties.generated.h"


UENUM(BlueprintType)
enum class EBulletType : uint8
{
    Hitscan UMETA(DisplayName = "Hitscan"),
    Projectile UMETA(DisplayName = "Projectile")
};

UENUM(BlueprintType)
enum class EFireType : uint8
{
    Burst UMETA(DisplayName = "Burst"),
    Automatic UMETA(DisplayName = "Automatic"),
    Semi UMETA(DisplayName = "Semi")
};

UCLASS(BlueprintType)
class CUBES_API UWeaponProperties : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UWeaponProperties();

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    FString GetWeaponName() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetWeaponName(const FString& NewWeaponName);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    USkeletalMesh* GetWeaponMesh() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetWeaponMesh(USkeletalMesh* NewWeaponMesh);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    FName GetHandSocketName() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetHandSocketName(const FName& NewHandSocketName);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    FVector GetScale() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetScale(const FVector& NewScale);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    EBulletType GetBulletType() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetBulletType(EBulletType NewBulletType);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    TSubclassOf<AProjectile> GetProjectileClass() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetProjectileClass(TSubclassOf<AProjectile> NewProjectileClass);
    
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    TSubclassOf<AGun> GetWeaponInstance() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetWeaponInstance(TSubclassOf<AGun> NewWeaponInstance);
    
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    int32 GetBurstAmount() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetBurstAmount(int32 NewBurstAmount);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    float GetDistance() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetDistance(float NewDistance);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    float GetDamage() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetDamage(float NewDamage);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    float GetRateOfFire() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetRateOfFire(float NewRateOfFire);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    int32 GetBulletPalletRange() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetBulletPalletRange(int32 NewBulletPalletRange);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    EFireType GetFireType() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetFireType(EFireType NewFireType);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    FString GetInteractMessage() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetInteractMessage(const FString& NewInteractMessage);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    float GetKnockbackPower() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetKnockbackPower(float NewKnockbackPower);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    FLinearColor GetWeaponColor() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetWeaponColor(const FLinearColor& NewWeaponColor);
    
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    UParticleSystem* GetMuzzleEffect() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetMuzzleEffect(UParticleSystem* NewMuzzleEffect);

    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    FName GetMuzzleSocket() const;
    UFUNCTION(BlueprintCallable, Category = "Weapon Properties")
    void SetMuzzleSocket(FName& NewMuzzleSocket);
    
private:
    UPROPERTY(EditAnywhere,  Category = "Weapon Properties|Properties", meta = (AllowPrivateAccess = "true"))
    FString WeaponName;
    
    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Mesh", meta = (AllowPrivateAccess = "true"))
    USkeletalMesh* WeaponMesh;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Mesh", meta = (AllowPrivateAccess = "True"))
    FLinearColor WeaponColor;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Mesh", meta = (AllowPrivateAccess = "true"))
    FName HandSocketName;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Mesh", meta = (AllowPrivateAccess = "true"))
    FVector Scale;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Mesh", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<AGun> WeaponInstance;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    EBulletType BulletType;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<AProjectile> ProjectileClass;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    int32 BurstAmount;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    float Distance;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    float Damage;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    float RateOfFire;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    float KnockbackPower;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    int32 BulletPalletRange;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    EFireType FireType;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties", meta = (AllowPrivateAccess = "true"))
    FString InteractMessage;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    FName MuzzleSocket;

    UPROPERTY(EditAnywhere, Category = "Weapon Properties|Properties|Fire", meta = (AllowPrivateAccess = "true"))
    UParticleSystem* MuzzleEffect;

    
};
