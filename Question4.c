#include<stdio.h>
int main(){
    int n=1;
    int a;
    printf("Enter first number:");
    scanf("%d", &a);
    int b;
    printf("Enter the second number: ");
    scanf("%d",&b);
    switch(n){
        case 1: printf("Sum=%d\n",a+b);
        case 2: printf("Difference = %d\n",a-b);
        case 3: printf("Multiplication=%d\n",a*b);
        case 4: printf("division=%d\n",a/b);
        case 5: printf("On division remainder will be = %d\n ",a%b);
        break;
        default : printf("No case\n");
    }
    return 0;
}