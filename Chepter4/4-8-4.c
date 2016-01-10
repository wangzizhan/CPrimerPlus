#include<stdio.h>
int main(void) {
	float height = 0.0f;
	char name[40];

	printf("Please enter your height:");
	scanf("%f",&height);
	printf("Please enter your name:");
	scanf("%s",name);
	printf("%s,you are %4.3f feet tall\n",name,height);
	
	return 0;
} 
