//#include <stdio.h>
//
//const int number = 8;
//int sorted[8];
//
//void merge(int a[], int m, int middle, int n){
//    int i = m;
//    int j = middle + 1;
//    int k = m;
//
//    while(i<=middle && j<=n){
//        if(a[i] <= a[j]){
//            sorted[k] = a[i];
//            i++;
//        }else{
//            sorted[k] = a[j];
//            j++;
//        }
//        k++;
//    }
//    //i가 먼저 끝난경우
//    if(i>middle){
//        for(int t = j;t<=n;t++){
//            sorted[k] = a[t];
//            k++;
//        }
//    } else{
//        for(int t = i;t<=middle;t++){
//            sorted[k] = a[t];
//            k++;
//        }
//    }
//    for(int t = m;t<=n;t++){
//        a[t] = sorted[t];
//    }
//}
//
//void mSort(int a[], int m, int n){
//    if(m<n){
//        int middle = (m+n)/2;
//        mSort(a, m, middle);
//        mSort(a, middle+1, n);
//        merge(a, m, middle, n);
//    }
//}
//
//int main(){
//    int array[number] = {7,6,5,8,3,5,9,1};
//    mSort(array, 0, number-1);
//    for(int i = 0;i<number;i++){
//        printf("%d ", array[i]);
//    }
//
//    return 0;
//}
//
//
//const int number = 16;
//int sorted[16];
//
//void show(){
//    for(int i = 0;i<number;i++)
//        printf("%d ", sorted[i]);
//    printf("\n");
//}
//
//void merge(int a[], int m, int middle, int n){
//    int i = m;
//    int j = middle + 1;
//    int k = m;
//    
//    while(i<=middle && j<=n){
//        if(a[i] <= a[j]){
//            sorted[k] = a[i];
//            i++;
//        }else{
//            sorted[k] = a[j];
//            j++;
//        }
//        k++;
//    }
//    //i가 먼저 끝난경우
//    if(i>middle){
//        for(int t = j;t<=n;t++){
//            sorted[k] = a[t];
//            k++;
//        }
//    } else{
//        for(int t = i;t<=middle;t++){
//            sorted[k] = a[t];
//            k++;
//        }
//    }
//    for(int t = m;t<=n;t++){
//        a[t] = sorted[t];
//    }
//}
//
//
//
//void mSort(int a[], int m, int n){
//    if(m<n){
//        int middle = (m+n)/2;
//        mSort(a, m, middle);
//        mSort(a, middle+1, n);
//        merge(a, m, middle, n);
//        show();
//    }
//}
//
//int main(){
//    int array[] = {9,6,10,5,12,2,14,1,13,4,7,11,16,8,3,15};
//    mSort(array, 0, number-1);
//    for(int i = 0;i<number;i++){
//        printf("%d ", array[i]);
//    }
//    return 0;
//}


#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) );

//
//int temp = 0;
//
//void bubble_sort(int list[], int n){
//    int flag = 1;
//    for(int i = n-1;flag>0;i--){
//        for(int j = 0;j<i;j++){
//            if(list[j] > list[j+1]){
//                SWAP(list[j], list[j+1], temp);
//            }
//        }
//    }
//}
//
//void insertion_sort(int list[], int n){
//    for(int i = 1;i<n;i++){
//        int next = list[i];
//        int j;
//        for(j = i-1;j>=0 && next < list[j];j--){
//            list[j+1] = list[j];
//        }
//        list[j+1] = next;
//    }
//}

//int sorted[20];
//
//void merge(int list[], int left, int mid, int right){
//    int i = left, j = mid+1, k = left;
//    while(i<=mid && j<=right){
//        if(list[i]<=list[j]) sorted[k++] = list[i++];
//
//    }
//}
//
//
//void merge_sort(int list[], int left, int right){
//    if(left < right){
//        int mid = (left + right) / 2;
//        merge_sort(list, left, mid);
//        merge_sort(list, mid+1, right);
//        merge(list,left,mid,right);
//    }
//}

//int sorted[20];
//
//void merge(int list[], int left, int mid, int right){
//    int i = left;
//    int j = mid+1;
//    int k = left;
//    while(i<=mid && j<=right){
//        if(list[i] <= list[j]) sorted[k++] = list[i];
//        else sorted[k++] = list[j++];
//    }
//    if(i>mid){
//        for(int t = j;t<=right;t++){
//            sorted[k++] = list[t++];
//        }
//    }
//    else{
//        for(int t = i;t<=mid;t++){
//            sorted[k++] = list[t++];
//        }
//    }
//    for(int t = left;t<=right;t++) list[t] = sorted[t];
//}
//
//
//void mergeSort(int list[], int left, int right){
//    if(left < right){
//        int mid = (left + right) / 2;
//        mergeSort(list, left, mid);
//        mergeSort(list, mid+1, right);
//        merge(list, left, mid,right);
//    }
//}

//int partition(int list[], int left, int right){
//    int i,j,temp;;
//    i = left;
//    j = right + 1;
//    int pivot = list[left];
//    while(i<j){
//        while(list[++i]<pivot);
//        while(list[--j]>pivot);
//        if(i<j) SWAP(list[i], list[j], temp);
//    }
//    SWAP(list[left], list[j], temp);
//    return j;
//}
//
//void quick_sort(int list[], int left,int right){
//    if(left < right){
//        int j = partition(list,left,right);
//        quick_sort(list, left, j-1);
//        quick_sort(list, j+1, right);
//    }
//}
