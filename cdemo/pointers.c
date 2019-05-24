#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  
  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  int* ptrtoe;
  int* ptrtod;

  float d = 12.3;
  float e = 13.5;
  ptrtod = &d;
  printf("The value of d is %f, it is stored at %d\n", d, ptrtod);
  ptrtoe = &e;
  printf("The value of e is %f, it is stored at %d\n", e, ptrtoe);
}
