#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int  A, B;
    A = 60;
    B = 13;
    printf("A=0x%02X, B=0x%02X\n",A,B);

    A=B++;
    printf("A=0x%02X, B=0x%02X\n",A,B);

    A=--B;
    printf("A=0x%02X, B=0x%02X\n",A,B);

    A=B--;
    printf("A=0x%02X, B=0x%02X\n",A,B);

    return 0;
}