//with Arguments, with Return
#include<stdio.h>
#include<conio.h>

int func(int a);            //declaring function

int main()                  //main function
{    int x, y;
    printf("Enter a number : ");
    scanf("%d", &x);

    y = func(x);            //calling function
    printf("The reversed number is : %d", y);

    return 0;
}                           //end of main function

int func(int num)           //defining function  
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return rev;
}
