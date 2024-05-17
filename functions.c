#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void menu_disp()
{
    printf("\t\t\t  ***MENU***\n");
    printf("\t\t\t1.Add Student\n");
    printf("\t\t\t2.Display Card\n");
    printf("\t\t\t   3.Exit\n");
}



void Add_Student()
{
    FILE * fptr = fopen("student.txt","a");

    int roll ;
    char name[50];
    int Math , C , Phy;

    printf("Enter the Student Name : ");
    scanf("%s",name);

    printf("Enter the Student Roll Number : ");
    scanf("%d",&roll);

    printf("Enter the Math marks : ");
    scanf("%d",&Math);

    printf("Enter the Physics marks : ");
    scanf("%d",&Phy);

    printf("Enter the C marks : ");
    scanf("%d",&C);

    fprintf(fptr,"\n%s %d %d %d %d",name,roll,Math,Phy,C);

    fclose(fptr);

}

void Disp_marks(char * name, int roll , int math, int phy , int c)
{
    printf("************************************\n");

                printf("Name : %s\n",name);
                printf("Roll : %d\n\n",roll);

                printf("Math Marks: %d\n",math);
                printf("Physics Marks: %d\n",phy);
                printf("C Marks: %d\n",c);
            

    printf("************************************\n");
}

void Disp_student()
{

    char name[50];
    int roll;
    int Math , C , Phy,choice;

    FILE * fptr = fopen("student.txt","r");

    printf("1.Choose Student\n");
    printf("2.Display All Student\n");
    printf("Enter the choice : ");

    scanf("%d",&choice);

    if(choice == 1)
    {
        int roll_no;
        printf("Enter the roll number : ");
        scanf("%d",&roll_no);

        while(fscanf(fptr, "%s %d %d %d %d",name,&roll,&Math,&Phy,&C)!=EOF)
        {  
            if(roll_no == roll){
            Disp_marks(name,roll,Math,Phy,C);
            break;
            }  
        }  
    }
    else if(choice == 2)
    {
        while(fscanf(fptr, "%s %d %d %d %d",name,&roll,&Math,&Phy,&C)!=EOF)
        {  
            Disp_marks(name,roll,Math,Phy,C); 
        }  
    fclose(fptr);
    }
}
