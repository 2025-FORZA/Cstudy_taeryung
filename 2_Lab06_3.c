#include <stdio.h>

int main() {
	int T;
	int n;
	
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);

		int k = n / 5;
		int j = n % 5;

		for (int p = 0; p < k; p++) {
			printf("++++");
			printf(" ");
		}

		for (int p = 0; p < j; p++) {
			printf("|");
		}

		printf("\n");
		
	}

	return 0;
}


