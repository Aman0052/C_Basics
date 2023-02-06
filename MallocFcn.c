#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
//printf("The size of int in my pc is %d",sizeof(int));
ptr=(int*)malloc(6 * sizeof(int));
for(int i=0;i<6;i++){
    printf("Enter the value of %d element: ",i);
    scanf("%d",&ptr[i]);
}
printf("\n");
for(int i=0;i<6;i++){
    printf("The value of %d element: %d\n",i,ptr[i]);
}
return 0;
}