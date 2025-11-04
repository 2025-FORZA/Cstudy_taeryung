#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	char arr[81];
	

	for (int i = 0; i < T; i++) {
		scanf("%s", arr);

		int right = 1;
		int total = 0;

		for (int j = 0; arr[j] != '\0'; j++) {
			
			if (arr[j] == 'O') {
				total += right;
				right++;
			}
			else if (arr[j] == 'X') {
				right = 1;
			}			
		}
		printf("%d\n", total);
		
	}

	return 0;
}