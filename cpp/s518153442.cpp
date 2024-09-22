#include "stdio.h"

int main(float r)
{
    float len;
    float s;
    float pai=3.14;

    if((r < 0) || (r > 10000))
    {
        return 0;
    }

    s = r*r*pai;
    len = 2.0*r*pai;

   printf("%f %f\n", s, len);

   return 0;
}
