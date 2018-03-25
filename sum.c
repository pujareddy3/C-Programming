#include <stdio.h>

int main()
{
    int a=0,b=0,sum=0;    		// declare three variables
    printf("Enter two numbers..."); // ask user to enter two integers
    scanf("%d%d",&a,&b);       // reads two integers through keyboard
    sum=a+b;                   // calculate the sum
    printf("The sum is %d",sum); // prints the sum
    return 0;
}
