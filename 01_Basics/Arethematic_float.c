#include<stdio.h>
void main(){
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("Sum : %.2f\n",a+b);
    printf("Difference : %.2f\n",a-b);
    printf("Product : %.2f\n",a*b);
    printf("Division : %.2f\n",a/b);
    //printf("Remainder : %.2f\n",a%b);// # On float % function does not work
}