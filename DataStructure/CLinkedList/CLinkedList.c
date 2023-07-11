//#include <stdio.h>
//#include <stdlib.h>
//#include "CLinkedList.h"
//
////void ListInit(List * plist)
////{
////    plist->tail = NULL;
////    plist->cur = NULL;
////    plist->before = NULL;
////    plist->numOfData = 0;
////}
////
////void LInsertFront(List * plist, Data data) //머리 추가결과
////{
////    Node * newNode = (Node*)malloc(sizeof(Node));
////    newNode -> data = data;
////
////    if(plist -> tail == NULL)
////    {
////       plist -> tail = newNode;
////       newNode -> next = newNode;
////    }
////
////    else{
////        newNode -> next = plist -> tail -> next;
////        plist -> tail ->next = newNode;
////    }
////
////
////    (plist -> numOfData)++;
////
////}
////
////void LInsert(List * plist, Data data) //꼬리 추가결과
////{
////    Node * newNode = (Node*)malloc(sizeof(Node));
////    newNode->data = data;
////
////    if(plist->tail == NULL)
////    {
////        plist->tail = newNode;
////        newNode->next = newNode;
////    }
////
////    else{
////        newNode -> next = plist -> tail -> next;
////        plist -> tail ->next = newNode;
////        plist -> tail = newNode;
////    }
////
////
////    (plist->numOfData)++;
////}
////
////
////int LFirst(List * plist, Data * pdata)
////{
////    if(plist -> tail == NULL)
////    {
////        printf("저장된 노드가 없습니다.\n");
////        return FALSE;
////    }
////    plist -> before = plist -> tail; //before은 꼬리
////    plist -> cur = plist -> tail -> next; //cur이 머리(1번째 데이터)
////
////    *pdata = plist -> cur -> data;
////
////    return TRUE;
////}
////
////int LNext(List * plist, Data * pdata)
////{
////    if(plist -> cur -> next == NULL)
////    {
////        printf("더이상 저장된 노드가 없습니다.\n");
////        return FALSE;
////    }
////    plist -> before = plist -> cur;
////    plist -> cur = plist -> cur -> next;
////
////    *pdata = plist -> cur -> data;
////    return TRUE;
////}
////
////Data LRemove(List * plist)
////{
////    Node * rpos = plist -> cur;
////    Data removeData = rpos -> data;
////
////    if(rpos == plist -> tail) //삭제 대상이 tail이라면?
////    {
////        if(plist -> tail == plist -> tail -> next) //그게 마지막 남은 노드라면?
////            plist -> tail = NULL;
////        else
////            plist -> tail = plist -> before;
////    }
////
////    plist -> before -> next = plist -> cur -> next;
////    plist -> cur = plist -> before;
////
////    free(rpos);
////    (plist -> numOfData)--;
////
////    return removeData;
////}
////
////
////
////int LCount(List * plist)
////{
////    return plist->numOfData;
////}
//
//void ListInit(List * plist)
//{
//    plist->tail = NULL;
//    plist->cur = NULL;
//    plist->before = NULL;
//    plist->numOfData = 0;
//}
//
//void LInsertFront(List * plist, Data data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    newNode -> next = NULL;
//    
//    //처음 추가된 노드라면 그 자체로
//    if(plist -> tail == NULL)
//    {
//        plist -> tail = newNode; //꼬리이자
//        plist -> tail -> next = newNode; //머리임. tail -> next는 머리(head)를 가리키는 포인터 변수다
//    }
//   
//    else //2번째 이후의 노드라면 머리로 연결한다.
//    {
//        newNode -> next = plist -> tail -> next; //새로운 데이터에 기존에 맨앞 데이터(머리 포인터가 가리키는 값)를 next로 연결
//        plist -> tail -> next = newNode; //머리 포인터(tail -> next) 변경
//    }
//    
//    (plist -> numOfData)++;
//}
//
//void LInsertRear(List * plist, Data data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    newNode -> next = NULL;
//    
//    //처음 추가된 노드라면 그 자체로
//    if(plist -> tail == NULL)
//    {
//        plist -> tail = newNode; //꼬리이자
//        plist -> tail -> next = newNode; //머리임. tail -> next는 머리(head)를 가리키는 포인터 변수다
//    }
//    
//    //2번째 이후의 노드라면 -> 머리(tail -> next)가 아닌 꼬리(tail)로 연결할때
//    else{
//        newNode -> next = plist -> tail -> next; //새노드가 이제 마지막 데이터이므로 head 데이터로 next 연결
//        plist ->tail -> next = newNode;
//        plist -> tail = newNode; //⭐️tail 위치 변경!!(새로운 마지막 데이터이기 때문)
//    }
//  
//    (plist -> numOfData)++;
//}
//
//int LFirst(List * plist, Data * pdata)
//{
//    if(plist -> tail == NULL)
//    {
//        printf("저장된 노드가 없습니다.\n");
//        return FALSE;
//    }
//    plist -> before = plist -> tail; //before은 꼬리
//    plist -> cur = plist -> tail -> next; //cur이 머리(1번째 데이터)
//
//    *pdata = plist -> cur -> data;
//
//    return TRUE;
//}
//
//int LNext(List * plist, Data * pdata)
//{
//    if(plist -> cur -> next == NULL)
//    {
//        printf("더이상 저장된 노드가 없습니다.\n");
//        return FALSE;
//    }
//    plist -> before = plist -> cur; //before포인터는 cur의 한칸 이전이기에 cur포인터의 주소값을 따라받음
//    plist -> cur = plist -> cur -> next;
//
//    *pdata = plist -> cur -> data;
//    
//    return TRUE;
//}
//
//Data LRemove(List * plist)
//{
//    Node * delNode = plist -> cur;
//    Data removeData = delNode -> data;
//
//    if(delNode == plist -> tail) //삭제 대상이 tail이라면?
//    {
//        if(plist -> tail == plist -> tail -> next) //그게 마지막 남은 노드라면?
//            plist -> tail = NULL;
//        else
//            plist -> tail = plist -> before; //tail포인터를 tail이전 데이터로 변경
//    }
//
//    //삭제 대상이 tail이 아니라면
//    else {
//        plist -> before -> next = plist -> cur -> next; //삭제할 데이터의 이전데이터와 삭제할데이터의 다음데이터 연결
//        plist -> cur = plist -> before; //cur노드 위치 변경(why? 삭제데이터의 다음 데이터는 참조하지 않았음을 표시하기 위함)
//    }
//
//    free(delNode);
//    (plist -> numOfData)--;
//
//    return removeData;
//}
//
//int LCount(List * plist)
//{
//    return plist->numOfData;
//}
