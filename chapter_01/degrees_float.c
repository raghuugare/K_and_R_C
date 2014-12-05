#include <stdio.h>

#define LOWER -40  /* Lower-limit */
#define UPPER 300  /* Upper-limit */
#define STEP 20    /* Increment  */

/*
  Iterative function to find factorial of 'n'(an integer)
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

int main()
{
  float fahr;

  printf("%10s%9s\n", " Fahrenheit", "Celsius");

  for(fahr = LOWER; fahr<=UPPER; fahr = fahr+STEP)
  {  
    printf(" \t%3.0f   %6.2f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  int value_of_EOF = EOF;
  printf("Value of EOF(int,char) = (%d,%c)\n", EOF, EOF);

  int n;
  printf("\nEnter an integer to find factorial : ");
  scanf("%d",&n);

  printf("%d! = %d\n", n, factorial(n));

  return 0;
}

