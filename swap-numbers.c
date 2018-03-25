#include <stdio.h>

int main()
{
    int a, b;    		// declare three variables
    printf("Enter two numbers..."); // ask user to enter two integers
    scanf("%d%d",&a,&b);       // reads two integers through keyboard
    printf("The numbers before swapping are a and b: %d %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The numbers after swapping are a and b: %d %d\n", a, b); // prints the swapped numbers
}

