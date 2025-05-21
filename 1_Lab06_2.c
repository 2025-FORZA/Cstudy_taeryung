#include <stdio.h>
#include <string.h>
int main()
{
	char word[100];
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	scanf("%s", &word);

	int pos,len;
	len = strlen(word);
	
	for (int i = 0; i < strlen(alphabet); i++) { // 알파벳 만큼

		pos = -1;

		for (int j = 0; j < len; j++) { // 입력문자열 만큼			
			
			if (word[j] == '\0') {
				break;
			}

			if (alphabet[i] == word[j]) {
				pos = j;
				break;
			}
		}

		if (pos > -1) {
			printf("%d", pos);
			printf(" ");
		}
		else {
			printf("%d", -1);
			printf(" ");
		}
	}

	return 0;
}