#include <stdio.h>
#include <stdlib.h>
int main(){
    double *array = (double *) malloc (sizeof(int) * 8);
    printf("-------CGPA Calculation system-------\nInput your Semesters CGPA from 1st to 8th serially\n");
    for(int i = 0; i < 8; i++){
        scanf("%lf",(array + i));
    }
    double a, b, c, d, e, f, g, h;

    a = (*array * 5) / 100;
    b = (*(array+1) * 5) / 100;
    c = (*(array+2) * 5) / 100;
    d = (*(array+3) * 10) / 100;
    e = (*(array+4) * 15) / 100;
    f = (*(array+5) * 20) / 100;
    g = (*(array+6) * 25) / 100;
    h = (*(array+7) * 15) / 100;
    
    double total = a + b + c + d + e + f + g + h;
    printf("Your CGPA is : %.2lf", total);
    return 0;
}