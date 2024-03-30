#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int roll_no,exam_no; 
char stu_name[100];
char stu_name_list[10][100];
int roll_no_list[100];
int students ;
int marks_C[10][3] = {};
int marks_phy[10][3] = {};
int marks_Math[10][3] = {};

void menu_disp()
{
    printf("\t\t\t  ***MENU***\n");
    printf("\t\t\t1.Add Student\n");
    printf("\t\t\t2.Display Card\n");
    printf("\t\t\t   3.Exit\n");
}

void Adding_student()
{
    printf("Enter the student serial number : ");
    scanf("%d",&students);

    printf("Enter the student name : ");
    scanf("%s",&stu_name);

    printf("Enter the roll number  : ");
    scanf("%d",&roll_no);

    strcpy(stu_name_list[students-1],stu_name);
    roll_no_list[students-1]=roll_no;

}

char grading(int x,int y,int z)
{
    float avg = x + y +z;
    float percentage = (avg/300.0)*100.0;
    char grade;

    if(percentage>90){
    grade = 'S';}
    else if(percentage>80){
        grade='A';
    }
    else if(percentage>70)
    {
        grade ='B';
    }
    else if(percentage>60)
    {
        grade ='C';
    }
    else if(percentage>50)
    {
        grade ='D';
    }
    else{
        grade ='F';
    }

    return grade;

}

void display_grade()
{
    printf("1.Choose Student\n");
    printf("2.Display All Student\n");
    printf("Enter the choice : ");

    int display_opt;
    scanf("%d",&display_opt);

    if(display_opt == 1)
    {
        int display_stu_roll ;
        printf("Enter the roll no. of student : ");
        scanf("%d",&display_stu_roll);
        int num =0;

        system("cls");

        for(int i = 0;i<students;i++)
        {
            //printf("In loop");
            if(roll_no_list[i]==display_stu_roll)
            {
                printf("************************************\n");

                printf("Name : %s\n",stu_name_list[num]);
                printf("Roll : %d\n\n",roll_no_list[num]);

                char  final_C = grading(marks_C[num][0],marks_C[num][1],marks_C[num][2]) ;
                char  final_Phy = grading(marks_phy[num][0],marks_phy[num][1],marks_phy[num][2]) ;
                char  final_Math = grading(marks_Math[num][0],marks_Math[num][1],marks_Math[num][2]) ;

                printf("    C\t\tPhy\t    Math\n");


                printf("ISA1 : %d     ISA1 : %d     ISA1 : %d\n",marks_C[num][0],marks_phy[num][0],marks_Math[num][0]);
                printf("ISA2 : %d     ISA2 : %d     ISA2 : %d\n",marks_C[num][1],marks_phy[num][1],marks_Math[num][1]);
                printf("ESA  : %d     ESA  : %d     ESA  : %d\n\n",marks_C[num][2],marks_phy[num][2],marks_Math[num][2]);
                printf("Grade: %c     Grade: %c     Grade: %c\n",final_C,final_Phy,final_Math);


                printf("************************************\n");

            }
            else{
                num += 1;
            }
        }
    }


    //printf("Name: %s\n",stu_name);
    //printf("%d",students);
    //printf("Roll : %d\n",roll_no);

    //char  final_C = grading(marks_C[students-1-x][0],marks_C[students-1-x][1],marks_C[students-1-x][2]) ;
    else if(display_opt==2) {
        system("cls");
        for(int x =0;x<students;x++)
        {
            char  final_C = grading(marks_C[x][0],marks_C[x][1],marks_C[x][2]) ;
            char  final_Phy = grading(marks_phy[x][0],marks_phy[x][1],marks_phy[x][2]) ;
            char  final_Math = grading(marks_Math[x][0],marks_Math[x][1],marks_Math[x][2]) ;

            printf("************************************\n");

            printf("Name : %s\n",stu_name_list[x]);
            printf("Roll : %d\n\n",roll_no_list[x]);

            printf("    C\t\tPhy\t    Math\n");


            printf("ISA1 : %d     ISA1 : %d     ISA1 : %d\n",marks_C[x][0],marks_phy[x][0],marks_Math[x][0]);
            printf("ISA2 : %d     ISA2 : %d     ISA2 : %d\n",marks_C[x][1],marks_phy[x][1],marks_Math[x][1]);
            printf("ESA  : %d     ESA  : %d     ESA  : %d\n\n",marks_C[x][2],marks_phy[x][2],marks_Math[x][2]);
            printf("Grade: %c     Grade: %c     Grade: %c\n",final_C,final_Phy,final_Math);

            printf("************************************\n");
        }
    }
}

void get_grade()
{
    for(int j =0;j<3;j++)
    {   
        //int inp_marks;
        printf("Enter the marks in C exam  %d (Out of 100): ",(j+1));
        scanf("%d",&marks_C[students-1][j]);

        if(marks_C[students-1][j] >100 || marks_C[students-1][j]<0)
        {
            printf("Invalid Input\n");
            break;
        }
        else
        {
            continue;
        }
    }
    system("cls");
    for(int j =0;j<3;j++)
    {
        printf("Enter the marks in Physics exam  %d (Out of 100): ",(j+1));
        scanf("%d",&marks_phy[students-1][j]);

        if(marks_phy[students-1][j] >100 || marks_phy[students-1][j]<0)
        {
            printf("Invalid Input\n");
            break;
        }
        else
        {
            continue;
        }
    }
    system("cls");
    for(int j =0;j<3;j++)
    {
        printf("Enter the marks in Mathematics exam  %d (Out of 100): ",(j+1));
        scanf("%d",&marks_Math[students-1][j]);

        if(marks_Math[students-1][j] >100 || marks_Math[students-1][j]<0)
        {
            printf("Invalid Input\n");
            break;
        }
        else
        {
            continue;
        }
    }
    system("cls");
}
