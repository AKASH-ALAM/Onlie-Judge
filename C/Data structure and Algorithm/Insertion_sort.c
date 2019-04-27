#include <stdio.h> 
#include <stdlib.h> 

void InsertionSort(int array[], int size){
    for(int i = 1; i < size; i++){
        int item = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > item){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = item;
    }
}

int main(){
    int size;
    printf("Enter an Array size: ");
    scanf("%d", &size);

    int *array = (int *) malloc(sizeof(int) * size);
    printf("Enter Array Elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", array+i);
    }

    InsertionSort(array, size);

    printf("Your Sorted Array is : ");
    for(int i = 0; i < size; i++) 
        printf("%d ",*(array+i));
    printf("\n");

    return 0;
}