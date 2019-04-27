#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value of A : ");
    scanf("%f",&a);
    printf("Enter the value of B : ");
    scanf("%f",&b);
    printf("And then C : ");
    scanf("%f",&c);
    if (a > b && a > c){
        printf("A is Grater then B and C.\n");
    }
    else if (b > a && b > c){
        printf("B is Grater then A and C.\n");
    }
    else{
        printf("C is Grater then A and B.\n");
    }
    return 0;
}
