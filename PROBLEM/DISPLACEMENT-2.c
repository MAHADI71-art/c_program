#include <stdio.h>
#include <math.h>

int main(void)
{
    double u, a, t, S;

    printf("Initial Velocity = ");
    scanf("%lf", &u);

    printf("Acceleration = ");
    scanf("%lf", &a);

    printf("Time = ");
    scanf("%lf", &t);

    S = u * t + 0.5 * a * pow(t, 2);// t*t দেওয়া সবচেয়ে উত্তম

    printf("Displacement = %.2lf\n", S);

    return 0;
}