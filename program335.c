#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)       // filter
    {
        printf("Invalid Bit position \n");
        return iNo;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter number : \n"); 
    scanf("%d",&iValue);

    printf("Enter the bit Position: \n");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue, iLocation);

    printf("Updated bit is : %d \n",iRet);

    return 0;
}
