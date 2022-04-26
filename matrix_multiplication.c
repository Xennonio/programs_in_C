#include <stdio.h>

int n, m, x, y;

int A(){
  printf("Enter the number of rows and columns of matrix A separated by space: ");
  scanf("%i %i", &n, &m);
}

int B(){
  printf("\nDigite o numero de linhas e colunas da matriz B separados por espaco: ");
  scanf("%i %i", &x, &y);
  if(m!=x){
    printf("O numero de colunas de A e diferente do numero de ilnhas de B, portanto a multiplicacao e impossivel");
    B();
  }
}

int main(){
  int A(), B();
  A();
  int a[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("A[%i][%i]: ", i, j);
      scanf("%i", &a[i][j]);
    }
  }
  printf("\nmatriz A: \n");
  for(int i=0; i<n; i++){
    printf("\n");
    for(int j=0; j<m; j++) printf("%d\t", a[i][j]);
  }
  B();
  int b[x][y];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("B[%i][%i]: ", i, j);
      scanf("%i", &b[i][j]);
    }
  }
  printf("\nmatriz B: \n");
  printf("\nmatriz A: \n");
  for(int i=0; i<x; i++){
    printf("\n");
    for(int j=0; j<y; j++) printf("%d\t", b[i][j]);
  }
}
