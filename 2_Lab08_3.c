#include <stdio.h>

int print_num(int, int);

int main() {
	int A, B;

	while (1) {
		scanf("%d %d", &A, &B);

		if (A == 0 && B == 0) {
			break;
		}

		printf("%d\n", print_num(A, B));
	}

	return 0;
}

int print_num(int a, int b) {
	
	int c = 0;

	if (a <= b) {
		c = 2 * a - b;
	}
	else {
		c = 2 * b - a;
	}

	return c;
}