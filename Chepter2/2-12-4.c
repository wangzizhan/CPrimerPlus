#include<stdio.h>
int main(void) {
	char *s1 = "For he's a jolly good fellow";
	char *s2 = "Which nobody can deny";
	int i;
	int count = 3;

	for(i = 0;i < count;i++) {
		printf("%s\n",s1);
	}
	printf("%s\n",s2);

	return 0;
}
