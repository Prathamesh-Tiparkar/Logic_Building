#include<stdio.h>

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter First Number: \n");
    scanf("%d",&No1);

    printf("Enter Second Number: \n");
    scanf("%d",&No2);

    Ans = No1 & No2;        // bitwise AND &
    printf("AND : %d\n",Ans);

    Ans = No1 | No2;        // bitwise OR |
    printf("OR : %d\n",Ans);

    Ans = No1 ^ No2;        // bitwise XOR ^ 
    printf("XOR : %d\n",Ans);

    return 0;
}