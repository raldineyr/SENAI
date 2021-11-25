#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    char string[10],temp[10];

    scanf("%s",string);

    while(string[i+2] != '\0') 
    {
        temp[i] = string[i + 1];
        i++;
    }

    temp[i]= '\0';

    printf("%s\n",temp);

    return 0;
}
