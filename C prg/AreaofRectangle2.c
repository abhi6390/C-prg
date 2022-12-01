#include<stdio.h>
int main()
{
    int length, breadth;
    printf("The lenght of the rectangle is\n");
    scanf("%d", &length);

    printf("The breadth of the rectangle is\n");
    scanf("%d", &breadth);

    printf("Area of rectangle is %d", length*breadth);
    return 0;
}