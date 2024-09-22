#include "stdio.h"

int main(doubler)
{
    double len;
    double s;
    double pai=3.141592;

    if((r < 0) || (r > 10000))
    {
        return 0;
    }

    s = r*r*pai;
    len = 2.0*r*pai;

   printf("%lf %lf\n", s, len);

   return 0;
}
