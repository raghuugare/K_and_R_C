 /*
 Line counter.
 */
 #include <stdio.h>

 int main() {

   int c, num_lines;

   num_lines = 0;

   while((c = getchar()) != EOF) {
     if(c=='\n')
       num_lines++;
   }

   printf("Number of lines entered = %d \n", num_lines);

   return 0;
 }
