#include<stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("001testw.txt","r+");

    char data_buffer[50];

    printf("Reading one line from specific file");

    fgets(data_buffer,50,fptr);

    printf("%s\n",data_buffer);


    fclose(fptr);
    return 0;
}