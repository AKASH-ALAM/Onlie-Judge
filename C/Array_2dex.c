#include <stdio.h>
int main()
{
    int table[10][10];
    int i, j, n;
    for(i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            table[i - 1][j - 1] = i * j;
        }
    }
    scanf("%d", &n);
    for(i = 1; i <= 10; i++){
     printf("%d x %d = %d\n", n, i, table[n - 1][i - 1]);
    }

    return 0;
}
