#include <stdio.h>
#include <string.h>

int main() {
	char sentence[1000001];
	int word = 0;

	scanf("%[^\n]s", sentence);
	int len = strlen(sentence);

	for (int i = 0; i < len; i++) {
		if (sentence[i] == ' ') {
			if (i != 0 && i != len - 1) {
				word++;
			}
			else if (len == 1) {
				word = -1;
			}
		}
	}

	printf("%d", word + 1);

	return 0;
}