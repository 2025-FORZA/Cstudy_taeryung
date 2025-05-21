#include <stdio.h>

int sum(int a[100], int n);

int main()
{
	int n;
	int number[100];
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%1d", &number[i]);	

	}
	printf("%d", sum(number, n));
	return 0;	
}

int sum(int a[100], int n)
{
	int total = 0, i;
	for (int i = 0;i < n;i++)
	{
		total = total + a[i];
	}
	return total;
}