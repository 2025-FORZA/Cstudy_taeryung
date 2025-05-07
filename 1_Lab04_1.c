#include <stdio.h>

int add(int x, int y)
{
	return(x + y);
}

int main()
{
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d", add(num1, num2));
	return 0;
}