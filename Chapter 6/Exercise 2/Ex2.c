#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int  A, B, R;
    A = 60;
    B = 13;
    R = A + B;
    printf("A=%d, B=%d, R=%d\n",A,B,R);
    A=B++;
    R = A + B;
    printf("A=%d, B=%d, R=%d\n",A,B,R);
    A=--B;
    R = A + B;
    printf("A=%d, B=%d, R=%d\n",A,B,R);
    A=B--;
    R = A + B;
    printf("A=%d, B=%d, R=%d\n",A,B,R);
    return 0;
}