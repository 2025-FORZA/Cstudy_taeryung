#include <stdio.h>

int main() {
	int A, I, melody;

	scanf("%d %d", &A, &I);

	melody = A * (I - 1) + 1;

	printf("%d", melody);

	return 0;
}