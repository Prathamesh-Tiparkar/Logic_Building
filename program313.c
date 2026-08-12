#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x00010000;        // 17th bit     in HExdecimal
    UINT iAns = 0;

    printf("Enter First Number: \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th bit is ON \n");
    }
    else
    {
        printf("17th bit is Off \n");
    }

    return 0;
}