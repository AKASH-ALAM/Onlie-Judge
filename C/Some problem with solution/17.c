//17.Write a C program to enter P, T, R and calculate Simple Interest.
#include <stdio.h>
int main()
{
    float a,t,r,si;
    printf("Enter amount time and rate.\n");
    scanf("%f%f%f",&a,&t,&r);
    si = (a*t*r)/100;
    printf("Simple Interest: %.2f\n",si);
    return 0;
}
