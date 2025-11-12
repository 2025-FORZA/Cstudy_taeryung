#include <stdio.h>

int main() {
	int N, K;
	scanf("%d %d", &N, &K);

	int i ;
	for (i = 1;i < N;i++) {
		K = K / 2;
		// k /= 2;
	}
	printf("%d", K);

	return 0;
}