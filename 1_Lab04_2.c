#include <stdio.h>

int add(int x, int y)
{
	return(x + y);
}

int main()
{
	int t, num1, num2;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &num1, &num2);
		printf("%d\n", add(num1, num2));
		
	}
	
	return 0;
	
}