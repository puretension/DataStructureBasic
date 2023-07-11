#include<stdio.h>
#include<stdlib.h>
#include "Deque.h"

//typedef int Data;
//
//typedef struct _node{
//    Data data;
//    struct _node * next;
//    struct _node * prev;
//}Node;
//
//typedef struct _dlDeque{
//    Node * head;
//    Node * tail; //마지막 데이터를 가리키기 위함(이중 연결리스트와의 유일한 차이점)
//}DLDeque;

//void DequeInit(Deque * pdeq);
//int DQIsEmpty(Deque * pdeq);
//
//void DQAddFirst(Deque * pdeq, Data data); //덱의 머리에 데이터 추가
//void DQAddLast(Deque * pdeq, Data data); //덱의 꼬리에 데이터 추가
//
//Data DQRemoveFirst(Deque * pdeq); //덱의 머리에서 데이터 삭제
//Data DQRemoveLast(Deque * pdeq); //덱의 꼬리에서 데이터 삭제

//void DequeInit(Deque * pdeq){
//    pdeq -> head = NULL;
//    pdeq -> tail = NULL;
//}
//
//int DQIsEmpty(Deque * pdeq){
//    if(pdeq -> head == NULL) return TRUE;
//    else return FALSE;
//}
//
////맨앞으로 추가하는거
//void DQAddFirst(Deque * pdeq, Data data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    newNode -> next = pdeq -> head;
//
//    if(DQIsEmpty(pdeq))
//        pdeq ->tail = newNode;
//    else
//        pdeq -> head -> prev = newNode;
//    newNode -> prev = NULL;
//    pdeq -> head = newNode;
//}
//
//void DQAddLast(Deque * pdeq, Data data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    newNode -> next = NULL;
//    if(DQIsEmpty(pdeq))
//        pdeq -> head = newNode;
//    else
//    {
//        pdeq -> tail -> next = newNode;
//    }
//    newNode -> prev = pdeq -> tail; //@@이런거
//    pdeq -> tail = newNode;
//}
//
//Data DQRemoveFirst(Deque * pdeq){
//    Node * delNode = pdeq -> head;
//    Data removeData = delNode -> data;
//    if(DQIsEmpty(pdeq)){
//        printf("덱이 비었습니다.\n");
//        exit(-1);
//    }
//    pdeq -> head = pdeq -> head -> next;
//    free(delNode);
//
//    if(pdeq -> head == NULL)
//        pdeq -> tail = NULL;
//    else
//        pdeq -> head -> prev = NULL;
//
//    return removeData;
//}
//
//Data DQRemoveLast(Deque * pdeq){
//    Node * delNode = pdeq -> tail;
//    Data removeData;
//    if(DQIsEmpty(pdeq)){
//        printf("덱이 비었습니다.\n");
//        exit(-1);
//    }
//    removeData = delNode -> data;
//    pdeq -> tail = pdeq -> tail -> prev;
//    free(delNode);
//
//    if(pdeq -> tail == NULL)
//        pdeq -> head = NULL;
//    else
//        pdeq -> tail -> next = NULL;
//    return removeData;
//}
//
//Data DQGetFirst(Deque * pdeq){
//    if(DQIsEmpty(pdeq)){
//        printf("덱이 비었습니다.\n");
//        exit(-1);
//    }
//    return pdeq -> head -> data;
//}
//
//Data DQGetLast(Deque * pdeq){
//    if(DQIsEmpty(pdeq)){
//        printf("덱이 비었습니다.\n");
//        exit(-1);
//    }
//    return pdeq -> tail -> data;
//}
//
//int main(){
//    // 덱 생성 및 초기화
//    Deque deq;
//    DequeInit(&deq);
//
//    //데이터 넣기 1차
//    DQAddFirst(&deq, 3);
//    DQAddFirst(&deq, 2);
//    DQAddFirst(&deq, 1);
//
//    DQAddLast(&deq, 4);
//    DQAddLast(&deq, 5);
//    DQAddLast(&deq, 6);
//
//    //데이터 꺼내기 1차
//    while(!DQIsEmpty(&deq))
//        printf("%d ", DQRemoveFirst(&deq));
//    printf("\n");
//
//    //데이터 넣기 2차
//    DQAddFirst(&deq, 3);
//    DQAddFirst(&deq, 2);
//    DQAddFirst(&deq, 1);
//
//    DQAddLast(&deq, 4);
//    DQAddLast(&deq, 5);
//    DQAddLast(&deq, 6);
//
//    //데이터 꺼내기 2차
//    while(!DQIsEmpty(&deq))
//        printf("%d ", DQRemoveLast(&deq));
//}

