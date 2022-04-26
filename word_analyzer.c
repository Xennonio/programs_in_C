#include <stdio.h>
#include <string.h>

int main(){
  char v[30];
  int j = 0, m = 0;
  printf("choose a sentence of no more than 30 letters to analyze: ");
  scanf("%[^\n]c", v);
  for (int i=0; i<=strlen(v); i++){
    if (v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'||v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U') j++;
    if (v[i] == ' ') m++;
	}
  int k=strlen(v)-j-m;
  printf("the number of vowels is: %i\nthe number of consonants is: %i", j, k);
}
