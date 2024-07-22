#include "WeaponProperties.h"

UWeaponProperties::UWeaponProperties()
    :   WeaponName(TEXT("Default Weapon")),
        WeaponInstance(nullptr),
        WeaponMesh(nullptr),
        WeaponColor(FLinearColor::White),
        HandSocketName(TEXT("Default Socket")),
        Scale(FVector(1.0f, 1.0f, 1.0f)),
        BulletType(EBulletType::Hitscan),
        ProjectileClass(nullptr),
        BurstAmount(1),
        Distance(1000.0f),
        Damage(10.0f),    
        RateOfFire(1.0f),
        BulletPalletRange(10),
        FireType(EFireType::Semi),
        MuzzleSocket(TEXT("MuzzleSocket")),
        MuzzleEffect(nullptr),
        KnockbackPower(100.0f),
        InteractMessage(TEXT("Interact Message")) {}
      
      

FString UWeaponProperties::GetWeaponName() const
{
    return WeaponName;
}

void UWeaponProperties::SetWeaponName(const FString& NewWeaponName)
{
    WeaponName = NewWeaponName;
}

USkeletalMesh* UWeaponProperties::GetWeaponMesh() const
{
    return WeaponMesh;
}

void UWeaponProperties::SetWeaponMesh(USkeletalMesh* NewWeaponMesh)
{
    WeaponMesh = NewWeaponMesh;
}

FName UWeaponProperties::GetHandSocketName() const
{
    return HandSocketName;
}

void UWeaponProperties::SetHandSocketName(const FName& NewHandSocketName)
{
    HandSocketName = NewHandSocketName;
}

FVector UWeaponProperties::GetScale() const
{
    return Scale;
}

void UWeaponProperties::SetScale(const FVector& NewScale)
{
    Scale = NewScale;
}

EBulletType UWeaponProperties::GetBulletType() const
{
    return BulletType;
}

void UWeaponProperties::SetBulletType(EBulletType NewBulletType)
{
    BulletType = NewBulletType;
}

TSubclassOf<AProjectile> UWeaponProperties::GetProjectileClass() const
{
    return ProjectileClass;
}

void UWeaponProperties::SetProjectileClass(TSubclassOf<AProjectile> NewProjectileClass)
{
    ProjectileClass = NewProjectileClass;
}

TSubclassOf<AGun> UWeaponProperties::GetWeaponInstance() const
{
    return WeaponInstance;
}

void UWeaponProperties::SetWeaponInstance(TSubclassOf<AGun> NewWeaponInstance)
{
    WeaponInstance = NewWeaponInstance;
}


int32 UWeaponProperties::GetBurstAmount() const
{
    return BurstAmount;
}

void UWeaponProperties::SetBurstAmount(int32 NewBurstAmount)
{
    BurstAmount = NewBurstAmount;
}

float UWeaponProperties::GetDistance() const
{
    return Distance;
}

float UWeaponProperties::GetKnockbackPower() const
{
    return KnockbackPower;
}

void UWeaponProperties::SetDistance(float NewDistance)
{
    Distance = NewDistance;
}

float UWeaponProperties::GetDamage() const
{
    return Damage;
}

void UWeaponProperties::SetDamage(float NewDamage)
{
    Damage = NewDamage;
}

float UWeaponProperties::GetRateOfFire() const
{
    return RateOfFire;
}

void UWeaponProperties::SetRateOfFire(float NewRateOfFire)
{
    RateOfFire = NewRateOfFire;
}

void UWeaponProperties::SetKnockbackPower(float NewKnocbackPower)
{
     KnockbackPower = NewKnocbackPower;
}

int32 UWeaponProperties::GetBulletPalletRange() const
{
    return BulletPalletRange;
}

void UWeaponProperties::SetBulletPalletRange(int32 NewBulletPalletRange)
{
    BulletPalletRange = NewBulletPalletRange;
}

EFireType UWeaponProperties::GetFireType() const
{
    return FireType;
}

void UWeaponProperties::SetFireType(EFireType NewFireType)
{
    FireType = NewFireType;
}

FString UWeaponProperties::GetInteractMessage() const
{
    return InteractMessage;
}

void UWeaponProperties::SetInteractMessage(const FString& NewInteractMessage)
{
    InteractMessage = NewInteractMessage;
}

FLinearColor UWeaponProperties::GetWeaponColor() const
{
    return WeaponColor;
}

void UWeaponProperties::SetWeaponColor(const FLinearColor& NewWeaponColor)
{
    WeaponColor = NewWeaponColor;
}

UParticleSystem* UWeaponProperties::GetMuzzleEffect() const
{
    return MuzzleEffect;
}

void UWeaponProperties::SetMuzzleEffect(UParticleSystem* NewMuzzleEffect)
{
    MuzzleEffect = NewMuzzleEffect;
}

FName UWeaponProperties::GetMuzzleSocket() const
{
    return MuzzleSocket;
}

void UWeaponProperties::SetMuzzleSocket(FName& NewMuzzleSocket)
{
    MuzzleSocket = NewMuzzleSocket;
}



