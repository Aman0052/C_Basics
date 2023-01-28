#include<stdio.h>
int countvowels(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
    if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' || arr[i]=='u'){
        count++;
    }
    }
    return count;
}
void checkch(char arr[], char ch){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==ch){
            printf("character is present in string!");
            return;
        }
    }
    printf("character is not present in string!");
}
int occurence(char arr[], char ch){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[]="aman chaudhary";
    char ch='o';
    checkch(name,ch);
    printf("\n");
    printf("%d vowels are present in name string ",countvowels(name));
    
return 0;
}