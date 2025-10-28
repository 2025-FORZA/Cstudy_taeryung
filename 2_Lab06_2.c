#include <stdio.h>

int main() {
	int question;
	int problem;
	int total = 0;
	int relay_right = 1;

	scanf("%d", &question);

	int i;
	for (i = 0;i < question;i++) {
		scanf("%d ", &problem);
		if (problem == 1) {
			total += relay_right;
			relay_right ++;			
		}
		else if (problem == 0){
			relay_right = 1;
		}
	}

	printf("%d", total);
	return 0;	
}
