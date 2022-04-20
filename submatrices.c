#include <stdio.h>

int n, m, x, y, i, j, u = 0;

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
    printf("\nDigite o numero da linha e coluna a ser removida da matriz A separados por espaco: ");
    scanf("%i %i", &x, &y);
    printf("A submatriz S[%i][%i](A) e:\n", x, y);
    int k = 0, l = m * n - m - n + 1, g[l], s[n - 1][m - 1];
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(i != x && j != y) {
                g[k] = a[i][j];
                k++;
            }
        }
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < m - 1; j++) {
            s[i][j] = g[u];
            u++;
            if(j == 0) printf("|%i ",s[i][j]);
            if(j == m - 2) printf("%i|\n", s[i][j]);
            if(j != 0 && j != m - 2) printf("%i ", s[i][j]);
        }
    }
}