#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(){
    int age=0;
    int pmoney=0;
    int id=0;
    int money=0;
    int number=0;
    int num=0;
    time_t tm;
    printf("### Welcome to our lottery Game ###\n");
    printf("Please enter you age : ");
    scanf("%d",&age);
    if(age > 17){
        printf("\nPlease enter your money : \nmust me more then 2000Ks :");
        scanf("%d",&pmoney);
        printf("\nThis is your money %dKs",pmoney);
        printf("\nThis is your id 123 \n");
        printf("Please enter your id : ");
        scanf("%d",&id);
        while(id == 123){
            printf("\nEnter how many u  want to spend moneys : \n but must be more then 1000Ks :");
            scanf("%d",&money);
            while(money > 999){
                printf("\nPlease enter number 1 to 100 : ");
                scanf("%d",&number);
                int gamesysnumber=(rand()%100)+1;
                if(number == gamesysnumber){
                    printf("\nYou are win ! \n");
                    pmoney=pmoney+money;
                    printf("This is your money : %d\n",pmoney);
                    printf("If you want to play again Press 1 :\n");
                    printf("If you want to quit Press 2 :");
                    scanf("%d",&num);
                    if(num == 1){
                        printf("You can play again ! \n");

                    }else{
                        printf("\nGOOD BYE ! ");
                        exit(0);
                    }

                }else{
                    printf("gamesysnumber =%d | yournumber =%d \n",gamesysnumber,number);
                    printf("*** TRY AGAIN ***\n");
                    pmoney=pmoney-money;
                    if(pmoney <= 0 ){
                        printf("You don't have money !\n");
                        exit(0);

                    }
                }

            }
        }
    }else{
        printf("You cannot play this game GOODBYE ! ");
    }
    getch();
    return 0;
}