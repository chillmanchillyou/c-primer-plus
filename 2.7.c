#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    for(a=3;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            pr();
        }
        printf("\n");
    }
    getchar();
    return 0;
}
void pr(void)
{
    printf("Smile!");
}
