#include <stdio.h>
#include <stdlib.h>
int main()
{
    jolly();
    deny();
    getchar();
    getchar();
    return 0;
}
void jolly(void)
{
    int a;
    for(a=1;a<=3;a++)
        printf("for he's a jolly good fellow!\n");
}
void deny(void)
{
    printf("which nobody can deny");
}

