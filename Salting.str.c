#include<stdio.h>
#include<string.h>
void salting(char arr[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,arr);
    strcat(newpass,salt);
    puts(newpass);
}
int main()
{
char password[100];
printf("enter your password : ");
scanf("%s", password);
salting(password);
return 0;
}