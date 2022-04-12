//Armstrongs : 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371,
// 407, 1634, 8208, 9474, 54748, etc.

//with Return, with Argument
#include<stdio.h>
#include<conio.h>

int arm(int a);

int main(){
    int x, y;
    printf("Enter a three digit integer : ");
    scanf("%d",&x);

    y = arm(x);

    printf("Sum of each digits of %d raised to power 3 is %d\n", x, y);

    if(x == y)
    {
        printf("It is an Armstrong number");
    }
    else
    {
        printf("It is not an Armstrong number");
    }

    return 0;
}

int arm(int n)
{
    int n1, rem, sum = 0;
    n1 = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    return sum;
}