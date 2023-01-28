#include<stdio.h>
void slicing(char arr[],int n ,int m){
    char newstr[100];
    int j=0;
    for(int i=n ; i<=m; i++, j++){
        newstr[j]=arr[i];
    }
    newstr[j]='\n';
    puts(newstr);
}
int main()
{
char str[]="Helloworld";
slicing(str, 3, 6);
return 0;
}