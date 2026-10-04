#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iPos = 0;
    UINT iMask = 0xFFFFEFFF;

    printf("Enter number : \n"); 
    scanf("%d",&iNo);

    iNo = iNo & iMask;
    printf("updated number : %d\n",iNo);

    return 0;
}
