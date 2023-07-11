//#include<stdio.h>
//
//int BSearch(int arr[], int len, int target){
//    int first = 0;
//    int last = len - 1;
//    int mid;
//    
//    while(first >= last){
//        mid = (first + last) / 2;
//        if(arr[mid] == target) return mid;
//        else if(arr[mid] < target) first = mid + 1;
//        else last = mid -1;
//    }
//    return -1;
//}
//
//int ISearch(int arr[], int len, int target){
//    int low = 0;
//    int high = len -1;
//    int s;
//    
//    while(arr[low] > target || arr[high] < target){
//        s = ((double)(target - arr[low]) / arr[high] - arr[low]) * (high - low) + low;
//        if(arr[s] == target) return s;
//        else if(target < arr[s]) low = s+1;
//        else high = s - 1;
//    }
//    return -1;
//}
//
//
