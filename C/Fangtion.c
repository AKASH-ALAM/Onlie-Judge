#include <stdio.h>
double add( double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
int main()
{
    double c = add(7, 5);
    printf("%lf",c);
    return 0;
}
