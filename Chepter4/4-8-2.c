#include<stdio.h>
#include<string.h>
#define MAXLENGTH 40
int main(void) {
	char name[MAXLENGTH];

	printf("Please enter your name:");
	scanf("%s",name);
	int length = strlen(name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("\"%*s\"\n",length+3,name);

	return 0;
}
