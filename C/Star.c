#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i < 20; i++){
        for(j = 1; j < i + 1; j = j + 1){ // (i++ and j = j + 1) same
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
