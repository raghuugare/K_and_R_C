#include <stdio.h>

#include "longest_line.h"

int get_line();
void copy();

int main() {

	extern int max;
	extern char longest_line[];
	extern char line[];

	int len;
	len = 0;

	printf("Enter lines to find the longest line...! \n");
	while((len = get_line()) > 0) {
		if(len > max) {
			max = len;
			copy();
		}
	} /* end while...*/

	printf("The longest line I saw(discarding newlines) has %d chars, and it is as below: \n|%s|\n", max, longest_line);

	return 0;
}

int get_line() {

	extern char line[];
	int i, c;

	for(i=0; i<MAX_LINE_SIZE-1 && (c = getchar())!= EOF && c!= '\n'; i++) {
		line[i] = c;
	}
	
	line[i] = '\0';
	
	return i;
}

void copy() {
	extern char line[];
	extern char longest_line[];
	int i;

	i=0;

	while((longest_line[i] = line[i])!= '\0') {
		i++;
	}
}