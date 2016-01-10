#include<stdio.h>
#include<string.h>
int main(void) {
	char fname[40];
	char lname[40];

	printf("Please enter your name:");
	scanf("%s %s",fname,lname);
	printf("%s %s\n",fname,lname);
	printf("%*d %*d\n",strlen(fname),strlen(fname),strlen(lname),strlen(lname));
	printf("%s %s\n",fname,lname);
	printf("%-*d %-*d\n",strlen(fname),strlen(fname),strlen(lname),strlen(lname));

	return 0;
}
