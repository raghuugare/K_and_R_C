/* 
Copy-char version 01
A Program that simply copies each input character & outputs it as-is...until it encounters the EOF character.
 */
#include <stdio.h>

int main() {
  
  int c;

  c = getchar();

  while(c != EOF) {
    putchar(c);
    c = getchar();
  } /* end while */

  return 0;
}
