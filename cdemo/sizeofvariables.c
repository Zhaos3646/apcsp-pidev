#include<stdio.h>

int main()
{
  int a = 109;

  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

  char b = 's';

  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));

  float c = 12.345;

  printf("float c value: %f and size: %d bytes\n", c, sizeof(c));

  double d = 123.456;

  printf("double d value: %lf and size %d bytes\n", d, sizeof(d));

  short int e = 10;

  printf("short int a value: %d and size: %d bytes\n", e, sizeof(e));

  long int f = 1000;

  printf("long int a value: %d and size: %d bytes\n", f, sizeof(f));
}

