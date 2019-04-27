#include <stdio.h>

int left(int i){
    return i * 2;
}
int right(int i){
    return i * 2 + 1;
}
int parent(int i){
    return i / 2;
}

int is_max_heap(int h[], int size){
    int p, i;
    for(i = size; i > 1; i--){
        p = parent(i);

       // printf("i = %d, p = %d \t h[i] = %d, h[p] = %d\n", i, p, h[i], h[p]);

        if(h[p] < h[i]){
            return 0;
        }
    }
    return 1;
}

void max_heapify(int heap[], int heap_size, int i){
    int l, r, largest, t;

    l = left(i);
    r = right(i);

    if(l <= heap_size && heap[l] > heap[i]){
        largest = l;
    } else{
        largest = i;
    }

    if(r <= heap_size && heap[r] > heap[largest]){
        largest = r;
    }

    if(largest != i) {
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;
        max_heapify(heap, heap_size, largest);
    }
}

void print_heap(int heap[], int heap_size){
    for(int i = 1; i <= heap_size; i++){
        printf("%d ", heap[i]);
    }
    printf("\n\n");
}

void build_max_heap(int heap[], int heap_size){
    for(int i = heap_size / 2; i >= 1; i--){
        max_heapify(heap, heap_size, i);
    }
}

int main(){
    int heap_size = 9;
    int heap[] = {0, 12, 7, 1, 3, 10, 17, 19, 2, 5};
    print_heap(heap, heap_size);

    //max_heapify(heap, heap_size, 3);

    build_max_heap(heap, heap_size);
    
    print_heap(heap, heap_size);

    return 0;
} 