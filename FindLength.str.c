#include<stdio.h>
#include<string.h>

void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
}
int printlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
int main()
{
    char name[50];
    printf("enter your name : ");
    fgets(name,50,stdin);
    printstring(name);
    printf("the length of your string is %d ", printlength(name));

return 0;
}