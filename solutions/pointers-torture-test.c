#include <stdio.h>

void
add_two (int *p_i)
{
  *p_i = p_i + 2;
}

void
assign_pointer (int **p, int *q)
{
  *p = q;
}

int
main (void)
{
  int j = 2;
  int k = 5;
  add_two (j);
  printf ("j = %d\n", j);
  int *pj = &j;
  int *pk = &k;
  printf ("pj = %p\n", pj);
  printf ("pk = %p\n", pk);

  add_two (pk);
  printf ("k = %d\n", k);
  printf ("pj = %p\n", pj);
  printf ("pk = %p\n", pk);
  assign_pointer (&pk, pj);
  printf ("pj = %p\n", pj);
  printf ("pk = %p\n", pk);
  printf ("*pj = %d\n", *pj);
  printf ("*pk = %d\n", *pk);
  return 0;
}
