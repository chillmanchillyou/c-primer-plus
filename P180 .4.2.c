#include <stdio.h>
#include <stdlib.h>
#define PRAISE"You are an exteaordinary veing."
int main()
{
    char name[40];
    printf("what's your name?");
    scanf("%s",name);
    printf("hello,%s.%s\n",name,PRAISE);
    return 0;
}

