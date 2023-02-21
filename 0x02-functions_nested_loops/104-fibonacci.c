#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{

  unsigned long n = 98, i;
  unsigned long t1 = 1, t2 = 2;
  unsigned long nextTerm = t1 + t2;

  printf("%lu, %lu, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%lu, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
