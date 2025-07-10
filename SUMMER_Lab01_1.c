#include <stdio.h>

int number;
int self_num[1000000];


int main() {
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		scanf("%d", &self_num[i]);
	}

	int max = self_num[0];
	int min = self_num[0];

	for (int i = 0; i < number; i++) {
		if (self_num[i] > max) {
			max = self_num[i];
		}
		if (self_num[i] < min) {
			min = self_num[i];
		}
	}

	printf("%d %d", min, max);

}