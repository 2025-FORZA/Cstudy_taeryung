#include <stdio.h>

int main() {
	int  L, A, B, C, D;
	scanf("%d", &L);
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);

	int day1 = (A + C - 1) / C;
	int day2 = (B + D - 1) / D;

	int total_work;

	if (day1 > day2) { total_work = day1; }
	else { total_work = day2; }

	int play = L - total_work;
	printf("%d", play);

	return 0;
}