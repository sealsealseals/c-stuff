#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("Enter first integer: \n");
    scanf("%d", &n1);

    printf("Enter second integer: \n");
    scanf("%d", &n2);

    printf("Enter third integer: \n");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("First integer, %d is the largest", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("Second integer, %d is the largest", n2);
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("Third integer, %d is the largest", n3);
    }
    else if (n1 == n2 && n1 == n3)
    {
        printf("All integers are equal");
    }
    else if (n1 == n2)
    {
        printf("Integer 1 and 2 are equal");
    }
    else if (n1 == n3)
    {
        printf("Integer 1 and 3 are equal");
    }
    else if (n2 == n3)
    {
        printf("Integer 2 and 3 are equal");
    }
}