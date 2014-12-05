#include <stdio.h>

/*
  Iterative function to find factorial of 'n'(a positive integer)
*/
int factorial(int n)
{
  int result = 1;
  int i;
  for(i=1; i<=n; i++)
    {
      result *= i;
    }
  return result;
}

int main() {

  int n;
  printf("\nEnter an integer to find factorial : ");
  scanf("%d",&n);

  printf("%d! = %d\n", n, factorial(n));
  
  return 0;
}
