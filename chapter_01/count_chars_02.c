/*
Char counter. Version 02.
Uses the double type to deal with even bigger numbers.
 */
#include <stdio.h>

int main() {
  
  double num_chars = 0;

  for(num_chars = 0; getchar() != EOF; num_chars++)
    ;

  printf("Number of characters entered = %.0f \n", num_chars);
  
  return 0;
}
