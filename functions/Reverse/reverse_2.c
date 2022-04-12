//with Arguments, without Return
#include<stdio.h>
#include<conio.h>

void func(int a);            //declaring function

int main()
{    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    func(x);            //calling function
    
    return 0;
}

void func(int num)           //defining function  
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    
    printf("The reversed number is : %d", rev);
}
