#include <stdio.h>

int number;

int main() {
	scanf("%d", &number);

	if (number >= 90 && number <= 100) {
		printf("%c", 'A');
	}
	else if (number >= 80 && number <= 89) {
		printf("%c", 'B');
	}
	else if (number >= 70 && number <= 79) {
		printf("%c", 'C');
	}
	else if (number >= 60 && number <= 69) {
		printf("%c", 'D');
	}
	else {
		printf("%c", 'F');
	}
}