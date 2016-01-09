#include<stdio.h>
int main(void) {
	float f = 0.0f;
	printf("Please input how much quarts the water is:");
	scanf("%f",&f);
	printf("%e\n",f*950/3.0e-23);

	return 0;
}
