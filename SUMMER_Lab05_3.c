#include <stdio.h>

int number;

int main() {
	while (1) {
		scanf("%d", &number);

		if (number == 0) {
			break;
		}

		printf("%d", number);

		while (number >= 10) {
			int initial_num = 1;
			int temp = number;

			while (temp > 0) {
				initial_num *= (temp % 10);
				temp /= 10;
			}

			number = initial_num;
			printf(" %d", number);
		}

		printf("\n");
		
	}

	return 0;
}