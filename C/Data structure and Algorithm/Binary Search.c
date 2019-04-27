#include <stdio.h>
int BinarySearch(int arry[], int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arry[mid] == x) return mid + 1;
        else if(arry[mid] < x ) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}
int main(){
    int arry[101], n = 101, x = 39, find;
    for(int i = 0; i <= 100; i++){
        arry[i] = i;
    }
    for(int i = 0; i <= 100; i++) printf("%d ", arry[i]);
    printf("\n\n");
    
    if(find = BinarySearch(arry, n, x)) printf("The digit found of %d No position\n",find);
    else printf("Not found!\n");
    return 0;
}