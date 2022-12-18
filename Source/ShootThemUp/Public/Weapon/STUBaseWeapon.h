// Shoot Them Up Game, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STUBaseWeapon.generated.h"

class USkeletalMeshComponent;

UCLASS()
class SHOOTTHEMUP_API ASTUBaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTUBaseWeapon();

    virtual void Fire();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Weapon")
    USkeletalMeshComponent* WeaponMesh;
    
	virtual void BeginPlay() override;

};
