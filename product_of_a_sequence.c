//program that calculates the product of a sequence
#include <stdio.h>

int i; //declaration of a local variable to use in the for loop

//function of the sequence of a product
int prod(int b, int n, int a[]) {
    for(i = b; i < n; i++)
    a[i + 1] *= a[i]; //replaces the value of each following parameter with its product with the previous one
    printf("%i ", a[n]);
}

int main() {
    int prod(int b, int n, int a[]); //prod() function declaration
    int k; /*declaration of a local variable for the size of the sequence to be for the size of the
    sequence to be multiplied*/
    int m, l; //declaration of local variables to the boundaries of the interval [m, l]
    printf("Enter the length of the sequence to be multiplied: ");
    scanf("%i", &k); //choice of string size
    int s[k]; //declaration of a local variable to the sequence
    //choose the values ​​of each term in the sequence
    for(i = 0; i < k; i++) {
        printf("a[%i] = ", i);
        scanf("%i", &s[i]);
    }
    //choose the boundaries of the interval [m, l]
    printf("Choose the initial and final index of the term in the multiplication separated by space: ");
    scanf("%i %i", &m, &l);
    prod(m, l, s); //call the prod() function with the parameters
}