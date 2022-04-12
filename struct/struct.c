#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stds                     
{
    int roll_no;
    char first_name[20];
    char last_name[20];
    char address[30];
    char major[10];
};

int main(){
    
    //declaring a struct variable
    struct stds s[100];

    int i, n;
    printf("How many students?\n");
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++)
    {
        printf("Enter the roll number : ");
        scanf("%d", &s[i].roll_no);
        printf("\nEnter the first name of the student : ");
        scanf("%s", s[i].first_name);
        printf("\nEnter the last name of the student : ");
        scanf("%s", s[i].last_name);
        printf("\nEnter the major subject of the student(CS/Biology) : ");
        scanf("%s", s[i].major);
        printf("Enter the address of the student : ");
        scanf("%s", s[i].address);

        system("cls");
        printf("Enter the details of next student\n");
    }
    system("cls"); 
    
    for ( i = 0; i < n; i++)
    {
        printf("Information of Roll no. %d : \n\n", s[i].roll_no);
        printf("Name : %s %s\nMajor Subject : %s\nAddress : %s\n\n\n", s[i].first_name, s[i].last_name, s[i].major, s[i].address);
        
    }
return 0;
}