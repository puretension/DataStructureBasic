//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 4
//
//typedef struct {
//    int id;
//    int priority;
//} Process;
//
//void swap(Process *a, Process *b) {
//    Process temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void maxHeapify(Process arr[], int n, int i) {
//    int largest = i;
//    int left = 2 * i + 1;
//    int right = 2 * i + 2;
//
//    if (left < n && arr[left].priority > arr[largest].priority)
//        largest = left;
//
//    if (right < n && arr[right].priority > arr[largest].priority)
//        largest = right;
//
//    if (largest != i) {
//        swap(&arr[i], &arr[largest]);
//        maxHeapify(arr, n, largest);
//    }
//}
//
//void buildMaxHeap(Process arr[], int n) {
//    int i;
//    for (i = n / 2 - 1; i >= 0; i--)
//        maxHeapify(arr, n, i);
//}
//
//void insert(Process arr[], int *n, int id, int priority) {
//
//    Process newProcess;
//    newProcess.id = id;
//    newProcess.priority = priority;
//
//    arr[*n] = newProcess;
//    (*n)++;
//
//    int i = *n - 1;
//    while (i > 0 && arr[(i - 1) / 2].priority < arr[i].priority) {
//        swap(&arr[i], &arr[(i - 1) / 2]);
//        i = (i - 1) / 2;
//    }
//}
//
//void printMaxHeap(Process arr[], int n) {
//    int i;
//    for (i = 0; i < n; i++)
//        printf("(%d, %d) ", arr[i].id, arr[i].priority);
//    printf("\n");
//}
//
//int main() {
//    Process heap[13];
//    int n = 0;
//
//    insert(heap, &n, 14, 2);
//    insert(heap, &n, 5, 2);
//    insert(heap, &n, 2, 1);
//    insert(heap, &n, 17, 3);
//    insert(heap, &n, 11, 2);
//    insert(heap, &n, 13, 2);
//    insert(heap, &n, 4, 1);
//    insert(heap, &n, 8, 2);
//    insert(heap, &n, 10, 2);
//    insert(heap, &n, 3, 1);
//    insert(heap, &n, 19, 3);
//    insert(heap, &n, 1, 1);
//    insert(heap, &n, 12, 2);
//
//
//
//    buildMaxHeap(heap, 13);
//    printf("Max Heap: ");
//    printMaxHeap(heap, n);
//
//    return 0;
//}
//
