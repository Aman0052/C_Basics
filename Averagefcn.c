#include<stdio.h>
int average(int a,int b,int c){
    int result;
    result=(a+b+c)/3;
    return result;
}
int main()
{
    int a,b,c,d;
    printf("enter a value of a\n");
    scanf("%d", &a);

    printf("enter a value of b\n");
    scanf("%d", &b);

    printf("enter a value of c\n");
    scanf("%d", &c);

    d=average(a,b,c);

    printf("the average of three numebr is %d\n",d);

return 0;
}