#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char Name[50] ;
    int roll;
    int C_marks[3];
    int Phy_marks[3];
    int Math_marks[3];
}; //struct Student stu[10];

// array of stuctures 
//struct Students stu[10];
int choice;

void menu_disp();
void Adding_student();
void get_grade();
char grading(int x,int y,int z);
void disp(int i);
void display_grade_student_wise();
void display_all();

int main()
{

    //struct Student stu[10];


    menu_disp();
    int input;
    printf("Enter the choice : ");
    scanf("%d",&input);
    system("cls");

    if(input == 1)
    {
        Adding_student();
        get_grade();
        //student_no += 1;
        system("cls");
        main();
    }
    else if(input == 2)
    {
        printf("1.Choose Student\n");
        printf("2.Display All Student\n");
        printf("Enter the choice : ");

        scanf("%d",&choice);

        if(choice ==1)
        {   
            display_grade_student_wise();
            main();
        }
        else if(choice == 2)
        {
            display_all();
            main();
        }
    }
    else if(input == 3)
    {
        printf("..........EXITING............");
    }

    //printf("%d",stu[0].C_marks[0]);
}
