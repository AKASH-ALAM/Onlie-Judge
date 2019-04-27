#include <stdio.h> 
#include <stdlib.h>

void LinearSearch(int array[], int value){
    int check = 0;
    for(int i = 0; array[i] != '\0'; i++){
        if(array[i] == value){
            check = i + 1;
            break;
        }
    }
    if(check){
         printf("The value Found in the %d No position of the Array\n", check);
    } else {
        printf("Not Found!");
    }
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

    LinearSearch(array, value);
    return 0;
}