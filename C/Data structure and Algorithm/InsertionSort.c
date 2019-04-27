#include <stdio.h>
void InsertionSort(int arry[], int n){
    int i, j, item;
    for(int i = 1; i < n; i++){
        item = arry[i];
        j = i - 1;
        while(j >= 0 && arry[j] > item){
            arry[j+1] = arry[j];
            j = j - 1;
        }
        arry[j+1] = item;
    }
}
int main(){
    int n, i;
    printf("Enter array size: "), scanf("%d",&n);
    int arry[n];
    printf("Enter array Element : ");
    for(i = 0; i < n; i++) scanf("%d", &arry[i]);
    InsertionSort(arry,n);
    printf("Sorted array is: ");
    for(i = 0; i < n; i++) printf("%d ", arry[i]);
    printf("\n");
    return 0;
}