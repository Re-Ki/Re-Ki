#include<stdio.h>
#include<conio.h>
#define SIZE 20

struct student{

    char name[SIZE];
    int roll;
    double marks;

}stu[3];

int main(){

    int i=0;
    for(i=0; i<3; i++){
        stu[i].roll=i+1;
        printf("*******************************\n");
        printf("Please enter for Roll number %d\n",stu[i].roll);

        printf("Please enter student name :");
        scanf("%s",stu[i].name);

        printf("Please enter student marks :");
        scanf("%lf",&stu[i].marks);

    }

    for(i=0; i<3; i++){

        printf("____________________\n");

        printf("Roll number : %d\n",i+1);
        printf("Name : %s\n",stu[i].name);
        printf("Marks = %lf\n",stu[i].marks);

    }

getch();
return 0;
}