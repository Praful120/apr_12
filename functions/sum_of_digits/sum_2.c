//no Return, with Arguments
#include<stdio.h>
#include<conio.h>

//function declaration
void sam(int a);

int main()
{
    int x;
    printf("Enter an integer : ");
    scanf("%d",&x);

    //calling function
    sam(x);

return 0;
}

//funtion definition
void sam(int n)
{
    int rem, sum = 0;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum of digits of the given number is : %d", sum);
}