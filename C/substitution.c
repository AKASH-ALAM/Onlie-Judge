#include <stdio.h>
int main(){
    int a1,b1,c1,a2,b2,c2,x,y;
    scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
    x = ((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1));
    y = ((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1));
    printf("X is : %d\nY is : %d\n",x,y);
    return 0;
}
