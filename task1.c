#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int n;
	do
    {
        n = get_int("Введіть число елементів масиву: ");
    }
    while ((n > 100) || (n < 1));
	int a[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = get_int("Введіть елементи %i: ", (i+1));
		if ((a[i] <= -100) || (a[i] > 100))
		{
			printf("Число повинно бути від 1 до 100\n");
			i--;
		}
	}
	for (int i = n-1; i >= 0; i--)
	{
		printf("%i ", a[i]);
	}
	printf("\n");
}