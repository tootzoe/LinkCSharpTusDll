// Fill out your copyright notice in the Description page of Project Settings.


#include "LinkCSharpTusDll/Public/TusUploadManager.h"

#include "LinkCSharpTusDll/tusclient/pch.h"


#include "LinkCSharpTusDll/tusclient/PEModule.h"

#include "LinkCSharpTusDll/tusclient/LibraryException.h"


using namespace std;
using namespace tootzoe::tusCSharpClient;



UTusUploadManager::UTusUploadManager()
{

}

UTusUploadManager::~UTusUploadManager()
{

}

const FString &UTusUploadManager::FetchDomainName(const bool isAll)
{

    try
    {

        PEModule lib(_T("TusClient.dll"));

      //  UE_LOG(LogTemp, Warning, TEXT(".NET TusClient.dll (netfx; C#) is ready for requests...."));

       // double x2 = lib.call<double>("AmazingSin3", 5, 24.781, (double)11);
        //printf_s("  AmazingSin(5, 24.781, 11) == %e\n", x2);
       //  UE_LOG(LogTemp, Warning, TEXT("AmazingSin(5, 24.781, 11) == %e "), x2);

        const char* tmpStr = lib.call<const char*>("GetDomainName",true);

       // UE_LOG(LogTemp, Warning, TEXT("GetDomainName(true) == %hs"), tmpStr);


         bool IsUploaded = lib.call<bool>("TusUploadFile" , "C:/Users/thor/Pictures/livecodingPrinciple.jpg");
        //printf_s("  AmazingSin(5, 24.781, 11) == %e\n", x2);


        _domainName = FString(tmpStr);



    }
    catch (const LibraryException& ex) {
        UE_LOG(LogTemp, Warning, TEXT("Error: [ %d ] %hs\n "),  ex.getError(), ex.what());
        return  _domainName;
    }
    catch (const std::exception& ex)
    {
       UE_LOG(LogTemp, Warning, TEXT("Error:  %hs\n "),   ex.what());
        return  _domainName;
    }




    return _domainName;
}
