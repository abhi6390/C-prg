#include<stdio.h>
int main()
{
    int weeknumber;
    printf("Enter the week number\n");
    scanf("%d",&weeknumber);
    switch(weeknumber)
    {
        case 1:
        printf("The day is monday");
        break;

        case 2:
        printf("The day is tuesday");
        break;

        case 3:
        printf("The day is wednesday");
        break;

        case 4:
        printf("The day is thursday");
        break;

        case 5:
        printf("The day is friday");
        break;

        case 6:
        printf("The day is saturday");
        break;

        case 7:
        printf("The day is Sunday");
        break;

        default:
        printf("Invalid input");


        
    }
    return 0;
}