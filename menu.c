#include<stdio.h>
 
 /*the following code will take rotation and subststution encrypted text from external files, then decipher according to 
  *which option is chosen in the switch function. the key for the rotation cipher can be changed in the encryption selection 
  */
int main()
{
FILE *input1; 
FILE *input2;
FILE *input3;
FILE *input4;
FILE *input5;
FILE *input6;
input1 = fopen("encrypted_message","r"); //assigns the first rotation cipher to input 1 
input2 = fopen("encrypted_message2","r"); //assigns the second rotation cipher to input 2
input3 = fopen("message2encrypt","r"); //assigns a custom script to be encrypted to input 3. this script is used for both rotaton and substitution cipher
input4 = fopen("sub_encrypted_message1","r"); //assigns the first substitution cipher to input 4
input5 = fopen("sub_encrypted_message2","r"); //assigns the second substitution cipher to input 5
input6 = fopen("message2encrypt","r"); //assigns the same custom script from input 3 to input 6
int x,dkey,ekey; // the integer x will be used in switch function, dkey for decryption key selection, ekey for encryption key selection
printf("please choose from the following options:\n 1.Decipher roatation cipher #1 (key preset)\n 2.Decipher roatation cipher #2 (key preset)\n 3.Decipher roatation cipher #2 (input key)\n 4.Encrypt using rotation cipher\n 5.Decipher substitution cipher #1 (key preset)\n 6.Decipher substitution cipher #2 (key preset)\n 7.Encrypt using substitution cipher (key preset)\n"); //displaying choices for switch function
scanf("%d",&x); // slection for switch function
char a,b,c,d,e,f,g; // these char will be used for substitution and rotation algorithms
 
switch (x)
{
    case 1: //Runs Decipher roatation cipher #1 (key preset)
    
    printf("decrypted message: \n"); //for display purpose
    while (feof(input1)==0) //while input file has characters to be read (==0 is TRUE) 
    {
        fscanf(input1,"%c",&a); // calls input 1 and %c will read a single character for each loop
        if(a >= 'A' && a <= 'Z') // limits characters to be read to capital letters in ASCII 
        {
            a = a + 19; // adds (key) = 19 characters in ASCII to each character from file 
            if(a > 'Z')
            {
                a = a - 'Z' + 'A' - 1; // when key is added and exceeds 'Z', the addition continues from 'A'
            }
        }
        printf("%c", a); // prints one decrypted character each loop
    }
    printf("\n"); // adds new line after decrypted message
    ;
    break; //finishes case 1
    
    case 2: //Runs Decipher roatation cipher #2 (key preset)
    
    printf("decrypted message: \n"); //for display purpose
    while (feof(input2)==0) //while input file has characters to be read (==0 is TRUE)
    {
        fscanf(input2,"%c",&b); // calls input 2 and %c will read a single character for each loop
        if(b >= 'A' && b <= 'Z') // limits characters to be read to capital letters in ASCII 
        {
			b = b + 12; // adds (key) = 12 characters in ASCII to each character from file 
			if(b > 'Z')
			{
				b = b - 'Z' + 'A' - 1; // when key is added and exceeds 'Z', the addition continues from 'A'
            }
        }
        printf("%c", b); // prints one decrypted character each loop
    }
    printf("\n"); // adds new line after decrypted message
    ;
    break; //finishes case 2
    
    case 3: //Runs Decipher roatation cipher #2 (input key)
    
    printf("enter decryption key:\n"); //prompts key input
    scanf("%d",&dkey); //assigns key input to dkey
    printf("decrypted message: \n"); //for display purpose
	
    while (feof(input2)==0) //while input file has characters to be read (==0 is TRUE)
    {
        fscanf(input2,"%c",&g); // calls input 2 and %c will read a single character for each loop
        if(g >= 'A' && g <= 'Z') // limits characters to be read to capital letters in ASCII 
        {
			g = g + dkey; //adds decryption key to characters from input 2
			if(g > 'Z')
			{
				g = g - 'Z' + 'A' - 1; // when key is added and exceeds 'Z', the addition continues from 'A'
            }
        }
        printf("%c", g); // prints one decrypted character each loop
    }
    printf("\n"); // adds new line after decrypted message
    ;
    break; //finishes case 3
    
    case 4: //Runs Encrypt using rotation cipher using key input
    
    printf("enter encryption key:\n"); //prompt key input
    scanf("%d",&ekey); //assigns key to ekey
    printf("encrypted message: \n"); //for display purpose
	
    while (feof(input3)==0) //while input file has characters to be read (==0 is TRUE)
    {
        fscanf(input3,"%c",&c); // calls input 3 and %c will read a single character for each loop
        if(c >= 'A' && c <= 'Z') // limits characters to be read to capital letters in ASCII
        {
			c = c + ekey; //adds encryption key to characters from input 3
			if(c > 'Z')
			{
				c = c - 'Z' + 'A' - 1; // when key is added and exceeds 'Z', the addition continues from 'A'
            }
        }
        printf("%c", c); // prints one decrypted character each loop
    }
    printf("\n"); // adds new line after decrypted message
    ;
    break; //finishes case 4
    
    case 5: //Runs Decipher substitution cipher #1 (key preset)
    
    while (feof(input4)==0) //while input file has characters to be read (==0 is TRUE)
    {
        fscanf(input4,"%c",&d); // calls input 4 and %c will read a single character for each loop
     
        if (d == 'A') //the following script will substitute characters from input 4 for corresponding decryption characters found externally
        {
            d = 'K';
        }
            else if (d == 'B') 
            {
                d = 'E';
            }
                else if (d == 'C') 
                {
                    d = 'I';
                }
                    else if (d == 'D') 
                    {
                        d = 'J';
                    }
                        else if (d == 'E') 
                        {
                            d = 'U';
                        }
                            else if (d == 'F') 
                            {
                                d = 'T';
                            }
                                else if (d == 'G') 
                                {
                                    d = 'V';
                                }
                                    else if (d == 'I') 
                                    {
                                        d = 'P';
                                    }
                                        else if (d == 'J') 
                                        {
                                            d = 'S';
                                        }
                                            else if (d == 'K') 
                                            {
                                                d = 'N';
                                            }
                                                else if (d == 'L') 
                                                {
                                                    d = 'C';
                                                }
                                                    else if (d == 'M') 
                                                    {
                                                        d = 'F';
                                                    }
                                                        else if (d == 'N') 
                                                        {
                                                            d = 'A';
                                                        }
                                                            else if (d == 'O') 
                                                            {
                                                                d = 'M';
                                                            }
                                                                else if (d == 'P') 
                                                                {
                                                                    d = 'W';
                                                                }
                                                                    else if (d == 'Q') 
                                                                    {
                                                                        d = 'G';
                                                                    }
                                                                        else if (d == 'R') 
                                                                        {
                                                                            d = 'D';
                                                                        }
                                                                            else if (d == 'U')
                                                                            {
                                                                                d = 'X';
                                                                            }
                                                                                else if (d == 'V') 
                                                                                {
                                                                                    d = 'Y';
                                                                                }
                                                                                    else if (d == 'W') 
                                                                                    {
                                                                                        d = 'B';
                                                                                    }
                                                                                        else if (d == 'X') 
                                                                                        {
                                                                                            d = 'R';
                                                                                        }
                                                                                            else if (d == 'Y') 
                                                                                            {
                                                                                                d = 'O';
                                                                                            }
                                                                                                else if (d == 'Z') 
                                                                                                {
                                                                                                    d = 'L';
                                                                                                }
    			                                                                                printf("%c", d); // prints one decrypted character each loop
    }
    printf("\n"); // adds new line after decrypted message
    ;
    break; //finishes case 5

    case 6: //runs Decipher substitution cipher #2 (key preset)
    
    while (feof(input5)==0) //while input file has characters to be read (==0 is TRUE)
    {
        fscanf(input5,"%c",&e); // calls input 4 and %c will read a single character for each loop
     
        if (e == 'A') //the following script will substitute characters from input 4 for corresponding decryption characters found externally
        {
            e = 'K';
        }
            else if (e == 'B') 
            {
                e = 'E';
            }
                else if (e == 'C') 
                {
                    e = 'I';
                }
                    else if (e == 'D') 
                    {
                        e = 'J';
                    }
                        else if (e == 'E') 
                        {
                            e = 'U';
                        }
                            else if (e == 'F') 
                            {
                                e = 'T';
                            }
                                else if (e == 'G') 
                                {
                                    e = 'V';
                                }
                                    else if (e == 'I') 
                                    {
                                        e = 'P';
                                    }
                                        else if (e == 'J') 
                                        {
                                            e = 'S';
                                        }
                                            else if (e == 'K') 
                                            {
                                                e = 'N';
                                            }
                                                else if (e == 'L') 
                                                {
                                                    e = 'C';
                                                }
                                                    else if (e == 'M') 
                                                    {
                                                        e = 'F';
                                                    }
                                                        else if (e == 'N') 
                                                        {
                                                            e = 'A';
                                                        }
                                                            else if (e == 'O') 
                                                            {
                                                                e = 'M';
                                                            }
                                                                else if (e == 'P') 
                                                                {
                                                                    e = 'W';
                                                                }
                                                                    else if (e == 'Q') 
                                                                    {
                                                                        e = 'G';
                                                                    }
                                                                        else if (e == 'R') 
                                                                        {
                                                                            e = 'D';
                                                                        }
                                                                            else if (e == 'U')
                                                                            {
                                                                                e = 'X';
                                                                            }
                                                                                else if (e == 'V') 
                                                                                {
                                                                                    e = 'Y';
                                                                                }
                                                                                    else if (e == 'W') 
                                                                                    {
                                                                                        e = 'B';
                                                                                    }
                                                                                        else if (e == 'X') 
                                                                                        {
                                                                                            e = 'R';
                                                                                        }
                                                                                            else if (e == 'Y') 
                                                                                            {
                                                                                                e = 'O';
                                                                                            }
                                                                                                else if (e == 'Z') 
                                                                                                {
                                                                                                    e = 'L';
                                                                                                }
    			                                                                                printf("%c", e); // prints one decrypted character each loop
    }
    printf("\n"); // adds new line after decrypted message
    ;
    break; //finishes case 6

    case 7: //Runs Encrypt using substitution cipher (key preset)
    
    while (feof(input6)==0) //while input file has characters to be read (==0 is TRUE)
    {
        fscanf(input6,"%c",&f); // calls input 4 and %c will read a single character for each loop
     
        if (f == 'A') //the following script will substitute characters from input 4 for corresponding decryption characters found externally
                {
                    f = 'K';
                }
                    else if (f == 'B') 
                    {
                        f = 'E';
                    }
                        else if (f == 'C') 
                        {
                            f = 'I';
                        }
                            else if (f == 'D') 
                            {
                                f = 'J';
                            }
                                else if (f == 'E') 
                                {
                                    f = 'U';
                                }
                                    else if (f == 'F') 
                                    {
                                        f = 'T';
                                    }
                                        else if (f == 'G') 
                                        {
                                            f = 'V';
                                        }
                                            else if (f == 'I') 
                                            {
                                                f = 'P';
                                            }
                                                else if (f == 'J') 
                                                {
                                                    f = 'S';
                                                }
                                                    else if (f == 'K') 
                                                    {
                                                        f = 'N';
                                                    }
                                                        else if (f == 'L') 
                                                        {
                                                            f = 'C';
                                                        }
                                                            else if (f == 'M') 
                                                            {
                                                                f = 'F';
                                                            }
                                                                else if (f == 'N') 
                                                                {
                                                                    f = 'A';
                                                                }
                                                                    else if (f == 'O') 
                                                                    {
                                                                        f = 'M';
                                                                    }
                                                                        else if (f == 'P') 
                                                                        {
                                                                            f = 'W';
                                                                        }
                                                                            else if (f == 'Q') 
                                                                            {
                                                                                f = 'G';
                                                                            }
                                                                                else if (f == 'R') 
                                                                                {
                                                                                    f = 'D';
                                                                                }
                                                                                    else if (f == 'U')
                                                                                    {
                                                                                        f = 'X';
                                                                                    }
                                                                                        else if (f == 'V') 
                                                                                        {
                                                                                            f = 'Y';
                                                                                        }
                                                                                            else if (f == 'W') 
                                                                                            {
                                                                                                f = 'B';
                                                                                            }
                                                                                                else if (f == 'X') 
                                                                                                {
                                                                                                    f = 'R';
                                                                                                }
                                                                                                    else if (f == 'Y') 
                                                                                                    {
                                                                                                        f = 'O';
                                                                                                    }
                                                                                                        else if (f == 'Z') 
                                                                                                        {
                                                                                                            f = 'L';
                                                                                                        }
            			                                                                                printf("%c", f); // prints one decrypted character each loop
    }
    printf("\n"); // adds new line after decrypted message
    ;
    break; //finishes case 7
    
    default: //Runs if a choice is not within given options
    
    printf("please choose a valid option\n"); //for display purposes
}
}