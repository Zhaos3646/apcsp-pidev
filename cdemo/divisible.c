#include <stdio.h>
#include <math.h>

int main()
{
int count = 0;
int num = 1;
for (count = 0; count < 100;)
  {
	if (num % 2 == 0)
	{
	  printf("%d is divisible by 2\n", num);
	  count++;
	}
	num++;
  }
}
