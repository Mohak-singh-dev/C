#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Highest : %d\n",(a>b)? a:b);
    printf("Lowest : %d",(a<b)? a:b);
}