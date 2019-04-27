#include <stdio.h>
int main ()
{
    int dt;
    printf("Please enter:\n");
    scanf("%d",&dt);
    if( dt >= 0 && dt <= 9 ) {
        printf("This is digit.\n");
    }
    else {
        printf("This is not digit.\n");
    }
    return 0;
}
