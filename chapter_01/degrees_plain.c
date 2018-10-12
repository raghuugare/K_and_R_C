#include <stdio.h>

int main() {
    int celsius, fahr, step, lower, upper;

    lower = 0;
    upper = 300;
    step = 20;
	
    fahr = lower;
    while(fahr <= upper) {
	   celsius = 5 * (fahr - 32) / 9;
	   printf("%d\t%d\n", fahr, celsius);
	   fahr = fahr + step;
    } // end while

    return 0;
} // end main()
