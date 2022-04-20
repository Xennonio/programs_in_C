#include <stdio.h>

int n, m, i, j;

int A() {
    printf("Digite o numero de linhas e colunas da matriz A separados por espaco: ");
    scanf("%i %i", &n, &m);
}

int main() {
    int A();
    A();
    int a[n][m];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
        printf("A[%i][%i]: ", i, j);
        scanf("%i", &a[i][j]);
        }
    }
    printf("\nmatriz A: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(j == 0) printf("|%i ",a[i][j]);
            if(j == m - 1) printf("%i|\n", a[i][j]);
            if(j != 0 && j != m - 1) printf("%i ", a[i][j]);
        }
    }
    int c;
    printf("\nEscolha um escalar para multiplicar a matriz: ");
    scanf("%i", &c);
    int s[n][m];
    printf("\nA matriz A[%i][%i] multiplicada pelo escalar %i e:\n", n, m, c);
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            s[i][j] = c*a[i][j];
            if(j == 0) printf("|%i ",s[i][j]);
            if(j == m - 1) printf("%i|\n", s[i][j]);
            if(j != 0 && j != m - 1) printf("%i ", s[i][j]);
        }
    }
}