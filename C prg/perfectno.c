#include<stdio.h>
int per(int);
int main()
{
    int n;
    int rem, sum=0, i;
    printf("Enter the number\n");
    scanf("%d", &n);
   sum=per(n);
   if(sum==n){
       printf("%d is a perfect number\n", n);
   }
   else{
       printf("%d is not a perfect number\n", n);
   }
}


int per(int n){
    int rem, sum=0, i;
   for( i=1; i<n; i++){
   rem=n%i;
   if(rem==0)
   {
       sum=sum+i;   
   }
   }
    return (sum); 
}
 
 
 
 
 

 
 
 
 
 
 
 