#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int BSearch(int arr[], int len, int target);
int ISearch(int arr[], int len, int target);


int main()
{
    srand((unsigned)time(NULL));    //랜덤함수 셋팅
    int arr[1000];
    for (int i = 0; i < 1000; i++)
        arr[i] = 2 * i +  rand() % 2;        //홀짝 랜덤
    arr[111] = 222;                            //인덱스 111번만 짝수로 고정
    BSearch(arr, 1000, 222);                //이진탐색
    ISearch(arr, 1000, 222);                //보간탐색

}

int BSearch(int arr[], int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;
    int count = 0;
    while (first <= last)                //first와 last가 역전이 되면 원하는 값이 없는 것!1
    {
        mid = (first + last) / 2;
        if (arr[mid] == target)        //중간값과 비교하여 찾는 값일시 함수 탈출
        {
            cout << "이진 탐색 탐색횟수 : " << count << endl;
            return mid;
        }
        else if (target > arr[mid])        //만일 중간 값보다 큰 수면?
            first = mid + 1;            //first값을 조정
        else                            //만일 중간 값보다 작은 수면?
            last=mid-1;                    //last값을 조정
        count++;
    }
    return -1;                            //값을 못찾으면 -1반환
}

int ISearch(int arr[], int len, int target)
{
    int low = 0;
    int high = len - 1;
    int s;
    int count = 0;

    while (arr[low]<target || arr[high]>target)                //원하는 값이 low보다 작거나 high의 값보다 크면 원하는 값이 없는 것
    {
        s = ((double)(target - arr[low]) /
            (arr[high] - arr[low]))*(high - low) + low;        //중간값 보다 비율로 찾아가는 방법!
        if (arr[s] == target)                                //s값과 target을 비교하여 찾는 값일시 함수 탈출
        {
            cout << "보간 탐색 탐색횟수 : " << count << endl;
            return s;
        }
        else if (target > arr[s])                            //만일 S값 보다 큰 수면?
            low = s + 1;                                    //low값을 조정
        else                                                //만일 S값 보다 작은 수면?
            high = s - 1;                                    //high값을 조정
        count++;
    }
    return -1;                                                //값을 못찾으면 -1반환
}
