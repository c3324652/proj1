#include <stdio.h>


    



int main()
{
    FILE *input;
    input=fopen("data.txt","r");
        if(input == NULL){
            perror("fopen()");
            return 0;
}

    char str[20];
    
   fscanf(input,"%[^\n]s", str);
   printf("we got %s", str);

    
    return 0;
}
