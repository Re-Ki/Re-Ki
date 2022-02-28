/* storage class
 * register storage
 * register int x=10;
 * printf("%d",x)
 * */
#include<stdio.h>
#include<time.h>
#include<conio.h>
int main(){
int start,stop;
    start=clock();//   to record start time
    for(register int i=0; i< 100000; i++){

    }
    stop=clock();
    double cps=CLOCKS_PER_SEC;
    double time=(stop-start)/cps;
    printf("time = %lf",time);
    getch();
    return 0;
}