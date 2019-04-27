//24.Write a C program to check whether a year is leap year or not.

#include <stdio.h>
int main()
{
    int y;
    printf("Please Enter a Year: \n");
    scanf("%d",&y);
    if((y % 4 == 0) && (y % 100 !=0 ) || (y % 400 == 0)){
        printf("The year is leap year: \n");
    }
    else{
        printf("The year is common year.\n");
    }
    return 0;
}
