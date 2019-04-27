#include <stdio.h> 
#include <stdlib.h> 

void smp(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void BubbleSort(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(array[j+1] < array[j])
                smp(&array[j], &array[j+1]);
        }   
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

    BubbleSort(array, size);
    printf("Your Sorted Array is : ");
    for(int i = 0; i < size; i++) 
        printf("%d ",*(array+i));
    printf("\n");

    return 0;
}