#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int N;
	int i;
	int sum = 0, plug = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &plug);
		sum += plug;
	}
	
	sum = sum - (N - 1);
	printf("%d", sum);

	return 0;
}