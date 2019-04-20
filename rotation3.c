#include <stdio.h>
#include<stdio.h>
 
 
int main()
{
 FILE *input;
 input = fopen("to_substitution_encrypt","r");
 int key;
 printf("enter key\n");
 scanf("%d",&key);
 	
	
 while (feof(input)==0) {
     char ch;
     fscanf(input,"%c",&ch);
     
     
    if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
}
}
printf("%c", ch);
}
}