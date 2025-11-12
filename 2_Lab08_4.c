#include <stdio.h>

int main() {
	int N, X, S, C, P;
	int count = 0;


	scanf("%d", &N);
	scanf("%d %d", &X, &S);

	int i;
	for (i = 0;i < N;i++) {
		scanf("%d %d", &C, &P);
		if (X >= C && S < P) {
			count++;
		}
	}

	if (count > 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}