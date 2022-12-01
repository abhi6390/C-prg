#include<stdio.h>
int isprime(int);
int main()
{
    int n, result;
    printf("Number: ");
    scanf("%d",&n);
    result=isprime(n);
    if(result==1){
        printf("pRIME NUMBER \n", n);
}
    else{
        printf("Not prime\n", n);
}
}
int isprime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}    
    
