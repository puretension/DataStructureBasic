#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

////typedef struct _node
////{
////    Data data;
////    struct _node * next;
////} Node;
////
////typedef struct _listStack
////{
////    Node * head;
////} ListStack;
////
////
////typedef ListStack Stack;
////
////void StackInit(Stack * pstack);
////int SIsEmpty(Stack * pstack);
////
////void SPush(Stack * pstack, Data data);
////Data SPop(Stack * pstack);
////Data SPeek(Stack * pstack);
//
//void StackInit(Stack * pstack){
//    pstack -> head = NULL;
//}
//
//int SIsEmpty(Stack * pstack){
//    if(pstack -> head == NULL) return TRUE;
//    else return FALSE;
//}
//
//void SPush(Stack * pstack, Data data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
////    if(pstack -> head == NULL) {
////        newNode -> next = NULL;
////        pstack -> head = newNode;
////    }
////    else
//        newNode -> next = pstack -> head;
//        pstack -> head = newNode;
//}
//
//Data SPop(Stack * pstack){
//    Data rdata;
//    Node * rnode;
//
//    if(SIsEmpty(pstack)){
//        printf("Stack Memory Error");
//        exit(-1);
//    }
//
//    rdata = pstack -> head -> data;
//    rnode = pstack -> head; //노드 해제를 위한 주소값 대입
//
//    pstack -> head = pstack -> head -> next; //삭제할 노드의 다음노드를 head가 가리킴
//    free(rnode);
//    return rdata;
//
//}
//
//
//Data SPeek(Stack * pstack){
//    if(SIsEmpty(pstack)){
//        printf("Stack Memory Error");
//        exit(-1);
//    }
//
//    return pstack -> head -> data;
//
//}
