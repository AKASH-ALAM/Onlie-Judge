#include <stdio.h>
int main(){
    int a = 10, b = 5, sum = a + b, min = a - b, mul = a * b, div = a / b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,min);
    printf("%d * %d = %d\n",a,b,mul);
    printf("%d / %d = %d\n",a,b,div);
    return 0;
}
