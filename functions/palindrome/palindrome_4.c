//without Return, with Argument
#include<stdio.h>
#include<conio.h>

void pal(int a);

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    pal(x);
    
    return 0;
}

void pal(int n)
{
    int n1, rem, sum = 0;
    n1 = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    
    if (n1 == sum)
    {
        printf("The given number, %d is a palindrome.", n1);
    }
    else
    {
        printf("The given number, %d is not a palindrome.", n1);
    }
}