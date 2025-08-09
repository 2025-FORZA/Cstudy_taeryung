#include <stdio.h>

int main() {
	int total_sugar, count = 0;

	scanf("%d", &total_sugar);

	while (1) {
		if (total_sugar % 5 == 0) {
			count += total_sugar / 5;
			break;
		}

		total_sugar -= 3;
		count += 1;

		if (total_sugar <= 0) {
			break;
		}
	}

	if (total_sugar < 0) {
		printf("-1\n");
	}
	else {
		printf("%d", count);
	}

	return 0;

}