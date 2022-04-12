//without Arguments, with Return
#include<stdio.h>
#include<conio.h>

int func();            //declaring function

int main()
{
    int y;
    y = func();            //calling function

    printf("The reversed number is : %d", y);

    return 0;
}

int func()           //defining function  
{
    int num, rev = 0, rem;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
