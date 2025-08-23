#include <stdio.h>

int numbers[10];
int remains[10];
int new_remains[10];

int main() {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
	}

	for (int i = 0; i < 10; i++) {
		remains[i] = numbers[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		new_remains[i] = -1;
	}

	int count = 0;	

	for (int k = 0; k < 10; k++) {
		int double_check = 0;
		for (int j = 0; j < count; j++) {
			if (remains[k] == new_remains[j]) {
				double_check = 1;
				break;
			}
		}

		if (double_check == 0) {
			new_remains[count] = remains[k];
			count++;
		}
	}

	printf("%d", count);

	return 0;
}