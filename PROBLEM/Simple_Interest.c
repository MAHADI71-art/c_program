#include <stdio.h>
/*Simple Interest = (Principal × Rate × Time) / 100
  SI = (P × R × T) / 100
  
  SI = Simple Interest (সরল সুদ)
  P = Principal (মূলধন)
  R = Rate (বার্ষিক সুদের হার)
  T = Time (সময়, বছর)*/
int main(void)
{
    double P, R, T, SI;

    printf("Principal = ");
    scanf("%lf", &P);

    printf("Rate=");
    scanf("%lf", &R);

    printf("Time =");
    scanf("%lf", &T);

  SI = (P * R * T)/100;

  printf("Simple Interest = %lf", SI);

  return 0;
}
