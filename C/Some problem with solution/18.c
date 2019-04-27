//18.Write a C program to enter P, T, R and calculate Compound Interest.

#include <stdio.h>
int main()
{
    float a,t,r,ci;
    printf("Enter amount time and rate.\n");
    scanf("%f%f%f",&a,&t,&r);
    ci = a*pow(1+(r/100),t);
    printf("Compound Interest: %.2f\n",ci);
    return 0;
}
