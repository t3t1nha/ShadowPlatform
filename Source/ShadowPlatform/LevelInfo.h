#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FLevelDataRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Data")
	FName LevelName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Data")
	FString DisplayName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Data")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Data")
	TSoftObjectPtr<UWorld> LevelReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Data")
	bool bIsUnlocked;
};