#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1000;        // 13th bit-> decimal(4096) -> hex(0x1000)
    UINT iAns = 0;

    printf("Enter First Number: \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("13th bit is ON \n");
    }
    else
    {
        printf("13th bit is Off \n");
    }

    return 0;
}