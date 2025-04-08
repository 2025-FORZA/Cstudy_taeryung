// 1_Lab03_2
//백준 2739번 구구단

#include <stdio.h>
int main() {
	int i, j;

	scanf("%d", &i);

	
	for (j = 1; j <= 9; j++) {
		printf("%d * %d = %d", i, j, i * j);
		printf("\n");
	}
	return 0;
}