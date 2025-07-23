#include <stdio.h>
#include <stdlib.h>

int number;
int num[1000000];

int compare(const int* a, const int* b) {
	if (*a > *b) {
		return 1;
	}
	else {
		return -1;
	}
}


int main() {
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		scanf("%d", &num[i]);
	}

	qsort(num, number, sizeof(int), compare);

	for (int i = 0; i < number; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}