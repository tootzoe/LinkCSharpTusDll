/**************************************************************************
**   Copyright @ 2024 TOOTzoe.com
**   Special keywords: thor 12/22/2024 2024
**   Environment variables:
**
**
**
**   E-mail : toot@tootzeo.com
**   Tel    : 13802205042
**   Website: http://www.tootzoe.com
**
**************************************************************************/



#ifdef Q_CC_MSVC
#pragma execution_character_set("UTF-8")
#endif


//------------------------------------------------------------------------


#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyBubbleSort.generated.h"

UCLASS(Blueprintable)
class LINKCSHARPTUSDLL_API UMyBubbleSort  : public UObject
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "TOOT")
    void BubbleSortFloatArr(const TArray<float> SrcArr, TArray<float>& ResultArr , TArray<int32>& ResultIdxArr);
};

