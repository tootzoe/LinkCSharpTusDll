// Fill out your copyright notice in the Description page of Project Settings.


#include "FileManagerBpUtilities.h"
#include <filesystem>
#include "HAL/FileManager.h"


namespace fs = std::filesystem;

UFileManagerBpUtilities::UFileManagerBpUtilities(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}


bool UFileManagerBpUtilities::DirectoryExists(const FString &Directory)
{
    return IFileManager::Get().DirectoryExists(*Directory);
}

bool UFileManagerBpUtilities::MakeDirectory(const FString &Path, bool bCreateTree)
{
    return IFileManager::Get().MakeDirectory(*Path, bCreateTree);
}

FString UFileManagerBpUtilities::GetUserDirectory()
{
    return FPlatformProcess::UserDir();
}

bool UFileManagerBpUtilities::FindFolders( const FString &StartDirectory, TArray<FString>& FoundFolders)
{
    for (const auto &it  : fs::directory_iterator(*StartDirectory)) {
        if(it.is_directory()){
            FoundFolders.Add(FString(it.path().c_str()));
        }
    }

    return FoundFolders.Num() > 0;
}

bool UFileManagerBpUtilities::FindFiles(const FString &Directory, TArray<FString> &FoundFiles, const FString &FileExtension)
{
    IFileManager::Get().FindFiles(FoundFiles, *Directory, *FileExtension);

    return FoundFiles.Num() > 0;
}

bool UFileManagerBpUtilities::DeleteDirectory(const FString &Directory, bool bMustExist, bool bDeleteRecursively)
{
        return IFileManager::Get().DeleteDirectory(*Directory, bMustExist, bDeleteRecursively);
}

bool UFileManagerBpUtilities::DeleteFile(const FString &Filename, bool bMustExist, bool bEvenIfReadOnly)
{
    return IFileManager::Get().Delete(*Filename, bMustExist, bEvenIfReadOnly);
}





