//without Return, without Argument
#include<stdio.h>
#include<conio.h>

void pal();

int main()
{
    pal();

    return 0;
}

void pal()
{
    int n, n1, rem, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
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
        printf("The given number %d is not a palindrome.", n1);
    }
}