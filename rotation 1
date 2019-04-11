#include<stdio.h>
 
 
int main()
{
 FILE *input;
 input = fopen("encrypted_message","r");
 
 	
	
 while (feof(input)==0) {
     char ch;
     fscanf(input,"%c",&ch);
     
     
    if(ch >= 'A' && ch <= 'Z'){
			ch = ch + 19;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
}
}
printf("%c", ch);
}
}
