#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void menu_disp();
void Adding_student();
void display_grade();
void get_grade();
char grading(int x,int y,int z);
 
//int students=0;
//int marks_C[10][3] = {};
//int marks_phy[10][3] = {};
//int marks_Math[10][3] = {};

int main() 
{
    menu_disp();
    int input;
    printf("Enter the choice : ");
    scanf("%d",&input);
    system("cls");

    //int students = 0;
    if(input == 1)
    {
        Adding_student();
        //students += 1;
        get_grade();
        main();
    }
    else if(input == 2)
    {
        /*if(students == 0)
        {
            printf("No Students Added\n");
            main();
        }
        */
        {
            system("cls");
            display_grade();
            main();
        }

    }
    else if(input == 3)
    {
        system("cls");
        printf("..........EXITING............");
    }

    return 0;
    //printf("Students :%d",students);
}