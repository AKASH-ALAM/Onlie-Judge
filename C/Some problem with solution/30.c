//30.Write a C program to input month number and print number of days in that month.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter month number.\n");
    scanf("%d",&n);
    if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
        printf("The month is 31 days.\n");
    }
    else if(n == 2){
        printf("The month is 28/29 days.\n");
    }
    else if(n == 2){
        printf("The month is 30 days.\n");
    }
    else if(n == 4 || n == 6 || n == 9 || n == 11){
        printf("The month is 30 days.\n");
    }
    else{
        printf("Something Wrong.\n");
    }
    return 0;
}
