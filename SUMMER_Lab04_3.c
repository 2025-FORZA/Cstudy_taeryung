#include <stdio.h>

int number;
char quiz[81];

int main() {
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		
		int sum = 0;
		int score = 0;
		int idx = 0;

		scanf("%80s", quiz);

		while (quiz[idx] != '\0') {
			if (quiz[idx] == 'O') {
				score += 1;
				sum += score;
			}
			else {
				score = 0;
			}
			idx++;
		}

		printf("%d\n", sum);

	}

	return 0;
}