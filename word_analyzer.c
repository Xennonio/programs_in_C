//program that calculates the number of vowels and consonants in a word
#include <stdio.h>
#include <string.h> //library to use string manipulators functions (specifically strlen())

int main() {
  char v[30]; //local variable declaration to store the sentence
  int i; //declaration of local variable to use in for loop
  int j = 0, m = 0; //declaration of local variables to count the number of vowels and spaces in the sentence
  printf("choose a sentence of no more than 30 letters to analyze: ");
  scanf("%[^\n]c", v); //choice of sentence
  //analyze if there is a vowel in each character of the string
  for (i = 0; i <= strlen(v); i++) {
    if (v[i] == 'a'
     || v[i] == 'e'
     || v[i] == 'i'
     || v[i] == 'o'
     || v[i] == 'u'
     || v[i] == 'A'
     || v[i] == 'E'
     || v[i] == 'I'
     || v[i] == 'O'
     || v[i] == 'U')
      j++; //add one for each vowel that appears
    if (v[i] == ' ')
      m++; //add one for each space that appears
  }
  int k = strlen(v) - j - m; /*declaration of the local variable for the number of consonants
  (string length minus the number of vowels minus the number of spaces)*/
  printf("the number of vowels is: %i\nthe number of consonants is: %i", j, k);
}