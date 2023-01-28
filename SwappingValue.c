#include<stdio.h>

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x= *y;
    *y=temp;
    return;
}
int main()
{
    int a=34,b=74;
    printf("%d and %d", a,b);
    swap(&a, &b);
    printf("%d and %d", a,b);

return 0;
}