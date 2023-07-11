#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE    1
#define FALSE    0

typedef int LData;

typedef struct _node
{
    LData data;
    struct _node * next;
} Node;

typedef struct _linkedList
{
    Node * head; //더미노드
    Node * cur; //참조 및 삭제를 위함
    Node * before; //삭제를 위함(이전의 delNextNode 떠올리기)
    int numOfData; //데이터 개수
} LinkedList;

typedef LinkedList List;

void ListInit(List * plist);//리스트 생성
void FInsert(List * plist, LData data); //데이터 삽입
void SInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata); //첫번째 데이터 참조 및 순회
int LNext(List * plist, LData * pdata); //첫번째 이후의 데이터 참조 및 순회

LData LRemove(List * plist);
int LCount(List * plist);


#endif

