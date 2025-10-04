#include <stdio.h>

int main() {
	int T, C;
	int Q = 0, D = 0, N = 0, P = 0;
	

	scanf("%d", &T);

	int i;
	for (i = 0;i < T;i++) {
		scanf("%d", &C);

		Q = C / 25;
		C %= 25;
		D = C / 10;
		C %= 10;
		N = C / 5;
		C %= 5;
		P = C;

		printf("%d %d %d %d\n", Q, D, N, P);
	}
	
	return 0;
}