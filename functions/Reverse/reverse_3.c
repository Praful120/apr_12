//without Arguments, without Return
#include<stdio.h>
#include<conio.h>

void func();            //declaring function

int main()
{
    func();            //calling function

    return 0;
}

void func()           //defining function  
{
    int num, rev = 0, rem;
    printf("Enter an integer : ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    
    printf("The reversed number is : %d", rev);
}
