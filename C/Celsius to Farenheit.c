#include <stdio.h>
int main ()
{
    int c, f;
    printf("Enter the temperature in celsius :" );
    scanf("%d", &c);
    f = (c * 1.8) + 32;
    printf("Temperature in farenheit is : %d\n", f);
    return 0;
}
