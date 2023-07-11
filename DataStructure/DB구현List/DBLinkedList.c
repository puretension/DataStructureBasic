#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"
//
////typedef int Data;
////
////typedef struct _node{
////    Data data;
////    struct node * prev;
////    struct node * next;
////}Node;
////
////typedef struct _dbLinkedList{
////    Node * head; //이제부터 더미노드로 사용
////    Node * cur;
////    Node * tail; //더미노드식 구현을 위한 추가
////    int numOfData;
////}DbLinkedList;
////
////typedef dbLinkedList List;
//
//void ListInit(List * plist){
//    plist -> numOfData = 0;
//    //plist -> head = NULL;
//    //cur은 LFirst에서 초기화함
//    plist -> head = (Node*)malloc(sizeof(Node)); //head 더미노드 생성후 초기화
//    plist -> head -> prev = NULL;
//    plist -> head -> next = NULL;
//    
//    plist -> tail = (Node*)malloc(sizeof(Node)); //tail 더미노드 생성후 초기화
//    plist -> tail -> prev = NULL;
//    plist -> tail -> next = NULL;
//}
//
//void LInsert(List * plist, Data data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    
//    newNode -> data = data;
//    
//    //head고정, 1번째 데이터는 head로 연결
//    if(plist -> head -> next == NULL){
//        plist -> head -> next = newNode; //head
//        newNode -> prev = plist -> head; //head
//        plist -> tail -> prev = newNode; //tail왼쪽에서 New
//        newNode -> next = plist -> tail; //new오른쪽 tail
//        plist -> tail = newNode;
//    }
//    else
//    plist -> tail -> next = newNode;
//    newNode -> prev = plist -> tail;
//    plist -> tail = newNode;
//
//    (plist -> numOfData)++;
//}
//
//int LFirst(List * plist, Data * pdata){
//    if(plist -> head -> next == NULL)
//    {
//        printf("애초에 생성된 노드가 없습니다.\n");
//        return FALSE;
//    }
//    plist -> cur = plist -> head -> next;
//    *pdata = plist -> cur -> data;
//    return TRUE;
//}
//
//int LNext(List * plist, Data * pdata){
//    if(plist -> cur -> next == NULL)
//    {
//        printf("\n더이상 생성된 노드가 없습니다(테스트용 출력).\n");
//        return FALSE;
//    }
//    plist -> cur = plist -> cur -> next;
//    *pdata = plist -> cur -> data;
//    return TRUE;
//}
//
//int LCount(List * plist) { return plist -> numOfData;}
//
//Data LRemove(List * plist){
//    Node * delNode = plist -> cur; //삭제할 노드의 포인터(노드를 생성하면 안됨)
//    Node * delPrevNode = plist -> cur -> prev; // 삭제 이전 노드 생성
//    Data removeData; //삭제할 데이터
//    removeData = delNode -> data;
//    //더미노드 및 head이동 시키기
////    plist -> cur -> prev = plist -> cur -> next; //error
////    plist -> cur -> next = plist -> cur -> prev; //error
//    
//    plist -> cur = plist -> cur -> next;
//    
//    delPrevNode -> next = plist -> cur; //삭제 바로 전 노드칸에 이동한 cur노드 연결
//    
//    plist -> cur -> prev = delPrevNode; //이동한 cur노드칸에 삭제 바로전 노드 연결
//    free(delNode);
//    
//    (plist -> numOfData)--;
//    
//    return removeData;
//}

//typedef struct _dbLinkedList{
//    Node * head; //이제부터 더미노드로 사용
//    Node * cur;
//    Node * tail; //더미노드식 구현을 위한 추가
//    int numOfData;
//}DbLinkedList;
//
//typedef DbLinkedList List;
//
//void ListInit(List * plist);
//void LInsert(List * plist, Data data); //꼬리에 추가
//
//int LFirst(List * plist, Data * pdata);
//int LNext(List * plist, Data * pdata);
//
//Data LRemove(List * plist);
////int LPrevious(List * plist, Data * pdata);
//
//int LCount(List * plist);

