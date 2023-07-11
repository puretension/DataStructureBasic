//#include<stdio.h>
//
//int ISearch(int arr[], int first, int last, int target){
//    int mid;
//
//    //Binary Search 방식 구현시
//    //탐색 실패
//    //if(first > last)
//    //  return -1;
//    // mid = (first + last) / 2;
//    
//    //Interpolation Search 방식 구현시
//    if(arr[first] > target || arr[last] < target)
//        return 1;
//    mid = ((double)(target - arr[first]) / (arr[last] - arr[first]) * (last - first) + first);
//
//    
//    if(arr[mid] == target)
//        return mid;
//    //target이 중간 인덱스값보다 작은경우(mid 줄여나간다)
//    else if(target < arr[mid])
//        return ISearch(arr, first, mid-1, target);
//    
//    //target이 중간 인덱스값보다 큰경우(mid 늘려나간다)
//    else
//        return ISearch(arr, mid+1, last, target);
//}
//
//int main(){
//    
//    int arr[] = {1,3,5,7,9};
//    int idx;
//    
//    idx = ISearch(arr, 0, sizeof(arr)/sizeof(int) - 1, 2);
//    
//    if(idx == -1)
//        printf("탐색 실패\n");
//    else
//        printf("타겟 저장 인덱스: %d\n", idx);
//    
////    idx = ISearch(arr, 0, sizeof(arr)/sizeof(int) - 1, 10);
////
////    if(idx == -1)
////        printf("탐색 실패\n");
////    else
////        printf("타겟 저장 인덱스: %d\n", idx);
////
//    return 0;
//}
