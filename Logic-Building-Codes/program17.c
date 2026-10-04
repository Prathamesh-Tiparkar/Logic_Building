#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

    return iNo;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number to Check whether it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {
        printf("%d is Even \n",iValue);
    }
    else
    {
        printf("%d is Odd \n",iValue);
    }

    return 0;
}