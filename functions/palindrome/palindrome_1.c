//with Return, with Argument
#include<stdio.h>
#include<conio.h>

int pal(int a);         //declaring function

int main()
{
    int x, y;
    printf("Enter a number : ");
    scanf("%d", &x);

    y = pal(x);         //calling function

    if (x == y)
    {
        printf("The given number, %d is a palindrome.", x);
    }
    else
    {
        printf("The given number, %d is not a palindrome.", x);
    }

    return 0;
}

int pal(int n)          //defining function
{
    int n1, rem, sum = 0;
    n1 = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    return sum;
}