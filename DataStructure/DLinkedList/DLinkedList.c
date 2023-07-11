////#include <stdio.h>
////#include <stdlib.h>
////#include "DLinkedList.h"
////
////void ListInit(List * plist)
////{
////    plist->head = (Node*)malloc(sizeof(Node));
////    plist->head->next = NULL;
////    plist->comp = NULL;
////    plist->numOfData = 0;
////}
////
//////중간 삽입(정렬X버전)
////void FInsert(List * plist, LData data)
////{
////    Node * newNode = (Node*)malloc(sizeof(Node));
////    newNode->data = data;
////
////    newNode->next = plist->head->next;
////    plist->head->next = newNode;
////
////    (plist->numOfData)++;
////}
////
////void SInsert(List * plist, LData data)
////{
////    Node * newNode = (Node*)malloc(sizeof(Node));
////    Node * pred = plist->head;
////    newNode->data = data;
////
////    while(pred->next != NULL &&
////        plist->comp(data, pred->next->data) != 0)
////    {
////        pred = pred->next;
////    }
////
////    newNode->next = pred->next;
////    pred->next = newNode;
////
////    (plist->numOfData)++;
////}
////
////void LInsert(List * plist, LData data)
////{
////    if(plist->comp == NULL)
////        FInsert(plist, data);
////    else
////        SInsert(plist, data);
////}
////
//////최초값 조회
////int LFirst(List * plist, LData * pdata)
////{
////    if(plist->head->next == NULL)
////        return FALSE;
////
////    plist->before = plist->head;
////    plist->cur = plist->head->next;
////
////    *pdata = plist->cur->data;
////    return TRUE;
////}
////
//////NEXT값 조회
////int LNext(List * plist, LData * pdata)
////{
////    if(plist->cur->next == NULL)
////        return FALSE;
////
////    plist->before = plist->cur;
////    plist->cur = plist->cur->next;
////
////    *pdata = plist->cur->data;
////    return TRUE;
////}
////
////
////LData LRemove(List * plist)
////{
////    Node * rpos = plist->cur;
////    LData rdata = rpos->data;
////
////    plist->before->next = plist->cur->next;
////    plist->cur = plist->before;
////
////    free(rpos);
////    (plist->numOfData)--;
////    return rdata;
////}
////
////int LCount(List * plist)
////{
////    return plist->numOfData;
////}
////
////void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
////{
////    plist->comp = comp;
////}
////
////
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "DLinkedList.h"
//
////void ListInit(List * plist);
////void LInsert(List * plist, LData data);
////
////int LFirst(List * plist, LData * pdata);
////int LNext(List * plist, LData * pdata);
////
////LData LRemove(List * plist);
////int LCount(List * plist);
////
////void SetSortRule(List * plist, int (*comp)(LData d1, LData d2));
//
////typedef int LData;
////
////typedef struct _node
////{
////    LData data;
////    struct _node * next;
////} Node;
////
////typedef struct _linkedList
////{
////    Node * head; //더미노드
////    Node * cur; //참조 및 삭제를 위함
////    Node * before; //삭제를 위함(이전의 delNextNode 떠올리기)
////    int numOfData; //데이터 개수
////    int (*comp)(LData d1, LData d2); //반환형이 int, LData 인자 2개 받는 함수의 주소값을 전달하는 SetSortRule의 2번째 인자
////} LinkedList;
//
//
//
//
////포스팅
//
//void ListInit(List * plist){
//    //더미노드 생성후 head포인터로 지정
//    plist -> head = (Node*)malloc(sizeof(Node)); //더미노드 생성
//    plist -> head -> next = NULL; //더미노드가 가리키는 값이 없으므로 NULL초기화
//    plist -> cur = NULL;
//    plist -> before = NULL;
//    plist -> numOfData = 0;
//}
//
//
//void FInsert(List * plist, LData data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    newNode -> next = NULL;
//    
//    //더미노드가 첫 노드이므로 조건문으로 첫 노드일 경우를 나눠줄 필요가 없음
//    //생성한 노드는 항상 2번째 이후의 노드가 된다.
//    newNode -> next = plist -> head -> next; //기존에 생성한 노드가 있다면 그걸로 연결
//    plist -> head -> next = newNode; //더미노드는 항상 첫 노드를 가리킴
//    (plist -> numOfData++);
//}
//
//
//int LFirst(List * plist, LData * pdata){
//    if(plist -> head -> next == NULL)
//        return FALSE;
//    
//    plist -> before = plist -> head; //before는 더미노드를 가리킴
//    plist -> cur = plist -> head -> next; //cur는 (더미노드 다음의) 첫 노드를 가리킴
//    
//    *pdata = plist -> cur -> data;
//    
//    return TRUE;
//}
//
//int LNext(List * plist, LData * pdata){
//    if(plist -> cur -> next == NULL)
//        return FALSE;
//    
//    plist -> before = plist -> cur;
//    plist -> cur = plist -> cur -> next;
//    
//    *pdata = plist -> cur -> data;
//    return TRUE;
//}
//
//LData LRemove(List * plist){
//    Node * delNode = plist -> cur;
//    
//    plist -> before -> next = delNode -> next;
//    plist -> cur = plist -> before;
//    
//    LData removeData = delNode -> data;
//    free(delNode);
//    (plist -> numOfData)--;
//    return removeData;
//}
//
//
//int LCount(List * plist){
//    return plist -> numOfData;
//}
