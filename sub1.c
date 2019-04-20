#include <stdio.h>

int main()
{
 FILE *input;
 input = fopen("sub_encrypted_message1","r");
 
 	
	
 while (feof(input)==0) {
     char ch;
     fscanf(input,"%c",&ch);
     
  if (ch == 'A') {ch = 'K';}
  else if (ch == 'B') {ch = 'E';}
  else if (ch == 'C') {ch = 'I';}
  else if (ch == 'D') {ch = 'J';}
  else if (ch == 'E') {ch = 'U';}
  else if (ch == 'F') {ch = 'T';}
  else if (ch == 'G') {ch = 'V';}
  else if (ch == 'I') {ch = 'P';}
  else if (ch == 'J') {ch = 'S';}
  else if (ch == 'K') {ch = 'N';}
  else if (ch == 'L') {ch = 'C';}
  else if (ch == 'M') {ch = 'F';}
  else if (ch == 'N') {ch = 'A';}
  else if (ch == 'O') {ch = 'M';}
  else if (ch == 'P') {ch = 'W';}
  else if (ch == 'Q') {ch = 'G';}
  else if (ch == 'R') {ch = 'D';}
  else if (ch == 'V') {ch = 'Y';}
  else if (ch == 'W') {ch = 'B';}
  else if (ch == 'X') {ch = 'R';}
  else if (ch == 'Y') {ch = 'O';}
  else if (ch == 'Z') {ch = 'L';}
			


printf("%c", ch);
}
}