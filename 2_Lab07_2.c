#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int i, j;

	for (i = 0;i < N + 2;i++) {
		printf("@");
	}
	printf("\n");

	for (i = 0;i < N;i++) {
		printf("@");
		for (j = 0;j < N;j++) {
			printf(" ");
		}
		printf("@");
		printf("\n");
	}

	for (i = 0;i < N + 2;i++) {
		printf("@");
	}

	return 0;
}