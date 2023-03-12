#include<stdio.h>
int main(){
    int a ;
    printf("Enter the first number:");
    scanf("%d",&a);
    int r;
    int sum=0;
    do{
        r=a%10;
        sum=sum+r;
        a=a/10;
    }while (a!=0);
   printf("Sum of the digits of the number = %d\n",sum);
    return 0;
}