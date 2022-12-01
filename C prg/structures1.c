#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    float marks;
    char branch[20];
};
int main()
{
struct student s[20];
int i, n;
printf("Enter the number of students: ");
scanf("%d", &n);
printf("Enter the:\n Name, Rollno,  Marks &  Branch ");
for(i=0;i<n;i++){
scanf("%s%d%f%s", s[i].name, &s[i].rollno, &s[i].marks, s[i].branch);
}
printf("Details are:\n");
for(i=0;i<n;i++){
printf("Name: %s \t Rollno: %d \t Marks: %f \t Branch: %s ", s[i].name, s[i].rollno, s[i].marks, s[i].branch);
}
}
//incomplete