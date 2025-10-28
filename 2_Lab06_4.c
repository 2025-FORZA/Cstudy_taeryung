#include <stdio.h>

int main() {
	int n;
	char num[9];
	int array[8] = { 0 };
	
	
	for (int i = 0; i < 3; i++) {
		scanf("%s", num);

		for (int j = 0; j < 8; j++) {
			array[j] = num[j] - '0';
		}

		int count = 1;
		int max_count = 1;

		for (int j = 0; j < 7; j++) {
			if (array[j] == array[j + 1]) { count++; }
			if (array[j] != array[j + 1]) {
				if (count > max_count) { max_count = count; }
				count = 1;
			}
		}

		if (count > max_count) { max_count = count; }

		printf("%d\n", max_count);
		
	}

	return 0;
}