#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int A, B, C, T;

	scanf("%d %d %d", &A, &B, &C);
	scanf("%d", &T);

	int total_fee = 0;

	if (T <= 30) {
		total_fee = A;
	}
	else if (T > 30) {
		int add_time = T - 30;
		int num = add_time / B;
		int add_fee;

		if (add_time % B == 0) {
			add_fee = num * C;
			
		}
		else {
			add_fee = (num + 1) * C;
		}

		total_fee = A + add_fee;
	}

	printf("%d", total_fee);
	return 0;	
}