// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FileManagerBpUtilities.generated.h"

/**
 * 
 */
UCLASS(Blueprintable )
class UFileManagerBpUtilities : public UObject
{
    //GENERATED_BODY()
    GENERATED_UCLASS_BODY()

//public:

    UFUNCTION(BlueprintCallable, Category = "TOOT")
    static bool DirectoryExists(const FString& Directory);
    //
    UFUNCTION(BlueprintCallable, Category = "TOOT")
    static bool MakeDirectory(const FString& Path, bool bCreateTree = false);
    //
    UFUNCTION(BlueprintPure, Category = "TOOT")
    static FString GetUserDirectory();

    // BlueprintInternalUseOnly ,
     UFUNCTION(BlueprintCallable,    Category = "TOOT")
     static bool FindFolders( const FString &StartDirectory, TArray<FString>& FoundFolders);
	
     UFUNCTION(BlueprintCallable, Category = "TOOT")
     static bool FindFiles(const FString& Directory, TArray<FString>& FoundFiles, const FString& FileExtension = TEXT(""));

     UFUNCTION(BlueprintCallable, Category = "TOOT")
     static bool DeleteDirectory(const FString& Directory, bool bMustExist = false, bool bDeleteRecursively = false);
     UFUNCTION(BlueprintCallable, Category = "TOOT")
     static bool DeleteFile(const FString& Filename, bool bMustExist = false, bool bEvenIfReadOnly = false);

//private:

	
};
