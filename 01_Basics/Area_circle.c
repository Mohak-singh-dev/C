#include<stdio.h>
#include<math.h>
void main(){
    float radius,area;
    printf("Enter radius of circle : ");
    scanf("%f",&radius);
    area= M_PI *radius*radius;
    printf("%.2f",area);
}