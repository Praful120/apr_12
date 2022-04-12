//without Return, with Argument
#include<stdio.h>
#include<conio.h>

void arm(int a);

int main(){
    int x;
    printf("Enter a three digit integer : ");
    scanf("%d",&x);

    arm(x);

    return 0;
}

void arm(int n)
{
    int n1, rem, sum = 0;
    n1 = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    printf("Sum of each digits of %d raised to power 3 is %d\n", n1, sum);

    if(n1 == sum)
    {
        printf("It is an Armstrong number");
    }
    else
    {
        printf("It is not an Armstrong number");
    }
}