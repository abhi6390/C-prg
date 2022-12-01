#include<stdio.h>
int main()
{
int a[50],i,n;
printf("How many elements:\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Reverse of the given array is  \n");
for(i=n-1;i>=0;i--){
    printf(" %d ",a[i]);
}
return 0;
}
