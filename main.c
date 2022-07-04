#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r,a,h;
    printf("Give the value of r:");
    scanf("%lf",&r);
    printf("Give the value of h:");
    scanf("%lf",&h);
    a=2*3.1415*r*r+2*3.1415*h*r;

    printf("The area is :%lf\n",a);
    return 0;
}
