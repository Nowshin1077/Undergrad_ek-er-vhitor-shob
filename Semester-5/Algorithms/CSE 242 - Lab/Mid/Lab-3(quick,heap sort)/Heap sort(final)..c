#include <stdio.h>

void max_heapify(int heap[], int heap_size, int i)
{
    int l, r, largest, t;
    l=  left(i);
    r=  right(i);
    if(l<=heap_size && heap[l]>heap[i]){
        largest = l;}
    else {
        largest = i;}
    if(r<=heap_size && heap[r] > heap[largest]){
        largest = r;
    }

    if(largest != i){
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;
        max_heapify(heap,heap_size,largest);
    }
}
void print_heap(int heap[],int heap_size)
{
    int i;
    for(i = 1; i <= heap_size; i++)
    {
        printf("%d",heap[i]);
    }
    printf("\n\n");
}
int main()
{
    int heap_size = 9;
    int heap[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 2};
    print_heap(heap,heap_size);
    max_heapify(heap,heap_size, 3);
    print_heap(heap,heap_size);
    return 0;
}
