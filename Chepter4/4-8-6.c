#include<stdio.h>
#include<float.h>
int main(void) {
	float f = 1.0/3.0;
	double d = 1.0/3.0;

	printf("float f = 1.0/3.0:\n");
	printf("%.4f %.12f %.16f\n",f,f,f);
	printf("double d = 1.0/3.0:\n");
	printf("%.4f %.12f %.16f\n",d,d,d);
	printf("FLT_DIF:%d DBL_DIG:%d\n",FLT_DIG,DBL_DIG);

	return 0;		
}
