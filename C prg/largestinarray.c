#include<stdio.h>
int main()
{
int a[50], n, i, j, largest;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
largest=a[0];
for(i=1;i<n;i++){
    if(a[i]>largest)
    {
        largest=a[i];
    }
}
    printf("Largest=%d",largest);
  
return 0;
}