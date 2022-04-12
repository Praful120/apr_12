//without Return, without Argument
#include<stdio.h>
#include<conio.h>

void arm();

int main(){
    
    arm();

    return 0;
}

void arm()
{
    int n, n1, rem, sum = 0;

    printf("Enter a three digit integer : ");
    scanf("%d",&n);
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