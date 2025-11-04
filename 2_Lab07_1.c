#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int idx1, int idx2);
int arr[100] = { 0 };

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	int i;
	int a, b;
	

	for (int i = 0; i < N; i++) {
		arr[i] = i+1;
	}
	
	for (i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		swap(a, b);
	}

	for (i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
}

void swap(int idx1, int idx2) {
	int tmp;
	tmp = arr[idx1 - 1];
	arr[idx1 - 1] = arr[idx2 - 1];
	arr[idx2 - 1] = tmp;
}