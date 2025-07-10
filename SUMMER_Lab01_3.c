#include <stdio.h>

int num1;
int num2;
int switch1;
int switch2;
int numbers[100];
int temp;

int main() {
	scanf("%d %d", &num1, &num2);

	for (int i = 0; i < num1; i++) {
		numbers[i] = i + 1;
	}

	for (int i = 0; i < num2; i++) {
		scanf("%d %d", &switch1, &switch2);

		int start = switch1 - 1;
		int end = switch2 - 1;

		while (start < end) {
			temp = numbers[start];
			numbers[start] = numbers[end];
			numbers[end] = temp;
			start += 1;
			end -= 1;
		}
	}

	for (int i = 0; i < num1; i++) {
		printf("%d ", numbers[i]);
	}

}