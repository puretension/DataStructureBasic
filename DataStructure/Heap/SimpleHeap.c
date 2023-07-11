//#include "SimpleHeap.h"
//#include <stdio.h>
//#include<stdlib.h>
//
////typedef char HData;
////typedef int Priority;
////
////typedef struct _heapElem{
////    Priority pr;
////    HData data;
////}HeapElem;
////
////typedef struct _heap{
////    int numOfData;
////    HeapElem heapArr[HEAP_LEN];
////}Heap;
//
////힙 초기화
//void HeapInit(Heap*ph){
//    ph -> numOfData = 0;
//}
//
//int HIsEmpty(Heap*ph){
//    if(ph -> numOfData == 0)
//        return TRUE;
//    return FALSE;
//}
//
//int GetParentIdx(int idx)
//{
//    return idx / 2;
//}
//
//int GETLChildIdx(int idx)
//{
//    return idx * 2;
//}
//
//int GETRChildIdx(int idx)
//{
//    return idx * 2 + 1;
//}
//
////전달된 idx의 자식노드 중 우선순위가 더 높은 자식노드를 idx로 반환함
//int GETHighPriChildIdx(Heap * ph, int idx){
//    //(왼쪽)자식노드가 존재하지 않는다면
//    if(GETLChildIdx(idx) > ph -> numOfData) return 0;
//    //자식노드가 왼쪽자식노드 하나만 존재한다면
//    else if(GETLChildIdx(idx) == ph -> numOfData)
//        return GETLChildIdx(idx);
//    //자식노드가 둘 다 존재할 경우
//    else{
//        //오른쪽 자식노드의 우선순위가 더 높다면(1에 가까워야 높음)
//        if(ph -> heapArr[GETLChildIdx(idx)].pr > ph -> heapArr[GETRChildIdx(idx)].pr)
//            return GETRChildIdx(idx);
//        
//        else return GETLChildIdx(idx);
//    }
//}
//
//void HInsert(Heap*ph, HData data, Priority pr){
//    int idx = ph -> numOfData + 1;
//    HeapElem nelem = {pr,data};
//}
//
//
//
////힙의 마지막노드를 찾아 루트노드의 위치에 올리고, 자식노드와의 비교과정을 통해 아래로 내린다.
//HData HDelete(Heap * ph){
//    HData retData = ph -> heapArr[1].data; //삭제 값 저장
//    HeapElem lastElem = ph -> heapArr[ph -> numOfData]; //힙의 마지막 노드
//    
//    //아래 변수 parentIdx에는 마지막 노드가 저장될 위치정보가 담긴다.
//    int parentIdx = 1; //루트노드가 위치해야할 인덱스 값
//    int childIdx;
//    
//    //루트노드의 우선순위가 높은 자식노드를 시작으로 반복문 시작
//    while(childIdx = GETHighPriChildIdx(ph, parentIdx))
//    {
//        //마지막노드와 우선순위가 높앗던 노드간의 우선순위 비교
//        if(lastElem.pr <= ph -> heapArr[childIdx].pr) break;
//        ph -> heapArr[parentIdx] = ph -> heapArr[childIdx];
//        parentIdx = childIdx;
//    }
//    ph -> heapArr[parentIdx] = lastElem;
//    
//    ph -> numOfData -= 1;
//    return retData;
//    
//}
