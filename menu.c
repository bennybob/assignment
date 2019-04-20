#include<stdio.h>
 
 
int main()
{
 FILE *input1;
 FILE *input2;
 FILE *input3;
 FILE *input4;
 FILE *input5;
 FILE *input6;
 input1 = fopen("encrypted_message","r");
 input2 = fopen("encrypted_message2","r");
 input3 = fopen("message2encrypt","r");
 input4 = fopen("sub_encrypted_message1","r");
 input5 = fopen("sub_encrypted_message2","r");
 input6 = fopen("message2encrypt","r");
 int x,dkey,ekey;
 printf("please choose from the following options:\n 1.Decipher roatation cipher #1 (key preset)\n 2.Decipher roatation cipher #2 (key preset)\n 3.Decipher roatation cipher #2 (input key)\n 4.Encrypt using rotation cipher\n 5.Decipher substitution cipher #1 (key preset)\n 6.Decipher substitution cipher #2 (key preset)\n 7.Encrypt using substitution cipher (key preset)\n");
 scanf("%d",&x);
 char a,b,c,d,e,f,g;
 
 switch (x)
 {
    case 1:
        while (feof(input1)==0) {
    
     fscanf(input1,"%c",&a);
     
     
    if(a >= 'A' && a <= 'Z'){
			a = a + 19;
			
			if(a > 'Z'){
				a = a - 'Z' + 'A' - 1;
}
}
printf("%c", a);
}
printf("\n");
;
break;
    case 2:
    while (feof(input2)==0) {

     fscanf(input2,"%c",&b);
     
     
    if(b >= 'A' && b <= 'Z'){
			b = b + 12;
			
			if(b > 'Z'){
				b = b - 'Z' + 'A' - 1;
}
}
printf("%c", b);
}
printf("\n");
;
break;
    case 3:
    
    printf("enter decryption key:\n");
 scanf("%d",&dkey);
 printf("decrypted message: \n");
	
 while (feof(input2)==0) {
    
     fscanf(input2,"%c",&g);
  
     
    if(g >= 'A' && g <= 'Z'){
			g = g + dkey;
			
			if(g > 'Z'){
				g = g - 'Z' + 'A' - 1;
}
}
printf("%c", g);
}
printf("\n");
;
break;
    
    case 4:
    
 printf("enter encryption key:\n");
 scanf("%d",&ekey);
 printf("encrypted message: \n");
	
 while (feof(input3)==0) {
    
     fscanf(input3,"%c",&c);
  
     
    if(c >= 'A' && c <= 'Z'){
			c = c + ekey;
			
			if(c > 'Z'){
				c = c - 'Z' + 'A' - 1;
}
}
printf("%c", c);
}
printf("\n");
;
break;
    case 5:
    while (feof(input4)==0) {
     fscanf(input4,"%c",&d);
     
  if (d == 'A') {d = 'K';}
  else if (d == 'B') {d = 'E';}
  else if (d == 'C') {d = 'I';}
  else if (d == 'D') {d = 'J';}
  else if (d == 'E') {d = 'U';}
  else if (d == 'F') {d = 'T';}
  else if (d == 'G') {d = 'V';}
  else if (d == 'I') {d = 'P';}
  else if (d == 'J') {d = 'S';}
  else if (d == 'K') {d = 'N';}
  else if (d == 'L') {d = 'C';}
  else if (d == 'M') {d = 'F';}
  else if (d == 'N') {d = 'A';}
  else if (d == 'O') {d = 'M';}
  else if (d == 'P') {d = 'W';}
  else if (d == 'Q') {d = 'G';}
  else if (d == 'R') {d = 'D';}
  else if (d == 'V') {d = 'Y';}
  else if (d == 'W') {d = 'B';}
  else if (d == 'X') {d = 'R';}
  else if (d == 'Y') {d = 'O';}
  else if (d == 'Z') {d = 'L';}
			


printf("%c", d);
}
printf("\n");
;
break;

    case 6:
    while (feof(input5)==0) {
     fscanf(input5,"%c",&e);
     
  if (e == 'A') {e = 'K';}
  else if (e == 'B') {e = 'E';}
  else if (e == 'C') {e = 'I';}
  else if (e == 'D') {e = 'J';}
  else if (e == 'E') {e = 'U';}
  else if (e == 'F') {e = 'T';}
  else if (e == 'G') {e = 'V';}
  else if (e == 'I') {e = 'P';}
  else if (e == 'J') {e = 'S';}
  else if (e == 'K') {e = 'N';}
  else if (e == 'L') {e = 'C';}
  else if (e == 'M') {e = 'F';}
  else if (e == 'N') {e = 'A';}
  else if (e == 'O') {e = 'M';}
  else if (e == 'P') {e = 'W';}
  else if (e == 'Q') {e = 'G';}
  else if (e == 'R') {e = 'D';}
  else if (e == 'U') {e = 'X';}
  else if (e == 'V') {e = 'Y';}
  else if (e == 'W') {e = 'B';}
  else if (e == 'X') {e = 'R';}
  else if (e == 'Y') {e = 'O';}
  else if (e == 'Z') {e = 'L';}
			
printf("%c", e);
}
printf("\n");
;
break;

    case 7:
    while (feof(input6)==0) {
     fscanf(input6,"%c",&f);
     
  if (f == 'A') {f = 'K';}
  else if (f == 'B') {f = 'E';}
  else if (f == 'C') {f = 'I';}
  else if (f == 'D') {f = 'J';}
  else if (f == 'E') {f = 'U';}
  else if (f == 'F') {f = 'T';}
  else if (f == 'G') {f = 'V';}
  else if (f == 'I') {f = 'P';}
  else if (f == 'J') {f = 'S';}
  else if (f == 'K') {f = 'N';}
  else if (f == 'L') {f = 'C';}
  else if (f == 'M') {f = 'F';}
  else if (f == 'N') {f = 'A';}
  else if (f == 'O') {f = 'M';}
  else if (f == 'P') {f = 'W';}
  else if (f == 'Q') {f = 'G';}
  else if (f == 'R') {f = 'D';}
  else if (f == 'V') {f = 'Y';}
  else if (f == 'W') {f = 'B';}
  else if (f == 'X') {f = 'R';}
  else if (f == 'Y') {f = 'O';}
  else if (f == 'Z') {f = 'L';}
			


printf("%c", f);
}
printf("\n");
;
break;
    
    default:
       printf("please choose an option");
   }}