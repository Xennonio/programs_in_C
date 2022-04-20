//number of cycles of iterations in collatz function
#include <stdio.h>

int i = 0; //declaration of the global variable to count the number of cycles

//number of cycles function
int cyc (int x) {
  if (x != 1) {
    if (x % 2 == 0) {
	    i++; //adds 1 when a cycle occurs
	    return cyc (x / 2);
    }
    if (x % 2 == 1) {
	    i = i + 2; //adds 2 when two cycles occur
	    return cyc ((3 * x + 1) / 2);
    }
  }
  return i;
}

//interval of numbers to see the quantity of cycles
int main () {
  int x, y; //declaration of local variables for boundaries for the interval
  int j; //declaration of a local variable to use in the for loop
  printf("Enter two numbers x and y in sequence representing the limits of the closed interval: ");
  scanf ("%i %i", &x, &y); //choice for the boundaries for the interval
  //show on the display the cycle values ​​for each discrete value within the closed range
  for (j = x; j <= y; j++) {
      printf ("number of cycles of %i is: %i\n", j, cyc (j));
      i = 0; //change state of global variable i to reset cycle count when calling function in printf()
    }
}

/*the variable i must be global as it is used as the function return, however as the cyc() function is
not pure, at each call it returns a different value for the same parameter consequence of the change of
states allowed in languages ​​with the structured programming paradigm*/