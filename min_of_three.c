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

    if (a<b && a<c){
        printf("minimum = %d\n", a);
    }
    else if (b<a && b<c){
        printf("minimum = %d\n", b);
    }
    else {
        printf("Minimun = %d\n", c);
    }

    return 0;
}