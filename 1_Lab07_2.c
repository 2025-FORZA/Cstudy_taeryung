#include <stdio.h>

int main() {
	int total;
	int weight[50];
	int height[50];

	scanf("%d", &total);

	for (int i = 0; i < total; i++) {
		scanf("%d %d", &weight[i], &height[i]);
	}

	for (int i = 0; i < total; i++) {
		int k = 0;
		for (int j = 0; j < total; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) {
				k++;
			}
		}
		printf("%d ", k + 1);
	}
	return 0;
}