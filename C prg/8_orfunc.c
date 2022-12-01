#include<stdio.h>
int main()
{
    int phy, chem, mat;
    float total;
    printf("Enter Physics marks\n");
    scanf("%d",&phy);

    printf("Enter Chemistry marks\n");
    scanf("%d",&chem);

    printf("Enter Maths marks\n");
    scanf("%d",&mat);

    total=(phy+chem+mat)/3;

    if((total<40)|| phy<33|| chem<33|| mat<33){
            printf("Your percentage is %f and you have failed",total);
    }
     else{
            printf("Your percentage is %f and you have passed",total);
        }
    return 0;


}