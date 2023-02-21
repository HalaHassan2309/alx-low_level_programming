#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{

  int n = 98, i;
  int t1 = 1, t2 = 2;
  int nextTerm = t1 + t2;

  printf("%lu, %lu, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%lu, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
