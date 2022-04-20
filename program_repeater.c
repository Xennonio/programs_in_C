#include <stdio.h>
#include <stdlib.h>

int loop () {
  int main ();
  char c;
  scanf("\n%c", &c);
  if (c == 'y') exit(1);
  if (c == 'n') main();
  printf("invalid argument\n");
  loop();
}

int main () {
  int loop ();
  /*
  any code
  */
  loop();
}
