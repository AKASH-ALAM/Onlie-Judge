#include <stdio.h> 
#include <stdlib.h> 

int BinarySearch(int array[], int value, int size){
    int left = 0, right = size - 1, mid;
    
    while(left <= right){
        mid = left + (right - left) / 2;
        if(array[mid] == value){
            return mid + 1;
        }
        else if(array[mid] < value){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0;
}

int main(){
    int size;
    printf("Enter Array size: ");
    scanf("%d", &size);

    int *array = (int *) malloc(sizeof(array) * size);

    printf("Enter Array Elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", array+i);
    }

    printf("Enter A value for Search: ");
    int value;
    scanf("%d", &value);

    int get = BinarySearch(array, value, size);
    if(get) printf("The Element found of %d No position\n", get);
    else printf("Not found!\n");
    return 0;
}