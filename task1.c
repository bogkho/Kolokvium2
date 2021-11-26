#include <stdio.h>

int main()
{
  int n;
  int c;
  int d;
  int a[100];
  int b[100];
  
  printf("Кількість елементів у масиві\n");
  scanf("%d", &n);

  while (n < 101 && n>0)
  {

  printf("Введіть елементи масиву\n");
  for (c = 0; c < n ; c++)
  scanf("%d", &a[c]);

  for (c = n - 1, d = 0; c >= 0; c--, d++)
  b[d] = a[c];


  for (c = 0; c < n; c++)
  a[c] = b[c];
  printf("Оберненний масив:\n");

  for (c = 0; c < n; c++)
  printf("%d ", a[c]);

  return 0;
  }

}