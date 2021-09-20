#include <stdio.h>
int main()
{
    float x , y ,z ,a,b,c,d,e,f,g, xbar;
    scanf_s("%f%f%f%f%f%f%f%f%f%f", &x, &y, &z, &a, &b, &c, &d, &e, &f, &g);
    xbar = (x + y + z + a + b + c + d + e + f + g) / 10;
    printf("%f", xbar);
    return 0;
}