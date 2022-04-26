#include <stdio.h>

int sum(int b, int n, int a[]){
	for(int i=b; i<n; i++) a[i+1]+=a[i];
  printf("%i ", a[n]);
}

int main(){
  int sum(int b, int n, int a[]);
  int k, m, l;
  printf("Enter the length of the sequence to be summed: ");
  scanf("%i", &k);
	int s[k];
	for(int i=0; i<k; i++){
    printf("a[%i] = ", i);
    scanf("%i", &s[i]);
  }
  printf("Choose the initial and final index of the term in the summation separated by space: ");
	scanf("%i %i", &m, &l);
	sum(m, l, s);
}
