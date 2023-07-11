//#ifndef __DB_LINKED_LIST_H__
//#define __DB_LINKED_LIST_H__
//
//#define TRUE    1
//#define FALSE   0
//
//typedef int Data;
//
//typedef struct _node{
//    Data data;
//    struct _node * prev;
//    struct _node * next;
//}Node;
//
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
//
//
//#endif
