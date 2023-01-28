// Finding sum and average
#include<stdio.h>
int sum(int *a,int *b){
    int sum;
    sum=*a+ *b;
    return sum;
}
int average(int *a,int *b){
    int avg;
    avg=(*a+*b)/2;
    return avg;
}
int main()
{
int a=10,b=20;
printf("the value of sum is %d",sum(&a,&b));
printf("the value of average is %d",average(&a,&b));
return 0;
}