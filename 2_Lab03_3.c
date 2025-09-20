#include <stdio.h>

int main() {
	int N;
	int phone_time[20] = { 0 };
	int Y = 0, M = 0;

	scanf("%d", &N);

	int i;
	for (i = 0; i < N;i++) {
		scanf("%d", &phone_time[i]);

		Y += (phone_time[i] / 30 + 1) * 10;
		M += (phone_time[i] / 60 + 1) * 15;
	}

	if (Y > M) {
		printf("M %d\n", M);
	}
	else if (M > Y) {
		printf("Y %d\n", Y);
	}
	else if (Y == M) {
		printf("Y M %d\n", Y);
	}

	return 0;	
}