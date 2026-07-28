#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCount = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)      // % 2 == 1 also works
        {
            iCount ++;
        }
    }

    return iCount;
}

int main()
{
    int *Brr = NULL;    
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter the number of Elements: \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the Elements: \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CountOdd(Brr, iLength);

    printf("Odd elements are: %d \n",iRet);

    free(Brr);
    
    return 0;
}