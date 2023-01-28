#include<stdio.h>  
  
int tables(int num){
    {  
    int i;  
  
    for(i = 1; i <= 10; i++)  
    {  
        printf("%d * %d = %d\n", num, i, num*i);  
    }  
}  
}   
int main()  
{  
    int num; 
    int result; 
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);  
  
    result=tables(num);
  
    return 0;  
}  