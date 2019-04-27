//19.Write a C program to find maximum between two numbers.
#include <stdio.h>
int main()
{
    float a,b;
    printf("Please Enter any two number: \n");
    scanf("%f%f",&a,&b);
    if(a>b){
        printf("The Maximum number is: %.2f\n",a);
    }
    else{
        printf("The Maximum number is: %.2f\n",b);
    }
    return 0;
}
