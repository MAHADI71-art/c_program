#include <stdio.h>
/*Displacement of an Object
Displacement = (Initial Velocity × Time) + (1/2 × Acceleration × Time²)
s = ut + (1/2)at²
Where,
s = Displacement (সরণ)
u = Initial Velocity (প্রাথমিক বেগ)
a = Acceleration (ত্বরণ)
t = Time (সময়)
*/
int main(void)
{
    double u, t, a, S;

    printf("Initial Velocity = ");
    scanf("%lf", &u);

    printf("Acceleration = ");
    scanf("%lf", &a);

    printf("Time =");
    scanf("%lf", &t);

    S = u*t + 0.5 * a * t * t ;

    printf("Displacement = %lf", S);

    return 0;
}