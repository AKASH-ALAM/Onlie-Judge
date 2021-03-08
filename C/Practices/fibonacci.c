#include <stdio.h>
int main(){
    printf("Print the nth fibonacci number\n");
    int n;  
    scanf("%d", &n);
    int i, a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for(i = 0; i < n-2; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    } printf("\n");
    return 0;
}