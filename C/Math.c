#include <stdio.h>
int main()
{
    double x, y, x_plus_y, x_minus_y;
    printf("Enter the value of x + y: ");
    scanf("%lf", &x_plus_y);
    printf("Enter the value of x - y: ");
    scanf("%lf", &x_minus_y);
    x = (x_plus_y + x_minus_y);
    y = (x_plus_y - x_minus_y);
    printf("x = %.2lf, y = %.2lf\n", x, y);
    return 0;
}

