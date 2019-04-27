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

void check_heap(int heap[], int heap_size){
    if(is_max_heap(heap, 9)){
        printf("it is max heap\n");
    } else {
        printf("it is not max heap\n");
    }
}

void max_heapify(int h[], int heap_size, int i){
    int left, right, temp, largest;
    left = left_child(i);
    right = right_child(i);

    if(left <= heap_size && h[left] > h[i]){
        largest = left;
    } else {
        largest = i;
    }

    if(right <= heap_size && h[right] > h[largest]){
        largest = right;
    }

    if(largest != i){
        temp = h[largest];
        h[largest] = h[i];
        h[i] = temp;

        max_heapify(h, heap_size, largest);
    }
}

void build_heap(int heap[], int heap_size){
    for(int i = heap_size / 2; i >= 1; i--){
        max_heapify(heap, heap_size, i);
    }
}

void print_heap(int heap[], int heap_size){
    for(int i = 1; i <= heap_size; i++){
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main(){
    int heap_size = 9;
    int h[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 2};
    print_heap(h, heap_size);
    check_heap(h, heap_size);

    build_heap(h, heap_size);
    print_heap(h, heap_size);
    check_heap(h, heap_size);

    return 0;
}