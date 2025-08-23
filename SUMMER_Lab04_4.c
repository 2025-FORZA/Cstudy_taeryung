#include <stdio.h>

int number;
int numbers[1001];
double new_numbers[1001];
int max = 0;
double sum = 0;

int main() {
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		scanf("%d", &numbers[i]);

		if (max < numbers[i]) {
			max = numbers[i];
		}
	}

	for (int i = 0; i < number; i++) {
		new_numbers[i] = ((double) numbers[i] / max ) * 100;
		sum += new_numbers[i];
	}

	double average = sum / number;

	printf("%f", average);

	return 0;
}