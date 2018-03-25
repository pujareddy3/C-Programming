#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter number a : ", &a);
    scanf("%d", &a);
    printf("Enter number b : ", &b);
    scanf("%d", &b);
    printf("Numbers before swapping are a = %d and b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Numbers after swapping are a = %d and b = %d\n", a, b);
    return 0;
}

