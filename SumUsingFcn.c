#include<stdio.h>
int sum(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
    sum=sum+i;
}
return sum;
}
int main()
{
int n,result;
printf("enter the value of n\n");
scanf("%d", &n);

result=sum(n);

printf("the value of sum is %d", result);
return 0;
}