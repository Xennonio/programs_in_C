#include <stdio.h>

int fac(int x){
  if(x==0) return 1;
  return x*fac(x-1);
}

int main(){
  int n;
  printf("Choose a number: ");
  scanf("%i", &n);
  for(int i=2; i<=n/2; i++){
    if(n%i==0) if(fac(i-1)%i==i-1) printf("%i ", i);
  }
}
