#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks obtained\n");
    scanf("%d",&marks);
    switch (marks/10)
    {
    case 10:
    case 9:
    printf("Grade A");
        break;
    
    case 8:
    case 7:
    printf("Grade B");
    break;

    case 6:
    case 5:
    printf("Grade C");
    break;
    
    default:
    printf("Grade F");
        break;
    }
    return 0;
}