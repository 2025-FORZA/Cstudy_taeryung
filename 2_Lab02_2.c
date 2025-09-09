#include <stdio.h>

int main() {
	int n;
	int count = 0;

	while (scanf("%d", &n) != EOF) {
		if (n > 0) {
			count++;
		}
	}

	printf("%d", count);

	return 0;
}