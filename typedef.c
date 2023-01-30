#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salery;
    char name[10];

}emp;
void show(struct employee emp){
    printf("%d is the code of employee\n",emp.code);
    printf("%f is the salery of employee\n",emp.salery);
    printf("%s is the name of employee\n",emp.name);

}
int main()
{
    emp e1;
    emp *ptr;
    ptr=&e1;

    
    ptr->code=90;
    ptr->salery=25.5;
    strcpy(ptr->name,"Aman");
    printf("%d\n", e1.code);
     printf("%f\n", e1.salery);
      printf("%s\n", e1.name);
      show(e1);
return 0;
}