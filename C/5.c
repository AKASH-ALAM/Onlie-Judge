#include <stdio.h>
int main ()
{
    int m = 0, n = 5, i;
    for(i = 1; i <= 10; i = i + 1){
        m = m + n;
        printf("%d x %d = %d\n", n, i, m);
    }

    return 0;

}
