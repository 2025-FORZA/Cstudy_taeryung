#include <stdio.h>

int test;
int floor;
int room;
int customer;
int x, y;
int result[100];


int main() {
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++) {

		scanf("%d %d %d", &floor, &room, &customer);

		x = customer % floor;

		if (x == 0) {
			x = floor;
			y = customer / floor;
		}
		else {
			y = (customer / floor) + 1;
		}

		result[i] = x * 100 + y;
	}

	for (int i = 0; i < test; i++) {
		printf("%d\n", result[i]);
	}
	
	return 0;
}