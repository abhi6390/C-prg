//print n natural numbers
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d \n", i+1);
    }
    return 0;
    }*/


#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter n");
    scanf("%d",&n);
    while(i<n){
    printf("%d\n",i+1);
    i++;
    }
    return 0;
}