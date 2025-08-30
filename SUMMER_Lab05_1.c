#include <stdio.h>

int number;
int factorial_num = 1;

int main() {
	scanf("%d", &number);

	if (number > 0) {
		for (int i = number; i > 0; i--) {
			factorial_num *= i;
		}
	}
	else {
		factorial_num = 1;
	}

	printf("%d", factorial_num);
	
}