#include <stdio.h>

 
int main()
{
 FILE *input;
 input = fopen("message2encrypt","r");
int key;
 printf("enter encryption key:\n");
 scanf("%d",&key);
 printf("encrypted message: \n");
	
 while (feof(input)==0) {
     char ch;
     fscanf(input,"%c",&ch);
  
     
    if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
}
}
printf(" %c", ch);
}
}