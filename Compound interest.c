#include <stdio.h>
#include <math.h>

int main() {
    double A, P, R, N, T;

    printf("To get the compound interest:\n");
       printf("Enter principal amount: ");
         scanf("%lf", &P);

    printf("Enter rate: ");
       scanf("%lf", &R);

    printf("Enter No of compounding times per anum : ");
       scanf("%lf", &N);

    printf("Enter No of years: ");
    scanf("%lf", &T);

    A = P * pow(1 + R / N, N * T);

    printf("The compound interest is %.2f\n", A);

    return 0;
}