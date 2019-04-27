#include <stdio.h>
int main(){
    float a, b, c;
    printf("Enter the value of A: ");
    scanf("%f",&a);
    printf("Enter the value of B ");
    scanf("%f",&b);
    c = a / b;
    printf("%.2f / %.2f = %.2f",a,b,c);
    return 0;

}
