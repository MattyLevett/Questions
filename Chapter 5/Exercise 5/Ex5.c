#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int r=5;
    double Volume=(4*r*r*r/3)*3.14159;
    double SurfaceArea=(4*r*r)*3.14159;
    printf("Radius is %d\nVolume is %.2f\nSurface area is %.2f\n",r,Volume,SurfaceArea);

    return 0;
}