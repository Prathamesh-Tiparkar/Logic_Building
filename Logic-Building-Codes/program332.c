#include<stdio.h>

typedef unsigned int UINT;

// position :28

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x10;

    printf("Enter number : \n"); 
    scanf("%d",&iNo);

    iMask = 0x8000000;

    iNo = iNo ^ iMask;
    printf("updated number : %d\n",iNo);

    return 0;
}

// 0000 0000 0000 0000 0000 0000 0000 1000 0000 0000 0000 0000 0000 0000
//                                      8     0    0   0    0    0    0