#include <stdio.h>

int main() {
	int fib[21] = { 0, 1 };
	int number;

	scanf("%d", &number);

	for (int i = 1; i < number;i++) {
		fib[i + 1] = fib[i] + fib[i - 1];
	}

	printf("%d", fib[number]);
}