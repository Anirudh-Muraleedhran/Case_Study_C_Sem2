#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char Name[50] ;
    int roll;
    int C_marks[3];
    int Phy_marks[3];
    int Math_marks[3];
}; struct Student stu[10];

// array of stuctures 
//struct Students stu[10];
int student_no ;
int roll;

void menu_disp()
{
    printf("\t\t\t  ***MENU***\n");
    printf("\t\t\t1.Add Student\n");
    printf("\t\t\t2.Display Card\n");
    printf("\t\t\t   3.Exit\n");
}


void Adding_student()
{
    //printf("Enter the student serial number : ");
    //scanf("%d",&students);

    printf("Enter the student name : ");
    scanf("%s",&stu[student_no].Name);

    printf("Enter the roll number  : ");
    scanf("%d",&stu[student_no].roll);

}

void get_grade()
{
    for(int i =0;i<3;i++)
    {
        printf("Enter the marks in C exam %d : ",i+1);
        scanf("%d",&stu[student_no].C_marks[i]);
    }
    system("cls");

    for(int i =0;i<3;i++)
    {
        printf("Enter the marks in Physics exam %d : ",i+1);
        scanf("%d",&stu[student_no].Phy_marks[i]);
    }
    system("cls");

    for(int i =0;i<3;i++)
    {
        printf("Enter the marks in Mathematics exam %d : ",i+1);
        scanf("%d",&stu[student_no].Math_marks[i]);
    }
    student_no += 1;
    system("cls");
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

void disp(int i)
{
    printf("************************************\n");

                printf("Name : %s\n",stu[i].Name);
                printf("Roll : %d\n\n",stu[i].roll);

                char  final_C = grading(stu[i].C_marks[0],stu[i].C_marks[1],stu[i].C_marks[2]) ;
                char  final_Phy = grading(stu[i].Phy_marks[0],stu[i].Phy_marks[1],stu[i].Phy_marks[2]) ;
                char  final_Math = grading(stu[i].Math_marks[0],stu[i].Math_marks[1],stu[i].Math_marks[2]) ;

                printf("    C\t\tPhy\t    Math\n");


                printf("ISA1 : %d     ISA1 : %d     ISA1 : %d\n",stu[i].C_marks[0],stu[i].Phy_marks[0],stu[i].Math_marks[0]);
                printf("ISA2 : %d     ISA2 : %d     ISA2 : %d\n",stu[i].C_marks[1],stu[i].Phy_marks[1],stu[i].Math_marks[1]);
                printf("ESA  : %d     ESA  : %d     ESA  : %d\n\n",stu[i].C_marks[2],stu[i].Phy_marks[2],stu[i].Math_marks[2]);
                printf("Grade: %c     Grade: %c     Grade: %c\n",final_C,final_Phy,final_Math);


                printf("************************************\n");
}

void display_grade_student_wise()
{
    printf("Enter the roll number : ");
    scanf("%d",&roll);
        int count =0;
            for(int i =0 ;i<student_no;i++)
            {
                //int count =0;

                if(stu[i].roll == roll)
                {
                disp(i);
                count += 1;
                }
            }
            if(count==0)
            {
                printf("Student does not exist \n");
            }
}

void display_all()
{
    for(int i = 0; i<student_no;i++ )
    {
        disp(i);
    }
}
