//Fibonacchi Series - 1, 1, 2, 3, 5, 8, 13, 21..............
                //       1, 2, 3, 4, 5,  6,   7........
#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{
    if (n < 2)
    {
        return 1;                    //This fibonacchi series is new feature
    }
    return fib(n - 2) + fib(n - 1); //learn this term
}
//fib (5)
//fib(4) + fib (3)
//fib(2) + fib(3) + fib(2) +fib(3) //shayad fib(1)

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);

   printf("The term in fibonacci sequence at position %d is %d" , a, fib(a));
    return 0;
}