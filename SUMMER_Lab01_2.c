#include <stdio.h>

int number;

int main() {
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		for (int j = i; j < number - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = number-1; i > 0; i--) {
		for (int j = number - i; j > 0; j--) {
			printf(" ");
		}
		for (int k = 2*i-1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
}