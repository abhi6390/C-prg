#include<iostream>
using namespace std;
int main(){

int n, sum=0, r, d, temp;
cin>>n;
temp=n;
while(n>0){
    r=n%10;
    sum=sum*10+r;
    n=n/10;
}
if(temp==sum)
cout<<"yes"<<endl;
else
cout<<"No"<<endl;

return 0;
}