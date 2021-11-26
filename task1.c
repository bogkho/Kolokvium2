#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int terminate = 0;

    int n = get_int("Amount of numbers: ");

    int a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = get_int("Enter number %i: ", (i+1));
        
        if ((a[i] => 1) || (a[i] <= 100))
        {
            terminate++;
        }
        
}

    if (terminate == 0)
    {
        printf("Numbers must be from 1 to 100");
    }

    else
    {
        for (int i = n-1; i >= 0; i--)
        {
            printf("%i ", a[i]);
        }
        
    }



}
