#include<stdio.h>
int main(void) {
	int age = 0;
	const unsigned long long per_year_seconds = 3.156e7;
	
	printf("Your age is:");
	scanf("%d,",&age);
	printf("You have lived %llu seconds.\n",per_year_seconds*age);

	return 0;
}
