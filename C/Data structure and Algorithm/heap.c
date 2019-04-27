#include <stdio.h>

int left_child(int i){
        return 2 * i;
    }
int right_child(int i){
    return 2 * i + 1;
    }
int parent(int i){
    return i / 2;
    }

int is_max_heap(int h[], int heap_size){

    for(int i = heap_size; i > 1; i--){

        int p = parent(i);

        if(h[p] < h[i]){
            return 0;
        }
    } 
    return 1;
}


int main(){

    int h[] = {0, 19, 7, 17, 3, 5, 12, 10, 1, 2};
    
    if(is_max_heap(h, 9)){
        printf("it is max heap\n");
    } else {
        printf("it is not max heap\n");
    }

    return 0;
}