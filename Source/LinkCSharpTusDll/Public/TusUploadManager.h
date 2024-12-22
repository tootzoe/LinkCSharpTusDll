// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TusUploadManager.generated.h"



/**
 * 
 */


UCLASS(Blueprintable)
class LINKCSHARPTUSDLL_API UTusUploadManager : public UObject
{
	GENERATED_BODY()
	
 public:
   explicit  UTusUploadManager();
   ~UTusUploadManager();


    UFUNCTION(BlueprintCallable, Category = "TOOT")
    const FString& FetchDomainName(const bool isAll);





    private:

    FString _domainName;
	
};
