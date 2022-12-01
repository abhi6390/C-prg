#include<stdio.h>
#include<math.h>
int main()
{
int i, n;
float a[50], *p, sum=0, sd=0, md, mean;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("enter the numbers: ");
for(i=0;i<n;i++)
scanf("%f", &a[i]);
p=a;
for(i=0;i<n;i++){
    sum=sum+*p;
    p++;
}
mean=sum/n;
p=a;
for(i=0;i<n;i++){
    md=md+pow((*p-mean),2);
    p++;
}
sd=sqrt(md/n);
printf("The sum is %f \n",sum );
printf("The mean is %f \n",mean );
printf("The sd is %f \n",sd );

}