#include<stdio.h>
int main(void) {
	float f = 0.0f;
	
	printf("Please enter a number:");
	scanf("%f",&f);
	printf("The input is %3.1f or %2.1e\n",f,f);
	printf("The input is %+5.3f or %4.3E\n",f,f);

	return 0;
}
