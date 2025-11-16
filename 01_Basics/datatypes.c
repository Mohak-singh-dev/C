#include<stdio.h>
void main(){
    int a;
    float b;
    double c;
    char d;
    printf("Enter int : ");
    scanf("%d",&a);
    printf("Enter float : ");
    scanf("%f",&b);
    printf("Enter double : ");
    scanf("%lf",&c);
    printf("Enter char : ");
    scanf(" %c",&d);
    printf("Int : %d\n",a);
    printf("float : %.2f\n",b);
    printf("double : %.2lf\n",c);
    printf("character : %c\n",d);
}