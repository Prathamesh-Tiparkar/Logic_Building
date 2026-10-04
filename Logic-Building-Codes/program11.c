/* 
    START
        Accept Number as No
        if No is completely Divisible by 2 
            then print Even
        otheriwse
            print Odd
    STOP

    START
        Accept Number as NO
        Divide by 2
        If remainder is 0
            then print as Evem
        Otherwise
            print as Odd
    STOP

*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is Odd");
    }
    
    return 0;}