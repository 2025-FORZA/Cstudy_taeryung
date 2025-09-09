#include <stdio.h>

int main() {
	char array[101];

	int i;

	scanf("%s", array);


	for (i = 0; (array[i] != '\0'); i++);

	printf("%d", i);
	return 0;
}