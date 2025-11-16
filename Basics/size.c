#include<stdio.h>
void main(){
    int integer;
    long L_int;
    long long LL_int;
    signed int S_int;
    unsigned int U_int;
    float flt;
    double dble;
    long double L_dble;
    char character;
    printf("Integer : %d\n",sizeof(integer));
    printf("Long Integer : %d\n",sizeof(L_int));
    printf("Long Long Integer : %d\n",sizeof(LL_int));
    printf("Signed Integer : %d\n",sizeof(S_int));
    printf("Unsigned Integer : %d\n",sizeof(U_int));
    printf("Float : %d\n",sizeof(flt));
    printf("Double : %d\n",sizeof(dble));
    printf("Long Double : %d\n",sizeof(L_dble));
    printf("Character : %d\n",sizeof(character));
}