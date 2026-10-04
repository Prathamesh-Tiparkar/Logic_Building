/*
    Algorithm

    START
        Accept First number as No1
        Accept Second number as No2
        Perform Addition of No1 and No2
        Display the Result
    STOP
*/

#include<stdio.h>

int main()
{
    // Variable creation with default values 
    float i = 0.0f, j = 0.0f, k = 0.0f;

    printf("Enter First Number: \n");
    scanf("%f",&i);
    
    printf("Enter Second Number: \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addittion is: %f \n",k);

    return 0;
}