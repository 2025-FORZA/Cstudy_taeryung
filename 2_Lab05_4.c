#include <stdio.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	int basket[101] = { 0 };

	int i, j, k;

	int a;
	int b;
	for (a = 0; a < M; a++) {
		scanf("%d %d %d", &i, &j, &k);

		for (b = i - 1 ; b <= j - 1; b++) {
			basket[b] = k;
		}
	}

	int c;
	for (c = 0; c < N; c++) {
		printf("%d ", basket[c]);
	}

	return 0;
}