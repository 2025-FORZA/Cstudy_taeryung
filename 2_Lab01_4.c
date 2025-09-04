#include <stdio.h>

int main() {
	int name_len;
	char name[101];
	int sum = 0;

	scanf("%d", &name_len);
	scanf("%s", name);

	for (int i = 0;i < name_len;i++) {
		sum += name[i] - 'A' + 1;
	}

	printf("%d", sum);
}