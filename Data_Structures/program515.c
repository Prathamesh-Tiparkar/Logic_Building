// RECURSION
// Iteration code using static storage class

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    
    if(i <= iNo)
    {
        printf("%d\n",i);
        i++;
        Display(iNo);      
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Frequency : \n");
    scanf("%d", &iValue);

    Display(iValue);       

    printf("End of Main");

    return 0;
}