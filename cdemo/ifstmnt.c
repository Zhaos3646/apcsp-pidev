#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  int b = 9;
  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  if (a < b)
  {
    printf("a is less than b\n");
  }
  if (a <= b)
  {
    printf("a is less than or equal to b\n");
  }
  if (a == 0 && b == 9)
  {
    printf("a is equal to 0 and b is equal to 9\n");
  }
  if (a == 0 || b == 8)
  {
    printf("a is equal to 0 or b is equal to 9\n");
  }
    
}
