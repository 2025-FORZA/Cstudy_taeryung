#include <stdio.h>

int num1, num2;
int k_nums[1000];
int sum = 0;

int main() {
	scanf("%d %d", &num1, &num2);

	for (int i = 0; i < num2; i++) {
		scanf("%d", &k_nums[i]);
	}

	for (int i = 1; i <= num1; i++) {
		for (int j = 0;j < num2;j++) {
			if (i % k_nums[j] == 0) {
				sum += i;
				break;
			}
		}
	}

	printf("%d", sum);
	return 0;
}