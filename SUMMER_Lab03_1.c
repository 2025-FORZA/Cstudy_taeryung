#include <stdio.h>

int number[1001] = { 0, 1, 3 };

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 3; i <= n; i++)
		number[i] = (number[i - 1] + number[i - 2] * 2) % 10007;
	printf("%d", number[n]);
	return 0;
}