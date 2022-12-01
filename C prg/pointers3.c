#include<stdio.h>
#include<math.h>
int main()
{
int i ,n;
float mean, sum, sd, *p, md=0, inp[50];
printf("Enter the number of elements \n");
scanf("%d", &n);
printf("Enter the elements\n");
for(i=0;i<n;i++){

    scanf("%f",&inp[i]);
}

p=inp;
for(i=0;i<n;i++)
{
    sum=sum+*p;
    p++;
}
mean=sum/n;
p=inp;
for(i=0;i<n;i++)
{
    md=md+pow((*p-mean),2);
    p++;
}
sd=sqrt(md/n);
printf("Sum= %f\n",sum);
printf("Mean=%f \n",mean);
printf("Std= %f\n",sd);

}