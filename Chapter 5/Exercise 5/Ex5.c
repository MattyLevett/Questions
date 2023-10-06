#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int r=5;
    float Volume=(4*M_PI*r*r*r/3);
    float SurfaceArea=(4*M_PI*r*r);
    printf("Radius is %d\nVolume is %.2f\nSurface area is %.2f\n",r,Volume,SurfaceArea);

    return 0;
}