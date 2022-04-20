//program that displays fibonacci sequence numbers in sequence
#include <stdio.h>

//fibonacci function
int fib(int n) {
  if (n == 1) return 1;
  if (n == 2) return 1;
  return fib(n - 1) + fib(n - 2); //recursive relationship of the fibonnaci sequence
}

//quantity of numbers to appear
void main(void){
  int i; //local variable to use in for loop
  int k; //limit of fibonacci sequence numbers
  printf("choose the number of numbers from the fibonacci sequence that should appear on the screen: ");
  scanf("%i", &k); //choose the limit of the sequence
  //show sequence on display
  for (i = 1; i <= k - 1; i++) printf("%i, ", fib(i));
  printf("%i", fib(k));
}