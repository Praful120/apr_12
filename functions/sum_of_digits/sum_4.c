//with Return, no Arguments
#include<stdio.h>
#include<conio.h>

//function declaration
int sam();

int main()
{
    int y;

    //calling function
    y = sam();

    printf("The sum of digits of the given number is : %d", y);

return 0;
}

//funtion definition
int sam()
{
    int n, rem, sum = 0;
    printf("Enter an integer : ");
    scanf("%d",&n);

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
return sum;
}