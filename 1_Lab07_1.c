#include <stdio.h>

int main() {
	int count;
	int cow[100][2];
	int countcow[100];
	int check[100];
	int i, j;
	int min = 0;

	scanf("%d", &count);

	for (i = 0; i < count; i++) {
		scanf("%d %d", &cow[i][0], &cow[i][1]);
	}

	for (i = 0; i < count; i++) {
		countcow[i] = 0;
		check[i] = -1;
	}

	for (i = 0; i < count; i++) {
		for (j = i + 1; j < count; j++) {
			if ((cow[i][0] == cow[j][0]) && (cow[i][1] != cow[j][1]) && (cow[j][1] != check[cow[i][0]])) {
					countcow[cow[i][0]]++;
					check[cow[i][0]] = cow[j][1];
					break;
			};
		}
	}

	for (int i = 0; i < count - 1; i++) {
		min += countcow[i];
	}

	printf("%d", min);
}