#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("starting now:\n");
    one_three();
    two();
    printf("done!");
    getchar();
    return 0;
}
void one_three(void)
{
    printf("one\n");
}
void two(void)
{
    printf("two\nthree\n");
}