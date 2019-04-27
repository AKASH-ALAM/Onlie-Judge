#include <stdio.h>
int main ()
{
    int marks;
    char grade;
    printf("Please enter a marks.");
    scanf("%d", &marks);
    if( marks >= 80 ) {
    grade = 'A+';

    /* char a grade hosche akta
    variable , so akta variable a aker odhek
    character rakha jaina, ata akta programming
    yer bug .Example hesabe dekhalam.*/

    printf("Your GP is %c.\n",grade);
    }
    else if( marks >= 75 ) {
    grade = 'A';
    printf("Your GP is %c.\n",grade);
    }
    else if( marks >= 70 ) {
    grade = 'A-';
    printf("Your GP is %c.\n",grade);
    }
    else if( marks >= 65 ) {
    grade = 'B+';
    printf("Your GP is %c.\n",grade);
    }
    else if( marks >= 60 ) {
    grade = 'B-';
    printf("Your GP is %c.\n",grade);
    }
    return 0;
}
