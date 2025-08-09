#include <stdio.h>

int main() {
	int num1;
	int num2[4];

	scanf("%d", &num1);
	
	for (int i = 0; i < 3; i++) {
		scanf("%1d", &num2[i]);
	}

	int x = num1 * num2[2];
	int y = num1 * num2[1];
	int z = num1 * num2[0];

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);

	int new_num2 = 100 * num2[0] + 10 * num2[1] + num2[2];
	printf("%d\n", num1 * new_num2);

	return 0;	
}