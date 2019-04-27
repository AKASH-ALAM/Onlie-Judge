#include <stdio.h>
int minimum(int a, int b)
{
    int temp;
    if(a < b){
        temp = a;
    }
    else {
        temp = b;
    }
    return temp;
}
int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp = minimum(a,b);
    printf("%d",&a);


}
