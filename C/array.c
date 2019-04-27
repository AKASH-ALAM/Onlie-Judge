#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int x[n];
    for(i = 0; i < n; i++){
        scanf("%d",&x[i]);
    }
    for(i = 0; i < n; i++){
        printf("%d ",x[i]);
    }
}
