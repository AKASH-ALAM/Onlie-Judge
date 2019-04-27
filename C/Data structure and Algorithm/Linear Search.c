#include <stdio.h>
int LinearSearch(int arry[], int n, int m){
    int i;
    for(i = 0; i < n; i++){
        if(arry[i] == m)
            return i+1;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arry[] = {2,1,44,7,8,3,4,5,6,9,10};
    int m = 9;
    if(int find = LinearSearch(arry,11,m))
        printf("The digit found of %d No position\n",find);
    else
        printf("The digit not found!\n");
    return 0;
}