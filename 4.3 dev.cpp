#include <stdio.h>
#include <string.h>
#define PRAISE  "You are an exteaordinary being."
int main()
{
	char name[40];
	printf("what's your name?");
	scanf("%s", name);
	printf("hello,%s.%s\n", name, PRAISE);
	printf("Your name of %zd letters occupaies %zd memory cells.\n",strlen(name),sizeof name);
	printf("The phrase of praise has %zd letters", strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);
	getchar();
	getchar();
	return 0;
}
