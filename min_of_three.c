#include<stdio.h>
int main()
{
    int a, b, c, min;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    min = c;
    if (a<min)min = a;
    if (b<min)min = b;
    printf("minimum = %d\n", min);
}