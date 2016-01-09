#include<stdio.h>
int main(void) {
	const float convert = 2.54;
	float inches = 0.0f;
	
	printf("Enter your height:");
	scanf("%f",&inches);
	printf("Your height is %f cm\n",convert*inches);

	return 0;
}
