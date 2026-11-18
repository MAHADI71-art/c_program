#include <stdio.h>
/*t সময় এ অতিক্রান্ত দূরত্ব S = vt
 2t  .  . . . . . . . .  S = v2t = 2tv
 S = ut + 0.5 at^2
 V = u + at
 2t সময় এ অতিক্রান্ত দূরত্ব
  S = u2t + 0.5 a(2t)^2
    = 2tu + 0.5 4at^2
    = 2tu + 2at^2
    = 2t(u + at)
    = 2tv*/

int main(void)
{
    double v, t;

    printf("Velocity=");
    scanf("%lf", &v);

    printf("Time=");
    scanf("%lf", &t);

    printf("Distance Traveled =%lf", 2 * v * t);

    return 0;
}