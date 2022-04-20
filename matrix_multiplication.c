//program that multiplies two matrices
#include <stdio.h>

int n, m; //size of matrice a[n][m]

int A() {
    printf("Enter the number of rows and columns of matrix A separated by space: ");
    scanf("%i %i", &n, &m);
}

int x, y; //size of matrice b[x][y]

int B() {
    printf("\nDigite o numero de linhas e colunas da matriz B separados por espaco: ");
    scanf("%i %i", &x, &y);
    if(m != x) {
        printf("O numero de colunas de A e diferente do numero de ilnhas de B, portanto a multiplicacao e impossivel");
        B();
    }
}

int main() {
    int i, j; //local variables for the for loop
    //declaration of functions
    int A();
    int B();
    A(); //call A() function to choose matrix a[n][m]
    int a[n][m]; //declaration of a[n][m]
    //for loop to scan the input values ​​of the array a[n][m]
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
        printf("A[%i][%i]: ", i, j);
        scanf("%i", &a[i][j]);
        }
    }
    //show on the display the matrix a[n][m]
    /* NOTE: is off-center for values ​​with different digits */
    printf("\nmatriz A: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(j == 0) printf("|%i ",a[i][j]);
            if(j == m - 1) printf("%i|\n", a[i][j]);
            if(j != 0 && j != m - 1) printf("%i ", a[i][j]);
        }
    }
    B(); //call B() function to choose matrix b[n][m]
    int b[x][y]; //declaration of b[x][y]
    //for loop to scan the input values ​​of the array b[x][y]
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("B[%i][%i]: ", i, j);
            scanf("%i", &b[i][j]);
        }
    }
    //show on the display the matrix b[x][y]
    /* NOTE: is off-center for values ​​with different digits */
    printf("\nmatriz B: \n");
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            if(j == 0) printf("|%i ",b[i][j]);
            if(j == y - 1) printf("%i|\n", b[i][j]);
            if(j != 0 && j != y - 1) printf("%i ", b[i][j]);
        }
    }
}

/*NOTE: for values ​​with more than one digit in the matrix there is a decentralization of its formatting*/