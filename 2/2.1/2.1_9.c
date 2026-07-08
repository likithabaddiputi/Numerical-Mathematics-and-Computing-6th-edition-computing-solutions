#include<stdio.h>
int main()
{
    float sp = 1.0/3.0;
    printf("%.16f",sp);
}

/*
1/3 = [0.01010101010101010101010101...]2
Rounded macine representation : [1.01010101010101010101011]2 x 2^-2
*/
