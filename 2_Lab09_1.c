#include <stdio.h>

int main() {
	int N, M;
	char schedule[110][110];

	scanf("%d %d", &N, &M);

	int i;
	for (i = 0;i < N;i++) {
		scanf("%s", schedule[i]);
	}

	int j;
	for (j = 0;j < M;j++) {
		int safe = 0;
		for (i = 0;i < N;i++) {
			if (schedule[i][j] == 'O') {
				safe = 1;
				break;
			}			
		}
		if (safe == 0) {
			printf("%d", j + 1);
			return 0;
		}		
	}
	printf("ESCAPE FAILED\n");	
	
	return 0;
}