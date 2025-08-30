#include <stdio.h>
#include <stdlib.h>

int num1;
int num2;
int array[101][101];
int score[101];

int compare(const void* a, const void* b) {
	int x = *(const int*)a, y = *(const int*)b;
	return (y - x);
}

int main() {
	scanf("%d %d", &num1, &num2);

	for (int i = 0;i < num1;i++) {
		for (int k = 0;k < num2;k++) {
			scanf("%d", &array[i][k]);
		}

		qsort(&array[i][0], num2, sizeof(int), compare);
	}

	for (int k = 0;k < num2;k++) {
		int max_score = 0;
		for (int i = 0; i < num1;i++) {
			if (array[i][k] > max_score) {
				max_score = array[i][k];
			}
		}

		for (int i = 0; i < num1;i++) {
			if (max_score == array[i][k]) {
				score[i]++;
			}
		}		
	}

	int maxScore = 0;

	for (int i = 0; i < num1; i++) {
		if (score[i] > maxScore) {
			maxScore = score[i];
		}
	}

	for (int i = 0; i < num1; i++) {
		if (score[i] == maxScore) {
			printf("%d ", i + 1);
		}
	}

	return 0;
}