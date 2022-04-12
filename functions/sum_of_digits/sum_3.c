//no Return, no Arguments
#include<stdio.h>
#include<conio.h>

//function declaration
void sam();

int main()
{
    sam();      //calling function
    
    return 0;
}

//funtion definition
void sam()
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

    printf("The sum of digits of the given number is : %d", sum);
}