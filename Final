/******************************************************************************
Welcome to program currently working encrypt with file write and decryption(Rotation)
decryption only with key
2 marks git 
1 marks Rotation encrypt
1 marks Rotation decryption with key
1.5 marks unseen decryption with Rotation (not yet)
0.75 marks file in and out
0.5 for menu
1 comments
7.75 total

*******************************************************************************/

/*****************************************************************************
Function definitions
*****************************************************************************/

#include <stdio.h>
int encrypt();      
int decryption();
int decryption2();  //decryption function without key
int menu();         //function that runs all other functions with it


int main(void){     //main block 
    
    menu();         //main function prints what to do and how to do it
    return 0;
        
}      
//functions below

int encrypt(){
/*****************************************************************************
this function is the Rotation cipher it reads from a file and rotates each
letter by the key value (this can only be a postitve number) then prints the
Encrypted text to a new file 
works with upper and lower case letters only symbols and spaces are not 
run through this code
input data using the 'plain' text file and output to 'data' txt file

*****************************************************************************/
    
	char message[1100];   //1100 character storage
	char CharacterAscii; //letter ascii value 
	int Value;           //ascii number storage for the 'CharacterAscii'
	int key;             //storage for the input key for rotation
	FILE *plain;         //file pointer to allow FILE i/o
	char tmp1;           //temp storage to remove a new line character 
	                   
	printf("Enter a message within plain.txt to encrypt\n  text: ");//prompt
    plain= fopen("plain","r");  //opening the txt file "plain" in read mode
    while(!feof(plain)){        //while not at the end of the file do...
        fgets(message,1100,plain);   //get 1100 character from 'plain' and store them in 'message'
        puts(message);  //prints the 'message' to screen
	    scanf("%c", &tmp1); //this basically eats the new line character so it runs correctly
	printf("Enter a positive key: "); //prompt
	scanf("%d", &key);         //scans user input for 'key'
/*****************************************************************************
this for loop runs throught every character in the array'message'and makes the character
into a number, It then stores the ascii value into the int'Value', the 'Value' then
has a 'key' added to it to rotate it the number is then made back into the character
the number represents 

*****************************************************************************/
	for(Value = 0; message[Value] != '\0'; ++Value){ 
	    /*'Value' initatlised as 0, array message['Value'] when not equal to null
	    then becomes 'message[Value + 1]'
	    */
		CharacterAscii = message[Value];   //message array in numbers given to C.A
		if(CharacterAscii >= 'a' && CharacterAscii <= 'z'){ //sets a range for ascii values
			CharacterAscii = CharacterAscii + key;  //the ascii value plus a key = a new ascii value
			if(CharacterAscii > 'z'){   //if the new ascii goes past z it wraps around eg.(z+2=b)
				CharacterAscii = CharacterAscii - 'z' + 'a' - 1;
			}
			message[Value] = CharacterAscii;  
			 //int values withing C.A become characters and put into the array 'message'
/* the following code runs the same but accounts for upper case letters	*/
/*****************************************************************************/
		}
		else if(CharacterAscii >= 'A' && CharacterAscii <= 'Z'){
			CharacterAscii = CharacterAscii + key;
			if(CharacterAscii > 'Z'){
				CharacterAscii = CharacterAscii - 'Z' + 'A' - 1;
			}
			message[Value] = CharacterAscii;
		}
/*****************************************************************************/
	}
	printf("Encrypted message is: %s\n", message); //prints what the message is Encrypted
	printf("***Encryption Printed to text file***\n");
        FILE *fpointerW;                        //this then writes to the file 'data'
        fpointerW = fopen("data","w");          //file data opened in write mode
        fprintf(fpointerW,"%s",message);        //message passed into file
        fclose(fpointerW);                      //file close
	return 0;       
 }
}
/***************************************************************************
 Rotation decryption (with key)
 this function runs the decryption with a key and works but simply 
 subtraction of a key value 
 this also reads from a file and writes to a different one 
 in this case input is 'dataD' and output is 'plain' (reverse of Encrypted)
 
 ***************************************************************************/
int decryption(){ //shouldnt need to rexplain cause this is same as Encryption
    //variables 
    char message[1100];  
    char CharacterAscii;
	int i;
	int key;
	char tmp2;
	FILE *DataD;
	//prompts
	printf("Enter a message to decrypt in DataD text file\n");
	printf("text currently in DataD:\n");//screen display 
	DataD=fopen("DataD","r"); //reads from DataD.txt
        while(!feof(DataD)){    
            fgets(message,1100,DataD);  //stores contents of file to message
            puts(message);  //prints whats in DataD

	printf("Enter key value: ");
	scanf("%d", &key);
	char tmp4;
	scanf("%c", &tmp4);
	for(i = 0; message[i] != '\0'; ++i){
		CharacterAscii= message[i];
		if(CharacterAscii>= 'a' && CharacterAscii<= 'z'){
			CharacterAscii= CharacterAscii- key;  //difference that makes the Decrypted
			if(CharacterAscii< 'a'){
				CharacterAscii= CharacterAscii+ 'z' - 'a' + 1;
			}
	message[i] = CharacterAscii;
		}
		else if(CharacterAscii>= 'A' && CharacterAscii<= 'Z'){
			CharacterAscii= CharacterAscii- key; //difference that makes the Decrypted
			if(CharacterAscii< 'A'){
				CharacterAscii= CharacterAscii+ 'Z' - 'A' + 1;
			}
	message[i] = CharacterAscii;
		}
	}
	printf("Decrypted message: %s\n", message);  //message is printed to file plain
	printf("Printed to plain text file...\n");   //this is the input file for Encryption
	FILE *fpointerW;
        fpointerW = fopen("plain","w");
        fprintf(fpointerW,"%s",message);
        fclose(fpointerW);
	return 0;
    }
}
/****************************************************************************
 Menu function
 this function gives the user prompts of what to do and takes input
 selecting a given option will run the corresponding function and give a end
 message
 
 ***************************************************************************/
int menu(){
    int selection1; //used for users first Selection this is currently the only on in use
    int selection2; //second
    int selection3; //third
    int selection4; //fourth
    printf("Welcome to Program\n"); //main menu
    printf("Select a option:\n");
    printf("    1) Encryption Rotation\n");
    printf("    2) Decryption Rotation(know key)\n");
    printf("    3) Decryption Rotation(unknown key)\n");
    printf("    4) Encryption Subsitution \n");
    printf("    5) Decryption\n");
    scanf("%d",&selection1); //input read
    switch(selection1){     //switch case to allow a user to only run their Selection
        case 1:         //case 1 runs the Rotation Encryption
        if(selection1==1){
            printf("***Encryption Rotation***\n");
            encrypt();
            break; //All 'break;s' ...
        }
        case 2:     //case 2 runs the Rotation Decryption with a key
        if(selection1==2){
            printf("***Decryption Rotation(with key)***\n");
            decryption();
            printf("you text has been Decrypted...");
            break;
        }
        case 3:     //case 3 runs the Rotation Decryption without a key
        if(selection1==3){
            printf("***Decryption Rotation(without key)***\n");
            decryption2();
            printf("All combinations have been printed to file...\n");
            break;
        }
        case 4:     //case 4 runs the Subsitution Encryption
        if(selection1==4){
            printf("***Subsitution Encryption***\n");
            //sub en function
            printf("Text printed to file");
            break;
        }
        case 5:     //case 5 runs the Subsitution Decryption
        if(selection1==5){
            printf("***Subsitution Decryption***\n");
            //sub de function
            printf("Text Printed to File");
            break;
        }
    }
 }
 /***************************************************************************
  Rotation decryption2 (without a key)
  this function runs the normal Decryption stopping to get a key input then
  printing the key value and rotation 
  this is the brute force method of Decryption rotation cipher 
  
  input the text you want to decrypt into DataD and out to plain
  
  ************************************************************************/
int decryption2(){
   
	char message[1100];  
    char CharacterAscii;
	int i;
	int key;
	char tmp2;
	FILE *DataD;
	
	
	
	printf("***READ:\nto figure out the key start at 1 and input till 26 or correct key found\n");
	printf("text currently in DataD:\n");//screen display 
	for( key = 0; key < 26; key = key++ ){// this single statement is what separates it from normal Decryption
	//the 'for' makes it so you input the key every loop 
	DataD=fopen("DataD","r"); //reads from DataD.txt
        while(!feof(DataD)){    
            fgets(message,1100,DataD);  //stores contents of file to message
            //puts(message);  //prints whats in DataD

	printf("Enter key value: ");
	scanf("%d", &key);
	char tmp4; 
	scanf("%c", &tmp4);
	for(i = 0; message[i] != '\0'; ++i){   //same Decryption but with a changable key
		CharacterAscii= message[i];
		if(CharacterAscii>= 'a' && CharacterAscii<= 'z'){
			CharacterAscii= CharacterAscii- key;  //difference that makes the Decrypted
			if(CharacterAscii< 'a'){
				CharacterAscii= CharacterAscii+ 'z' - 'a' + 1;
			}
	message[i] = CharacterAscii;
		}
		else if(CharacterAscii>= 'A' && CharacterAscii<= 'Z'){
			CharacterAscii= CharacterAscii- key; //difference that makes the Decrypted
			if(CharacterAscii< 'A'){
				CharacterAscii= CharacterAscii+ 'Z' - 'A' + 1;
			}
	message[i] = CharacterAscii;
		}
	}
	printf("Decrypted message: %s\n", message);  //message is printed to file plain
	//printf("Printed to plain text file...");   //this is the input file for Encryption
	FILE *fpointerW;
    fpointerW = fopen("plain","w");
    fprintf(fpointerW,"%s",message);
    fclose(fpointerW);
    
	}
    }
}
