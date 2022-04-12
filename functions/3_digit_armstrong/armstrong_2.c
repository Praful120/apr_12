// //with Return, without Argument
// #include<stdio.h>
// #include<conio.h>

// int arm();

// int main(){
//     int y;

//     y = arm();

//     printf("Sum of each digits of %d raised to power 3 is %d\n", x, y);

//     if(x == y)
//     {
//         printf("It is an Armstrong number");
//     }
//     else
//     {
//         printf("It is not an Armstrong number");
//     }

// return 0;
// }

// int arm()
// {
//     int n, n1, rem, sum = 0;
//     printf("Enter a three digit integer : ");
//     scanf("%d",&n);
//     n1 = n;

//     while(n != 0)
//     {
//         rem = n % 10;
//         sum = sum + (rem * rem * rem);
//         n = n / 10;
//     }
// return sum;
// }