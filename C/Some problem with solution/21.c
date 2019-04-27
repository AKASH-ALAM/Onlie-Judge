//21.Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a > 0){
        printf("The number is Positive: %.2f\n",a);
    }
    else if(a < 0 ){
        printf("The number is Negative: %.2f\n",a);
    }
    else if(a == 0){
        printf("The number is Zero: %.2f\n",a);
    }
    return 0;
}
