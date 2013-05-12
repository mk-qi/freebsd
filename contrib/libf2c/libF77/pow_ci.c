#include "f2c.h"

extern void pow_zi (doublecomplex *, doublecomplex *, integer *);
void
pow_ci (complex * p, complex * a, integer * b)	/* p = a**b  */
{
  doublecomplex p1, a1;

  a1.r = a->r;
  a1.i = a->i;

  pow_zi (&p1, &a1, b);

  p->r = p1.r;
  p->i = p1.i;
}