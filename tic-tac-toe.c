#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char m[3][3], a, b, c, d, e;
int display();
int getpm();
int getcm();
int check();
int repeat();
int create();

int main(){
  label:
  printf("Choose your symbol, X or O: ");
  scanf("%c", &c);
  getchar();
  if(c!='X'&&c!='O'){
    printf("This symbol is invalid.\n");
    goto label;
  } else{
    switch(c){
      case 'X':
      c='X';
      b='O';
      break;
      case 'O':
      c='O';
      b='X';
      break;
    }
  }
  printf("This is tic-tac-toe.\nYou will be playing against a computer using against it %c.\n", c);
  for(int i=0; i<3; i++) for(int j=0; j<3; j++) m[i][j]=' ';
  repeat();
  return 0;
}

int repeat(){
  display();
  printf("\n");
  getpm();
  d=check();
  if(d==c){
    display();
    printf("\nYou won!\n");
    exit(0);
  }
  getcm();
  d=check();
  if(d==b){
    display();
    printf("\nI won!!!\n");
    exit(0);
  } else repeat();
}

int display(){
  printf("  1   2   3\n");
  for(int i=0; i<3; i++){
    printf("%i %c | %c | %c ", i+1, m[i][0], m[i][1], m[i][2]);
    if(i!=2) printf("\n ---|---|---\n");
  }
}

int getpm(){
  int x, y;
  printf("Enter x and y coordinates to place a %c on the grid: ", c);
  scanf("%i %i", &x, &y);
  x--; y--;
  if(m[x][y]!=' '||x>3||y>3){
    printf("Invalid position, please try again.\n");
    getpm();
  } else m[x][y]=c;
}

int check(){
  for(int i=0; i<3; i++) if(m[i][0]==m[i][1]&&m[i][0]==m[i][2]&&m[i][0]==b) return b;
  for(int i=0; i<3; i++) if(m[0][i]==m[1][i]&&m[0][i]==m[2][i]&&m[0][i]==b) return b;
  if(m[0][0]==m[1][1]&&m[0][0]==m[2][2]&&m[0][0]==b) return b;
  if(m[0][2]==m[1][1]&&m[0][2]==m[2][0]&&m[0][2]==b) return b;
  for(int i=0; i<3; i++) if(m[i][0]==m[i][1]&&m[i][0]==m[i][2]&&m[i][0]==c) return c;
  for(int i=0; i<3; i++) if(m[0][i]==m[1][i]&&m[0][i]==m[2][i]&&m[0][i]==c) return c;
  if(m[0][0]==m[1][1]&&m[0][0]==m[2][2]&&m[0][0]==c) return c;
  if(m[0][2]==m[1][1]&&m[0][2]==m[2][0]&&m[0][2]==c) return c;
  return ' ';
}

int getcm(){
  srand(time(NULL));
  do{
    a=rand()%3;
    e=rand()%3;
    } while(m[a][e]!=' ');
  m[a][e]=b;
}
