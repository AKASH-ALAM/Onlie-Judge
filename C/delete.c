#include <stdio.h>
int main(){
    int x[100],n,i,p,v;
    printf("Please input Array size.\n");
    scanf("%d",&n);
    for(i = 0; i < n ; i++){
        scanf("%d",&x[i]);
    }
    printf("please Input your position and then value.\n");
    scanf("%d%d",&p,&v);
    for(i = n - 1; i <= p - 1; i++){
        x[i-1]=x[i];
    }

    printf("Your array is:\n");
    for(i = 0; i < n+1; i++){
        printf("%d\n",x[i]);
    }
    return 0;
}
