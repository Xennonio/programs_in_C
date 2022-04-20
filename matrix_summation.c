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
    printf("\nSeja B[%i][%i] uma matriz:\n", n, m);
    int b[n][m];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("B[%i][%i]: ", i, j);
            scanf("%i", &b[i][j]);
        }
    }
    printf("\nmatriz B: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(j == 0) printf("|%i ",b[i][j]);
            if(j == m - 1) printf("%i|\n", b[i][j]);
            if(j != 0 && j != m - 1) printf("%i ", b[i][j]);
        }
    }
    printf("\nA matriz C[%i][%i] = A[%i][%i] + B[%i][%i] e:\n", n, m, n, m, n, m);
    int c[m][n];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            if(j == 0) printf("|%i ",c[i][j]);
            if(j == m - 1) printf("%i|\n", c[i][j]);
            if(j != 0 && j != m - 1) printf("%i ", c[i][j]);
        }
    }
}