//program with password
#include <stdio.h>

//global variables and password s[3]
char v[4]; //declaration of a global variable to store the typed password
char s[3] = { '1', '9', '6' }; //declaration of a global variable for password choice

//yes or no choose function
int correct () {
  int main (); //main function declaration
  printf ("correct\ndo you want stop run the program?\n(y / n)\n");
  scanf ("%s", v); //store the typed character
  //stop the program by typing y
  if (v[0] == 'y') return 0;
  //continue the program by typing n
  if (v[0] == 'n') main ();
}

//password to try
int main () {
  printf ("type the password: ");
  scanf ("%s", v); //password choice attempt
  //call the correct() function if you get it right
  if (v[0, 1, 2] == s[0, 1, 2]) correct ();
  //otherwise allow successive attempts until you get it right
  else {
      printf ("wrong, try again\n");
      main ();
    }
}