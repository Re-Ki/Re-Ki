#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    int age=0;
    int pmoney=0;
    int id=0;
    int money=0;
    int number=0;
    int num=0;
    time_t tm;
    printf("### Welcome to our Game ###\n");
    printf("Please enter your age : ");
    scanf("%d",&age);
    if(age > 17){
        printf("Please enter you money : ");
        scanf("%d",&pmoney);
        printf("\nThis is your money %dKs \n",pmoney);
        printf("This is your id 123 \n");
        printf("Please enter your id : ");
        scanf("%d",&id);
        if(id != 123) {
            while(id != 123){
            printf("Please enter your id 123 :");
            scanf("%d",&id);
            }
            while (id == 123) {
                printf("Enter How many you want spend money :\n but must be more then 1000Ks:");
                scanf("%d", &money);
                while (money > 999) {
                    printf("Please enter number 1 to 100 : ");
                    scanf("%d", &number);
                    int Gamesysnumber = (rand() % 100) + 1;
                    printf("Gamesysnumber :%d Your number :%d", Gamesysnumber, number);
                    if (number == Gamesysnumber) {
                        printf("You are win \n");
                        pmoney = pmoney + money;
                        printf("This is your money : %d", pmoney);
                        printf("If You want to Play Agian Press 1 : \n");
                        printf("If You want to quit Press 2 : ");
                        scanf("%d", &num);
                        if (num == 1) {
                            printf("You can Play Again :\n");
                        } else {
                            printf("GOOD BYE !");
                            exit(0);
                        }

                    } else {
                        printf("\n### TRY AGAIN! ###\n");
                        pmoney = pmoney - money;
                        printf("This is Your money %dKs\n", pmoney);
                        if (pmoney <= 0) {
                            printf("You don't have money ! ");
                            exit(0);
                        }


                    }
                }
            }
        }
    }else{
        printf("You cannot play this Game Good Bye! ");
    }
    getch();
    return 0;
}
