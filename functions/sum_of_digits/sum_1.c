//with Return, with Arguments
#include<stdio.h>
#include<conio.h>

//function declaration
int sam(int a);

int main()
{
    int x, y;
    printf("Enter an integer : ");
    scanf("%d",&x);

    //calling function
    y = sam(x);
    
    printf("The sum of digits of the given number is : %d", y);

return 0;
}

//funtion definition
int sam(int n)
{
    int rem, sum = 0;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
return sum;
}