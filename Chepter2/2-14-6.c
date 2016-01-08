#include<stdio.h>
int main(void) {
	int i,j;
	int count = 3;
	char *output = "Smile!";

	for(i = count;i > 0;i--) {
		for(j = i;j > 0;j--) {
			printf("%s",output);
		}
		printf("\n");
	}
	
	return 0;
}
