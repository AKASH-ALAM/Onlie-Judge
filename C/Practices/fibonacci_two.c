#include <stdio.h>
int main(){
    int n, i = 1, f1 = 0, f2 = 1, f = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    do{
        printf("%d ",f);
        f = f1 + f2;
        f2 = f1;
        f1 = f;
    } while(f <= n);

    return 0;
}