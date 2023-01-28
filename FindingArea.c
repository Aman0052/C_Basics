#include<stdio.h>

float areasq(float side){
    return side*side;
}
float areacr(float r){
   return 3.14*r*r;
}
float arearec(float width,float length){
   return width*length;
}
#include<stdio.h>
int main()
{
float side,r,width,length;
printf("enter the value of side:\n");
scanf("%f", &side);

printf("enter the value of r:\n");
scanf("%f", &r);

printf("enter the value of width:\n");
scanf("%f", &width);

printf("enter the value of length:\n");
scanf("%f", &length);

printf("area of square is %f:\n",areasq(side));

printf("the area of circle is %f:\n", areacr(r));

printf("area is %f:\n",arearec(width,length));

return 0;
}