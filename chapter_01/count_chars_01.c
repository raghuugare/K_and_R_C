/*
Char counter. Version 01.
 */
#include <stdio.h>

int main() {
  
  long num_chars = 0;

  while(getchar() != EOF)
    ++num_chars;

  printf("Number of characters entered = %ld \n", num_chars);
  
  return 0;
}
