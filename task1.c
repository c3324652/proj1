#include <stdio.h>


    



int main()
{
    int i;
    FILE *input;
    input=fopen("data.txt","r");
        if(input == NULL){
            perror("fopen()");
            return 0;
}
    scanf("char*",&i);
    char str[i];
    
   
    
   fscanf(input,"%[^\n]s", str); //fgets(str,stringSize,filePtr);
   printf("we got %s", str);

     
    return 0;
}
