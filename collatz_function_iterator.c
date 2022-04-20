//program that iterates a number in the collatz function until it reaches 1
#include <stdio.h>

int i = 0; //declaration of a global variable to count the iterations

//collatz function iterator
int col(int x) {
	if (x != 1) {
		if (x % 2 == 0) {
			i++; //sum 1 when an iteration occurs
			printf("iteration %i: %i\n", i - 1, x);
			return col(x / 2);
		}
		if (x % 2 == 1) {
			i++; //sum 1 when an iteration occurs
			printf("iteration %i: %i\n", i - 1, x);
			return col(3 * x + 1);
		}
	}
	printf("iteration %i: ", i); //stop when it reaches 1
}

//argument to collatz function iterator
void main(void) {
  int n; //argument declaration
	printf("enter argument to collatz function iterator: ");
	scanf("%i", &n);
	col(n); //call the function
	printf("1\nnumber of iterations: %i", i); //shows 1 in the display as the last iteration
}