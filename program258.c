#include<stdio.h>

void CountUpdate( char *str)
{
    int iCount = 0;

    while(*str != '\0')     
    {      
        if(*str == 'l')     
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    CountUpdate(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}