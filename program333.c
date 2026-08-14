#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iPos = 0;
    UINT iMask = 0x1;

    printf("Enter number : \n"); 
    scanf("%d",&iNo);

    printf("Enter the bit Position: \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);

    iNo = iNo ^ iMask;
    printf("updated number : %d\n",iNo);

    return 0;
}
