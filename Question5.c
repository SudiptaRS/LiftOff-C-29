#include<stdio.h>
int main(){
float r;
printf("Enter the radius of the circle:");
scanf("%f",&r);
printf("The diameter is : %f\n",2*r);
const pi=3.14;
float c=2*pi*r;
printf("The circumference is : %f\n",c);
float a=pi*r*r;
printf("The area is : %f\n",a);

    return 0;
}