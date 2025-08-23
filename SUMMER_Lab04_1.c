#include <stdio.h>

int main() {
	int numbers[9];

	for (int i = 0; i < 9; i++) {
		scanf("%d", &numbers[i]);
	}

	int max = numbers[0];
	int index = 1;

	for (int k = 1; k < 9; k++) {
		
		if (numbers[k] > max) {
			max = numbers[k];
			index = k + 1;
		}
		
	}

	printf("%d\n", max);
	printf("%d", index);

	return 0;
}