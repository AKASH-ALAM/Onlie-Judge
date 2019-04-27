#include <stdio.h>
#include <stdlib.h>
#define size 5

typedef struct{
    int data[size+1];
    int head, tail;
} queue;

void inqueue(queue *q, int item){
    if((q->tail+1) % (size + 1) == q->head){
        printf("Queue is full!\n");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (size + 1);
}

int dequeue(queue *q){
    if(q->head == q->tail){
        printf("Queue is empty!\n");
        exit(1);
    }
    int item;
    item = q->data[q->head];
    q->head = (q->head + 1) % (size + 1);
    return item;
}
int main(){
    queue my_q;
    my_q.head = 0;
    my_q.tail = 0;
    int item;

    inqueue(&my_q, 1);
    inqueue(&my_q, 2);
    inqueue(&my_q, 3);
    inqueue(&my_q, 4);
    inqueue(&my_q, 5);
    
    item = dequeue(&my_q);
    printf("%d\n", item);
    item = dequeue(&my_q);
    printf("%d\n", item);
    item = dequeue(&my_q);
    printf("%d\n", item);
    item = dequeue(&my_q);
    printf("%d\n", item);
    item = dequeue(&my_q);
    printf("%d\n", item);
    return 0;
}