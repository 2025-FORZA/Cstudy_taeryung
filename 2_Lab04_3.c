#include <stdio.h>

int make_Refu(int);

int main() {
	int a, b, X, Y, sum;
	scanf("%d %d", &a, &b);
	X = make_Refu(a);
	Y = make_Refu(b);
	sum = X + Y;
	printf("%d", sum);
	return 0;
}

int make_Refu(int x) {
	int i;
	int y = 0;
	for (i = 0; i < x; i++) {
		y  = 10 * y + 1;
	}
	return y;
}