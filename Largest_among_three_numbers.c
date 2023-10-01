#include <stdio.h>

int main()
 {
    int a, b, c;
    printf("Enter the three Numbers:-");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
       {
        printf("%d is largest of the three numbers.\n", a);
       }
    else if (b > a && b > c)
       {
        printf("%d is largest of the three numbers.\n", b);
       }
    else if (c > a && c > b)
       {
        printf("%d is largest of the three numbers.\n", c);
       }
    else
       {
        printf("No distinct number.\n");
       }
       return 0;
 }