#include <stdio.h>

int main() {
	int N;
	int x, y;
	int sum = 0;

	scanf("%d", &N);

	int i;
	for (i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);

		if (x == 136) sum += 1000;
		else if (x == 142) sum += 5000;
		else if (x == 148) sum += 10000;
		else if (x == 154) sum += 50000;
	}

	printf("%d", sum);
	return 0;
}