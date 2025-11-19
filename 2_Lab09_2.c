#include <stdio.h>

int main() {
	int nums[42] = { 0 };

	int i,num;
	int count = 0;

	for (i = 0;i < 10;i++) {
		scanf("%d", &num);
		nums[num % 42]++;
	}

	for (i = 0;i < 42;i++) {
		if (nums[i] > 0) {
			count++;
		}
	}

	printf("%d", count);
}