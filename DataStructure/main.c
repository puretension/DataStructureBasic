#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//    int a = 10;
//    int b[5] = {10,20,30,40,50};
//    int *p;
//    p = &a;
//    printf("a = %d, address of a = %p\n", a,&a);
//    printf("a = %p, *p = %d\n", p, *p);
//    printf("b = %p, b[0] = %d, b[1] = %d, b[2] = %d\n", b, b[0], b[1], b[2]);
//
//    p = &b;
//    printf("p = %p, *p = %d, *(p+1) = %d, *(p+2) = %d\n", p, *p, *(p+1),*(p+2));
//
//    return 0;
//}



//
//#define TRUE 1
//#define FALSE 0
//
//typedef int LData;
//
//typedef struct _node
//{
//    LData data;
//    struct _node * next;
//} Node;
//
//
////LinkedList와 연관된 포인터 변수를 구조체로 별도로 정의
//typedef struct _linkedList{
//    Node * head;
//    Node * cur;
//    Node * before;
//    int numOfData;
//    int(*comp) (LData d1, LData d2);
//}LinkedList;
//
//typedef LinkedList List;
//
//void ListInit(List * plist); //연결리스트 생성
//
//void LInsert(List * plist, LData data); //(NEW 데이터) 삽입하되, 정렬할거냐 안할거냐 여부
//void FInsert(List * plist, LData data); //head에 data추가(정렬X)
//void SInsert(List * plist, LData data); //정렬기반 data추가
//
//int LFirst(List * plist, LData * pdata); //데이터 참조 초기화(첫번째 데이터를 참조함) 및 Bool로 반환
//int LNext(List * plist, LData * pdata);
////다음번째 데이터 참조 및 Bool로 반환, 순차적 참조를 위한 반복호출 가능하며 참조 새로 시작원하면 LFirst먼저 호출
//
//LData LRemove(List * plist); //LFirst, LNext으로 반환한 데이터 삭제
//int LCount(List * plist); //저장된 데이터 총 수
//
//void SetSortRule(List * plist, int (*comp)(LData d1, LData d2)); //정렬 함수 등록 함수
//
//
////130 그림 생성
//void ListInit(List * plist){
//    plist -> head = (Node*)malloc(sizeof(Node)); //1개의 더미노드 생성, head는 더미노드를 가리킴(더미노드는 head를 통해서 접근)
//    plist -> head-> next = NULL;
//    //plist -> cur = NULL;
//    //plist -> before = plist ->head;
//    plist -> numOfData = 0;
//    plist -> comp = NULL;
//}
//
//void LInsert(List * plist, LData data){
//    if(plist -> comp == NULL) //정렬기준이 없다면?
//        FInsert(plist,data); //head에 data(노드) 추가
//    else
//        SInsert(plist,data); //정렬기반에 data(노드) 추가
//}
//
//void FInsert(List * plist, LData data)
//{
//    Node * newNode = (Node*)malloc(sizeof(Node));
//
//    newNode -> data = data;
//    newNode -> next = plist -> head -> next;
//    plist -> head -> next = newNode;
//
//    (plist -> numOfData)++;
//}
//
////오름차순 정렬 기반해서 삽입
//void SInsert(List * plist, int data){
//
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    Node * pred = plist -> head;
//
//    //첫번째(새로운 데이터)랑 두번째(기존 노드) 비교해서 첫번째가 더 작다면 0리턴임. 첫번째가 크다면 계속 루프.
//    // 시작으로 pred(== head) -> next는 더미의 next. 최초 저장값에서 시작
//    while (pred -> next != NULL && plist -> comp(data, pred -> next -> data)) {
//        pred = pred -> next;
//    }
//    newNode -> next = pred -> next;
//    pred -> next = newNode;
//    (plist -> numOfData)++;
//}
//
////데이터 참조 초기화(첫번째 데이터를 참조함) 및 Bool로 반환
//int LFirst(List * plist, LData * pdata){
//    //더미노드가 가리키는게 잇는가(저장된 데이터가 0개가 아닌지)부터 체크한다
//    if(plist -> head -> next == NULL)
//    {
//        printf("저장된 데이터가 없습니다.\n");
//        return FALSE;
//    }
//    //왜 before이랑 cur 두개로 했는가?
//    // => 여기서는 당장 필요 없으나, 노드 삭제(remove 함수 호출)를 위함
//    else
//        plist -> before = plist -> head; //현재 더미노드 가리킴
//        plist -> cur = plist -> head -> next; //첫번째(값이있는) 노드 가리킴
//        *pdata = plist -> cur -> data;
//    return TRUE; //참조 성공을 했음을 알리는 1
//}
//
//int LNext(List * plist, LData * pdata){
//    if(plist -> cur -> next == NULL) //더이상의 데이터가 없다면?
//        return FALSE;
//    //if(plist -> cur == NULL) //이럴 가능성은 없다.
//
//    //있다면 한칸씩 뒤로 이동 코드 2줄
//        plist -> before = plist -> cur;
//        plist -> cur = plist -> cur -> next;
//
//    * pdata = plist -> cur -> data;
//    return TRUE;
//}
//
//LData LRemove(List * plist){
//    Node *rpos = plist -> cur; //소멸대상의 주소값 저장
//    LData removeData = rpos -> data; //저장된 주소값의 데이터 저장(반환용)
//
//    plist -> before -> next = plist -> cur -> next;
//    plist -> cur = plist -> before; //2와6중간에 위치한 4를 제거햇는데 6을 참조하면안됨 2로 back
//
//    free(rpos);
//    (plist -> numOfData)--; //1개 감소
//
//    return removeData;
//}
//
//int LCount(List * plist){
//    return plist -> numOfData;
//}
//
//void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
//{
//    plist->comp = comp;
//}
//
//int WhoIsPrecede(int d1, int d2)
//{
//    return (d1 < d2) ? 0 : 1;
//}
//
//int main(void)
//{
//    //리스트 생성 및 초기화
//    List list;
//    int data;
//    ListInit(&list);
//
//    SetSortRule(&list, WhoIsPrecede);
//
//    //5개 데이터 저장
//    LInsert(&list, 11);
//    LInsert(&list, 11);
//    LInsert(&list, 22);
//    LInsert(&list, 22);
//    LInsert(&list, 33);
//
//    //저장 데이터 전체 출력
//    printf("현재 데이터의 수: %d \n", LCount(&list));
//
//    if(LFirst(&list, &data))
//    {
//        printf("%d ", data);
//
//        while(LNext(&list, &data))
//            printf("%d ", data);
//    }
//    printf("\n\n");
//
//    //숫자 22 검색하여 모두 삭제
//    if(LFirst(&list, &data))
//    {
//        if(data == 22)
//            LRemove(&list);
//
//        while(LNext(&list, &data))
//        {
//            if(data == 22)
//                LRemove(&list);
//        }
//    }
//
//    //삭제후 남아있는 데이터 전체 출력
//    printf("현재 데이터의 수: %d\n", LCount(&list));
//
//    if(LFirst(&list, &data))
//    {
//        printf("%d ", data);
//
//        while(LNext(&list, &data))
//            printf("%d ", data);
//    }
//
//    printf("\n\n");
//    return 0;
//}
//

//typedef struct node * node_pointer;
//
//typedef struct node{
//    node_pointer llink;
//    int data;
//    node_pointer rlink;
//};
//
//void delete_zero(node_pointer head){
//    node_pointer p = head->rlink;
//    node_pointer temp;
//    while(p != NULL){
//        if(p -> data == 0){
//            temp = p;
//            p -> llink -> rlink = p -> rlink -> llink;
//            p -> rlink -> llink = p -> llink -> rlink;
//            p = p->rlink;
//            free(temp);
//        }
//        else
//            p = p->rlink;
//    }
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//
//typedef struct node{
//    int data;
//    struct node* next; //다음 노드를 가리키는 포인터(연결을 담당한다)
//}Node;
//
//int main()
//{
//    //포인터는 타입에 관계없이 무조건 주소만 저장하며 8바이트(Node타입을 저장할 수 있는 포!인!터!)
//    Node*head = NULL;
//    Node*tail = NULL;
//    Node*curNode = NULL;
//
//    Node*newNode = NULL;
//
//    int readData;
//
//    //노드 삽입(역순)
////    while(1)
////    {
////        printf("자연수 입력: ");
////        scanf("%d",&readData);
////        if(readData < 1) break;
////
////        newNode = (Node*)malloc(sizeof(Node));
////        newNode -> data = readData;
////        newNode -> next = NULL;
////
////        //1단계
////        if(head == NULL)//첫 노드일 경우
////        {
////            head = newNode;
////            tail = newNode;
////        }
////        else
////        {
////            newNode -> next = head;
////            head = newNode;
////        }
////    }
//    //노드삽입(순행)
//    while (1) {
//        printf("자연수 입력: ");
//              scanf("%d",&readData);
//              if(readData < 1) break;
//
//              newNode = (Node*)malloc(sizeof(Node));
//              newNode -> data = readData;
//              newNode -> next = NULL;
//
//        //1단계
//        if(head == NULL) head = newNode;
//        else tail -> next = newNode;
//
//        tail = newNode;
//    }
//
//    //노드 조회
//    if(head == NULL)
//        printf("저장된 자연수가 없습니다.\n");
//    curNode = head;
//    while(curNode != NULL)
//    {
//        printf("%d\n", curNode -> data);
//        curNode = curNode -> next;
//    }
//
//    //노드 삭제
//    if(head == NULL)
//    {
//        printf("삭제할 데이터가 없습니다.\n");
//        return 0;
//    }
//
//   else
//   {
//       Node * delNode = head;
//       Node * delNextNode = head->next;
//
//       printf("%d 삭제\n", head -> data);
//       free(delNode); //1번째 노드 삭제
//
//       while (delNextNode != NULL)
//       {
//           delNode = delNextNode;
//           delNextNode = delNextNode -> next;
//
//           printf("%d 삭제\n", delNode -> data);
//           free(delNode); //2번째 이후 노드 삭제
//       }
//   }
//
//    return 0;
//}
//


//typedef struct list_node * list_pointer;
//
//typedef struct node{
//    int class;
//    int data;
//    list_pointer link;
//};
//
//list_pointer * head = NULL;
//
//int main()
//{
//    list_pointer * newNode, *cur;
//    printf("\n\n *** 노드 정렬 삽입 | O(N) ***\n");
//    newNode = (list_pointer*)malloc(sizeof(list_pointer));
//    
//    return 0;
//}

