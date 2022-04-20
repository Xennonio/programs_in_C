//program that tests the palindromicity of numbers
#include <stdio.h>
#include <math.h> //library to use math functions

int v[50] = {0}; //vector to store the values ​​of the digits of a number in reverse order
int i = 0; //global variable to use in vector v[]

//palindrome tester function
int pal(int x){
	int r;
	int j;
	int l = log10(x); /*local variable converted float->int (equivalent to using floor() function) to count
	the number of digits of x minus 1 to use in decimal base power*/

	/*assigns to each parameter of the array the digits of the argument of the pal(x) function in in reverse
	order with inverted decimal base to form the number with the opposite digits*/
	do {
		r = (x % 10); //stores the last digit of x
		//pow() is a math.h library function that assigns p(x,y) to x^y
		v[i] = r * pow(10, l - i); //stores the digits of x with their inverted decimal base
		i++; //adds 1 to the value of i for each digit taken
		x /= 10; //change of state of variable x to its respective value without the last digit
	} while (x != 0);
	for (j = 0; j <= i; j++) {
		v[j + 1] = v[j + 1] + v[j]; //sum of parameters of vector v[] to form number with inverted digits
	}
}

//numbers to test
int main() {
  int k; //local variable declaration for choice of argument
  int l; //local variable to use in for loop
  printf("choose a number to test if it is a palindrome (to stop the program choose -1): ");
  scanf("%i", &k); //choice of argument
  pal(k); //call the function to create the number with the inverse digits of the argument
  //function to let the program run until you type -1
  if (k != -1) {
    //test to see if it is a palindrome
    if (v[i + 1] == k){
      printf("its inverse is: %i\n", v[i + 1]);
      printf("it's a palindrome\n");
      //return to the initial state of vector v[] for {0}, since function pal(x) is impure
      for (l = 0; l <= 50; l++) v[l] = 0;
      i = 0; //change state of global variable i to reset cycle count when calling function again
      main(); //call main() function again to do successive tests
    }
    else {
      //test to see if it is not a palindrome
      printf("its inverse is: %i\n", v[i + 1]);
      printf("it's not a palindrome\n");
      //return to the initial state of vector v[] for {0}, since function pal(x) is impure
      for (l = 0; l <= 50; l++) v[l] = 0;
      i = 0; //change state of global variable i to reset cycle count when calling function again
      main(); //call main() function again to do successive tests
    }
  }
}

/* NOTE: when calling the function pal(x) once the value in the vector v[] declared globally is changed
for each parameter assigned, so it is not possible to use the value returned by the function against the
previously used parameter*/

/*the variable i must be global as it is used as the function return, however as the cyc() function is
not pure, at each call it returns a different value for the same parameter consequence of the change of
states allowed in languages ​​with the structured programming paradigm*/