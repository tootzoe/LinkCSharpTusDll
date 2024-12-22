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



#include "LinkCSharpTusDll/MyBubbleSort.h"


void UMyBubbleSort::BubbleSortFloatArr(const TArray<float> SrcArr, TArray<float> & ResultArr, TArray<int32> & ResultIdxArr)
{
    if(SrcArr.IsEmpty()) return;
    //
    int srcLen = SrcArr.Num()  ;
      ResultArr.Init(0.0, srcLen );
      ResultIdxArr.Init(0, srcLen );
      float* valPtr = ResultArr.GetData();
      int32* idxPtr = ResultIdxArr.GetData();
      //
    for (int i = 0 ; i < srcLen; ++i) {
        *(valPtr + i) = SrcArr[i] ;
        *(idxPtr + i) = i;
    }

    if (srcLen < 2) {
        return;
    }

    for (int i = 0 ; i < srcLen   ;  i++) {
        for (int j = 0 ; j < srcLen - 1 ;  j++) {
            if( *(valPtr + j + 1) > *(valPtr + j  )){
                 float tmpV =  *(valPtr + j  );
                 *(valPtr + j  ) = *(valPtr + j + 1);
                 *(valPtr + j + 1) = tmpV;
                 int32 tmpV2 = *(idxPtr + j  );
                 *(idxPtr + j  ) = *(idxPtr + j + 1);
                 *(idxPtr + j + 1) = tmpV2;
            }
        }
    }
}


