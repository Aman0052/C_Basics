#include<stdio.h>
#include<string.h>

struct data{
    int marks;
    int rollNo;
    char name[20];
};
int main()
{
    struct data student[4];
    student[0].marks=80;
    student[0].rollNo=56;
    strcpy(student[0].name,"Aman");

    student[1].marks=20;
    student[1].rollNo=66;
    strcpy(student[1].name,"Bobby");

    student[2].marks=30;
    student[2].rollNo=76;
    strcpy(student[2].name,"Imran");

    printf("the name of stdent 1 is : %s\n",student[0].name);
    printf("the roll no of stdent 1 is : %d\n",student[0].rollNo);
    printf("the marks of stdent 1 is : %d\n",student[0].marks);
    printf("\n");

    printf("the name of stdent 2 is : %s\n",student[1].name);
    printf("the roll no of stdent 2 is : %d\n",student[1].rollNo);
    printf("the marks of stdent 2 is : %d\n",student[1].marks);
    printf("\n");

    printf("the name of stdent 3 is : %s\n",student[2].name);
    printf("the roll no of stdent 3 is : %d\n",student[2].rollNo);
    printf("the marks of stdent 3 is : %d\n",student[2].marks);

return 0;
}