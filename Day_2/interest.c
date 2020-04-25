#include <stdio.h>
#include <math.h> 

float compoundInterest(int time, float principal, float rate, int n) {
    float amount = principal * pow(1 + rate / n, n * time);
    float CI = amount - principal;
    return CI;
}

void main(void) {
    float principal, rate, SI, CI;
    int time;

    // Taking input of required values
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%d", &time);

    // Calculating the Simple Interest

    SI = principal * rate * time;
    printf("The Simple Interest is: %f\n", SI);

    // Calculating the Compound Interest for different values of number of times the compounding is done in a year

    // When compounding is done annually
    CI = compoundInterest(time, principal, rate, 1);
    printf("Compound Interest when compounding is done annually:\t%f\n", CI);

    // When compounding is done semi-annually
    CI = compoundInterest(time, principal, rate, 2);
    printf("Compound Interest when compounding is done semi-annually:\t%f\n", CI);

    // When compounding is done quarterly
    CI = compoundInterest(time, principal, rate, 4);
    printf("Compound Interest when compounding is done quarterly:\t%f\n", CI);

    // When compounding is done monthly
    CI = compoundInterest(time, principal, rate, 12);
    printf("Compound Interest when compounding is done monthly:\t%f\n", CI);

    // When compounding is done daily
    CI = compoundInterest(time, principal, rate, 365);
    printf("Compound Interest when compounding is done daily:\t%f\n", CI);
}