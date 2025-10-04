#include <stdio.h>

int main() {
	int i;
	for (i = 10; i < 100; i++) {
		int first_num = i / 10;
		int second_num = i % 10;

		if (first_num == 8 || second_num == 8) continue;
		else if ((first_num + second_num) % 6 != 0) continue;
		
		int reverse;
		reverse = 10 * second_num + first_num;
		if (reverse % 4 != 0) continue;

		printf("%d", i);
		return 0;
	}

	return 0;
}