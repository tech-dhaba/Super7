/*Create a structure representing a task with a function pointer and a priority.
Implement a priority queue using a heap data structure to store tasks.
Write a function to extract the highest priority task from the queue.
Bitwise Operations
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct task{
    void (*func)(void);
    int priority;
}task;

task *heap;
int size = 0;

void swap(task *a, task *b){
    task temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int i){
    int left = 2*i + 1;
    int right = 2*i + 2;
    int smallest = i;
    if(left < size && heap[left].priority < heap[smallest].priority){
        smallest = left;
    }
    if(right < size && heap[right].priority < heap[smallest].priority){
        smallest = right;
    }
    if(smallest != i){
        swap(&heap[i], &heap[smallest]);
        heapify(smallest);
    }
}

void insert(task t){
    heap = (task*)realloc(heap, (size+1)*sizeof(task));
    heap[size] = t;
    int i = size;
    size++;
    while(i > 0 && heap[(i-1)/2].priority > heap[i].priority){
        swap(&heap[(i-1)/2], &heap[i]);
        i = (i-1)/2;
    }
}


task extract(){
    task t = heap[0];
    heap[0] = heap[size-1];
    size--;
    heap = (task*)realloc(heap, size*sizeof(task));
    heapify(0);
    return t;
}

void print(){
    for(int i = 0; i < size; i++){
        printf("%d ", heap[i].priority);
    }
    printf("\n");
}

void func1(){
    printf("Function 1\n");
}

void func2(){
    printf("Function 2\n");
}

void func3(){
    printf("Function 3\n");
}

void func4(){
    printf("Function 4\n");
}


int main(){
    task t1 = {func1, 1};
    task t2 = {func2, 2};
    task t3 = {func3, 3};
    task t4 = {func4, 4};
    task t5 = {func1, 2};
    insert(t1);
    insert(t2);
    insert(t3);
    insert(t4);
    insert(t5);
    print();
    task t = extract();
    task tt = extract();
    t.func();
    tt.func();
    print();
    return 0;
}
