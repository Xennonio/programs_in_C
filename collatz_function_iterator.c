#include <stdio.h>

int i=0;

int col(int x){
	if (x!=1){
		if (x%2==0){
			i++;
			printf("iteration %i: %i\n", i-1, x);
			return col(x/2);
		}
		if (x%2==1){
			i++;
			printf("iteration %i: %i\n", i-1, x);
			return col(3*x+1);
		}
	}
	printf("iteration %i: ", i);
}

int main(){
  int n;
	printf("enter argument to collatz function iterator: ");
	scanf("%i", &n);
	col(n);
	printf("1\nnumber of iterations: %i", i);
}
