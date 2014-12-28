/* 
Copy-char version 02
A Program that simply copies each input character & outputs it as-is...until it encounters the EOF character.
 */
#include <stdio.h>

int main() {
  
  int c;

  while((c = getchar()) != EOF)
    putchar(c);

  return 0;
}
