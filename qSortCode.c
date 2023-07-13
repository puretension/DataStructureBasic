//#include<stdio.h>
//#include<stdlib.h>
//
////int data[] = {1,10,5,8,7,6,4,3,2,9};
////int data2[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
////int data[] = {9,6,10,5,12,2,14,1,13,4,7,11,16,8,3,15};
//int data[] = {2,  1,  3,  4,  5,  6,  8,  7,  9,  10,  11,  12,  14,  13,  15,  16};
//int number = 16;
//
//void show(){
//    for(int i = 0;i<number;i++)
//        printf("%d ", data[i]);
//    printf("\n");
//}
//
//void quickSort(int * arr, int start, int end){
//    if(start >= end) return;
//    int key = start;
//    int i = start + 1;
//    int j = end;
//    int temp;
//    while(i<=j){
//        while(arr[key] >= arr[i] && i<= end) i++;
//        while(arr[j] >= arr[key] && j > start) j--;
//        if(i > j){
//            temp = arr[key];
//            arr[key] = arr[j];
//            arr[j] = temp;
//        }else{
//            temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//        }
//    }
//    printf("pivot값: %d\n", arr[key]);
//    show();
//    quickSort(arr, start, j-1);
//    quickSort(arr, j+1, end);
//}
//
//int main(){
//    show();
//    quickSort(data, 0, number - 1);
//
//
//    return 0;
//}
////정렬 이전 배열: 2 1 3 4 5 6 8 7 9 10 11 12 14 13 15 16
////피벗 값: 2
////피벗 값: 3
////피벗 값: 4
////피벗 값: 5
////피벗 값: 6
////피벗 값: 8
////피벗 값: 9
////피벗 값: 10
////피벗 값: 11
////피벗 값: 12
////피벗 값: 14
////피벗 값: 15
