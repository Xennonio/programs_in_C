//lychrel function program
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
	for (j = 0; j <= i; j++) v[j + 1] = v[j + 1] + v[j]; /*sum of parameters of vector v[] to form number
	with inverted digits*/
}

//lychrel function
int ly(int x) {
	return x + v[i + 1]; //sum the parameter x with the number with the digits of x inverted
}

//argument to lychrel fuction
int main() {
	int k; //declaration of a local variable for the argument
	printf("enter argument to lychrel function: ");
	scanf("%i", &k); //choice for argument
	pal(k); //call the function to generate in the vector v[] the inverse of the parameter
	printf("%i + %i = %i", k, v[i + 1], ly(k)); //call lychrel function
}

/* NOTE: when calling the function pal(x) once the value in the vector v[] declared globally is changed
for each parameter assigned, so it is not possible to use the value returned by the function against the
previously used parameter*/