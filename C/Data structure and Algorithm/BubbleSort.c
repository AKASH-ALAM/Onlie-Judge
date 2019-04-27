#include <stdio.h>
void BubbleSort(int arry[], int n){
    int i, j, tmp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1-i; j++){
            if(arry[j] > arry[j+1]){
                tmp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = tmp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter Array size : "), scanf("%d",&size);   
    int arry[size], i;
    printf("Enter Array Element: ");
    for(i = 0; i < size; i++) scanf("%d", &arry[i]);
    BubbleSort(arry, size);
    printf("Sorted Array is: ");
    for(i = 0; i < size; i++) printf("%d ", arry[i]);
    printf("\n");
    return 0;
}
