#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int r=5;
    float Volume=4*M_PI*r*r*r/3;
    float SurfaceArea=4*M_PI*r*r;
    printf("Radius is %d\nVolume is %f\nSurface area is %f\n",r,Volume,SurfaceArea);

    return 0;
}