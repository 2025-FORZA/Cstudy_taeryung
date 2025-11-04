#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	int bread = A / 2;

	int hamburger = (bread < B) ? bread : B;

	printf("%d", hamburger);
	return 0;
}