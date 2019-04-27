#include <stdio.h>
void SelectionSort(int arry[], int n){
    int i, j, tmp, sm, swp;
    for(i = 0; i < n - 1; i++){
        sm = i;
        for(j = i + 1; j < n; j++){
            if(arry[sm] > arry[j]){
                sm = j;
            }
        }
        if(sm != i){
            tmp = arry[i];
            arry[i] = arry[sm];
            arry[sm] = tmp;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter Array size: "), scanf("%d",&n);
    int arry[n];
    printf("Enter Array element: ");
    for(i = 0; i < n; i++) scanf("%d",&arry[i]);
    SelectionSort(arry,n);
    printf("Sorted Array is : ");
    for(i = 0; i < n; i++) printf("%d ", arry[i]);
    return 0;
}
