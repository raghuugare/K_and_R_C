#include <stdio.h>

#define MAX_LINE_SIZE 1000

int get_line(char buf[], int max_size);
void copy(char from[], char to[]);

int main() {

  int len, max;
  char line[MAX_LINE_SIZE];
  char longest_line[MAX_LINE_SIZE];

  max = 0;

  while((len = get_line(line, MAX_LINE_SIZE)) > 0) {
    if(len > max) {
      max = len;
      copy(line, longest_line);
    }	
  }

  if(max > 0) {
    printf("The longest line I got has %d chars. And it is given below:\n|%s|\n", max, longest_line);
  } else {
    printf("No lines given...! :(\n");
  }

  return 0;
}

int get_line(char buffer[], int limit) {
  int i, c;

  for(i = 0; i<(limit-1) && (c=getchar())!= EOF && c!= '\n'; i++) {
    buffer[i] = c;
  }
  
  buffer[i] = '\0';
  
  return i;
}

void copy(char from[], char to[]) {
  int i;

  i = 0;
  while((to[i]=from[i]) != '\0') {
    i++;
  }

  printf("Inside copy...from = [%s], and to = [%s]\n", from, to);

}
