#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_disp();
void Add_Student();
void Disp_student();
void Disp_marks();

//FILE * fptr ;



int main()
{
    menu_disp();
    int input;
    printf("Enter the choice : ");
    scanf("%d",&input);
    system("cls");

    if(input ==1 )
    {
        FILE * fptr = fopen("Create.csv","w");
        Add_Student();
        system("cls");
        main();
    }
    else if(input ==2)
    {
        Disp_student();
        main();
    }
    else if(input ==3)
    {
        printf(".......................EXITING.......................");
    }
}
