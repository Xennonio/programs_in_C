#include <stdio.h>
#include <math.h>

int v[50]={0};
int i=0;

int pal(int x){
	int r, l=log10(x);
	do{
		r=(x%10);
		v[i]=r*pow(10, l-i);
		i++;
		x/=10;
	} while(x!=0);
	for(int j=0; j<=i; j++) v[j+1]=v[j+1]+v[j];
}

int main(){
	int k;
  printf("choose a number to test if it is a palindrome (to stop the program choose -1): ");
  scanf("%i", &k);
  pal(k);
  if (k!=-1) {
		if (v[i+1]==k){
			printf("its inverse is: %i\n", v[i+1]);
			printf("it's a palindrome\n");
      for (int j=0; j<=50; j++) v[j]=0;
      i=0;
      main();
		}
		else{
			printf("its inverse is: %i\n", v[i+1]);
      printf("it's not a palindrome\n");
      for(int j=0; j<=50; j++) v[j]=0;
      i=0;
      main();
    }
  }
}
