#include<stdio.h>

int main(){
    int binaryValue=0,decimalValue=0,remainder=0,x=0,y=0;
    int hexa[100];
    int i=1;

    printf("Please enter your binary number (1-0) : ");
    scanf("%d",&binaryValue);

    while(binaryValue != 0){

        remainder=binaryValue%10;
        decimalValue=decimalValue+remainder;
        i=i*2;
        binaryValue=binaryValue/10;
    }
        printf("%d\n",decimalValue);

    while(decimalValue != 0){

        hexa[x]=decimalValue%8;
        decimalValue=decimalValue/8;
        x++;

    }
        printf("The Hexadecimal value is : ");

    return 0;
}