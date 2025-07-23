#include <stdio.h>
#include <string.h>

char word[101];
int len, sum;

int main(void) {
	scanf("%s", word);

	len = strlen(word);
	sum = strlen(word);

	for (int i = 1; i < len; i++) {
		if (word[i] == 'j' && (word[i - 1] == 'l' || word[i - 1] == 'n')) {
			sum--;
		}
		else if (word[i] == '=' && (word[i - 1] == 'c' || word[i - 1] == 's' || word[i - 1] == 'z')) {
			sum--;
			if (i > 1 && word[i - 1] == 'z' && word[i - 2] == 'd') {
				sum--;
			}
		}
		else if (word[i] == '-' && (word[i - 1] == 'c' || word[i - 1] == 'd')) {
			sum--;
		}
	}

	printf("%d", sum);

	return 0;
}