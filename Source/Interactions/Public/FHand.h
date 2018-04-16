
#pragma once

#include "CoreMinimal.h"
#include "FHand.generated.h"

/**
* Describes the thing doing the gripping.
*/
USTRUCT(BlueprintType)
struct INTERACTIONS_API FHandInformation
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Information")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Information")
	FTransform Transform;
};