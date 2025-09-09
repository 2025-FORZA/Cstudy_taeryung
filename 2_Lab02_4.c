#include <stdio.h>

int main() {
	int H, M;
	int minute = 0, hour = 0;

	scanf("%d %d", &H, &M);

	if (H > 0) {
		if (M >= 45) {
			minute = M - 45;
			hour = H;
		}
		else {
			minute = M + 15;
			hour = H - 1;
		}
	}
	else {
		if (M >= 45) {
			minute = M - 45;
			hour = H;
		}
		else {
			minute = M + 15;
			hour = H + 23;
		}
	}

	printf("%d %d", hour, minute);

	return 0;
}