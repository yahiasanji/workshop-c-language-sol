#include <stdio.h>
#include <math.h>

int main()
{

float x1=0;
float x2=15.5;
float y1=10;
float y2=0;
float z1=0;
float z2=0;
float distance;

distance  = sqrt(pow(x2-x1,2) + pow(y2-x1,2) + pow(z2-z1,2)); 

printf("La distance est : %.2f\n", distance);
}
