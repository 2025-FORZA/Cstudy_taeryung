#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int arr[1000001] = { 0 };

int main() {
	int N;
	scanf("%d", &N);	

	int i;
	for (i = 0;i < N;i++) {
		scanf("%d", &arr[i]);
	}

	int min = arr[0];
	int max = arr[0];

	for (i = 1;i < N;i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("%d %d\n", min, max);
	return 0;
}