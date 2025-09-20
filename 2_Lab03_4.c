#include <stdio.h>

int main() {
	char str[256];
	int len;	

	while (1) {
		int count = 0;
		gets(str);
		
		if (str[0] == '#') break;

		int i;
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
				count += 1;
			}
			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
				count += 1;
			}
		}

		printf("%d\n", count);
	}

	return 0;	
}