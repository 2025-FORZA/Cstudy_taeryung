#include <stdio.h>
#include <string.h>

int main() {
	char university[] = "CAMBRIDGE";
	char word[101];

	scanf("%s", word);

	int len = strlen(word);
	

	int i, j;

	for (i=0; i < len; i++) {
		for (j = 0; university[j] != '\0'; j++) {
			if (university[j] == word[i]) {
				break;
			}
		}
		if (university[j] == '\0') {
			printf("%c", word[i]);
		}
		
	}
	return 0;
}