// Gun.cpp

#include "Gun.h"

AGun::AGun()
{
    GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
    RootComponent = GunMesh;

    MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);
    CurrentFireMode = EFireMode::Automatic;

    Damage = 10.0f;
    FireRate = 0.1f;
    ReloadTime = 2.0f;
}

void AGun::BeginPlay()
{
    Super::BeginPlay();
}

void AGun::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AGun::Fire()
{
    switch (CurrentFireMode)
    {
    case EFireMode::Automatic:
        AutomaticFire();
        break;
    case EFireMode::Semi:
        SemiFire();
        break;
    case EFireMode::Burst:
        BurstFire();
        break;
    default:
        break;
    }
}

void AGun::ChangeFireMode(EFireMode NewFireMode)
{
    CurrentFireMode = NewFireMode;
}

void AGun::AutomaticFire_Implementation()
{
    if (GunMesh)
    {
        FVector StartLocation = GunMesh->GetSocketLocation("MuzzleSocket");
        FVector EndLocation = StartLocation + GunMesh->GetForwardVector() * 10000.0f;

        FHitResult HitResult;
        FCollisionQueryParams Params;
        Params.AddIgnoredActor(this);

        GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility, Params);

        // Implement automatic firing logic here, e.g., spawn bullet, apply damage to hit target, etc.
    }
}

void AGun::SemiFire_Implementation()
{
    if (GunMesh)
    {
        FVector StartLocation = GunMesh->GetSocketLocation("MuzzleSocket");
        FVector EndLocation = StartLocation + GunMesh->GetForwardVector() * 10000.0f;

        FHitResult HitResult;
        FCollisionQueryParams Params;
        Params.AddIgnoredActor(this);

        GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility, Params);

        // Implement semi firing logic here
    }
}

void AGun::BurstFire_Implementation()
{
    if (GunMesh)
    {
        FVector StartLocation = GunMesh->GetSocketLocation("MuzzleSocket");
        FVector EndLocation = StartLocation + GunMesh->GetForwardVector() * 10000.0f;

        FHitResult HitResult;
        FCollisionQueryParams Params;
        Params.AddIgnoredActor(this);

        GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility, Params);

        // Implement burst firing logic here
    }
}
