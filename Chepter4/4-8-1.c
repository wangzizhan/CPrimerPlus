#include<stdio.h>
#define MAXLENGTH 40
int main(void) {
	char fname[MAXLENGTH];
	char lname[MAXLENGTH];//why not pointer?

	printf("Please enter your first name:");
	scanf("%s",fname);
	printf("Please enter your last name:");
	scanf("%s",lname);
	printf("Your name is %s %s.\n",fname,lname);

	return 0;
}
