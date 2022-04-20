//program that calculates the summation of a sequence
#include <stdio.h>

int i; //declaration of a local variable to use in the for loop

//function of the sequence of a summation
int sum(int b, int n, int a[]) {
    for(i = b; i < n; i++)
    a[i + 1] += a[i]; //replaces the value of each following parameter with its sum with the previous one
    printf("%i ", a[n]);
}

int main() {
    int sum(int b, int n, int a[]); //sum() function declaration
    int k; /*declaration of a local variable for the size of the sequence to be for the size of the
    sequence to be summed*/
    int m, l; //declaration of local variables to the boundaries of the interval [m, l]
    printf("Enter the length of the sequence to be summed: ");
    scanf("%i", &k); //choice of string size
    int s[k]; //declaration of a local variable to the sequence
    //choose the values ​​of each term in the sequence
    for(i = 0; i < k; i++) {
        printf("a[%i] = ", i);
        scanf("%i", &s[i]);
    }
    //choose the boundaries of the interval [m, l]
    printf("Choose the initial and final index of the term in the summation separated by space: ");
    scanf("%i %i", &m, &l);
    sum(m, l, s); //call the sum() function with the parameters
}