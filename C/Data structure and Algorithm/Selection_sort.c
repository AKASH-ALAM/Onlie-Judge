#include <stdio.h> 
#include <stdlib.h> 

void SelectionSort(int array[], int size){

    for(int i = 0; i < size - 1; i++){
        int sm = i;
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[i]){
                sm = j;
            }
        }
        if(sm != i){
            int temp = array[i];
            array[i] = array[sm];
            array[sm] = temp;
        }   
    }
}

int main(int argc, char const *argv[])
{
    int size;
    printf("Enter an Array size: ");
    scanf("%d", &size);

    int *array = (int *) malloc(sizeof(int) * size);
    printf("Enter Array Elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", array+i);
    }

    SelectionSort(array, size);
    printf("Your Sorted Array is : ");
    for(int i = 0; i < size; i++) 
        printf("%d ",*(array+i));
    printf("\n");

    return 0;
}
