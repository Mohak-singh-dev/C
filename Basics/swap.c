#include<stdio.h>
void main(){
    int a,b,sum=0;
    printf("Enter first and second number : ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    a=sum-a;
    b=sum-b;
    printf("After swapping : %d %d\n",a,b);
}