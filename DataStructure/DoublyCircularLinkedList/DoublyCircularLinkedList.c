//#include <stdio.h>
//#include <stdlib.h>
//#include "DoublyCircularLinkedList.h"
//
////리스트 생성
//void ListInit(List * plist){
//    plist -> head = NULL;
//    plist -> cur = NULL;
//    plist -> numOfData = 0;
//}
//
////맨앞 삽입
//void InsertFront(List * plist, int data){
//    
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    newNode -> prev = NULL;
//    newNode -> next = NULL;
//
//    //1. 첫 노드일 경우
//    if(plist -> head == NULL){
//        //원형연결리스트의 첫 노드 삽입시 생각하기
//        newNode -> prev = newNode;
//        newNode -> next = newNode;
//        plist -> head = newNode;
//        (plist -> numOfData)++;
//        return;
//    }
//    
//    //2. 첫 노드가 아닐경우
//    //첫번째 위치한 노드를 삽입하는거니까 맨뒤 노드와의 연결을 다시하기
//    plist -> head -> prev -> next = newNode; //맨마지막 노드를 newNode와 연결
//    newNode -> prev = plist -> head -> prev; //newNode와 맨 마지막 노드 연결
//    newNode -> next = plist -> head; //newNode와 기존의 맨처음 노드 연결
//    plist -> head -> prev = newNode; //기존의 맨처음 노드와 newNode 연결
//    plist -> head = newNode; //head 위치 변경
//    (plist -> numOfData)++;
//}
//
////맨뒤 삽입
//void InsertRear(List * plist, int data){
//    
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> data = data;
//    newNode -> prev = NULL;
//    newNode -> next = NULL;
//    
//    //1. 첫 노드일 경우
//    if(plist -> head == NULL){
//        //원형연결리스트의 첫 노드 삽입시 생각하기
//        newNode -> prev = newNode;
//        newNode -> next = newNode;
//        plist -> head = newNode;
//        (plist -> numOfData)++;
//        return;
//    }
//    
//    //2. 첫 노드가 아닐경우
//    //맨뒤에 노드를 삽입하는거니까 맨처음 노드와의 연결을 다시하기
//    newNode -> prev = plist -> head -> prev;
//    newNode -> next =  plist -> head;
//    plist -> head -> prev -> next = newNode;
//    plist -> head -> prev = newNode;
//    (plist -> numOfData)++;
//}
//
////N번째 삽입시
//void InsertFrontNth(List * plist, int index, int data){
//    //1. 첫번째에 삽입하는 경우
//    if(index == 1)
//        InsertFront(plist, data);
//    //2. 마지막에 삽입하는 경우
//    else if(index == GetNodeCount(plist) + 1)
//        InsertRear(plist, data);
//    //3.생성한 노드가 없는데 2번째 이상의 자리에 삽입하고 싶을때
//    else if(plist -> head == NULL && index > 1){
//        printf("구성된 노드가 없습니다(잘못된 접근).\n");
//        return;
//    }
//    //4.노드는 생성되어 있으나, 기존 노드 개수를 초과하는 자리에 넣고 싶을때(기존의 노드로 구성된 리스트와 삽입할 노드사이에 공백이 생김)
//    else if(plist -> head != NULL && index > GetNodeCount(plist) + 1){
//        printf("index가 노드 개수를 초과합니다(잘못된 접근).\n");
//        return;
//    }
//    else{
//        Node * newNode = (Node*)malloc(sizeof(Node));
//        newNode -> data = data;
//        newNode -> prev = NULL;
//        newNode -> next = NULL;
//        
//        plist -> cur = plist -> head;
//        Node * before = NULL;
//        
//        int i = 1;
//        
//        while(++i <= index){
//            before = plist -> cur;
//            plist -> cur = plist -> cur -> next;
//        }
//        //1 2 3
//        
//        //자리를 찾았으니
//        before -> next = newNode; //그 이전 노드와 newNode
//        newNode -> prev = before; //newNode와 그 이전노드
//        newNode -> next = plist -> cur; //newNode와 그 다음노드
//        plist -> cur -> prev = newNode; //그 다음노드와 newNode
//        (plist -> numOfData)++;
//    }
//}
//
////맨앞의 노드 삭제
//void DeleteFront(List * plist){
//    if(plist -> head == NULL){
//        printf("구성된 노드가 없습니다.\n");
//        return;
//    }
//    
//    if(plist -> head -> next == NULL){
//        free(plist -> head);
//        printf("1개 남은 노드 삭제!\n");
//        (plist -> numOfData)--;
//        return;
//    }
//    
//    Node * delNode = plist -> head;
//    plist -> head -> prev -> next = plist -> head -> next; //맨 마지막과 삭제할 맨앞의 다음 노드
//    plist -> head -> next -> prev = plist -> head -> prev; //삭제할 맨앞의 다음 노드와 마지막 노드
//    plist -> head = plist -> head -> next;
//    int removeData = delNode -> data;
//    printf("%d 삭제\n", removeData);
//    free(delNode);
//    (plist -> numOfData)--;
//    delNode = NULL;
//}
//
////맨뒤의 노드 삭제
//void DeleteRear(List * plist){
//    if(plist -> head == NULL){
//        printf("구성된 노드가 없습니다.\n");
//        return;
//    }
//
//    if(plist -> head -> next == NULL){
//        free(plist -> head);
//        printf("1개 남은 노드 삭제!\n");
//        (plist -> numOfData)--;
//        return;
//    }
//
//    Node * delNode = plist -> head -> prev; //마지막 노드 설정
//    delNode -> prev -> next = plist -> head; //삭제할 마지막 노드의 이전노드와 head노드 연결
//    plist -> head -> prev = delNode -> prev; //head노드와 삭제할 마지막 노드의 이전노드 연결
//    
//    int removeData = delNode -> data;
//    free(delNode);
//    printf("%d 노드 삭제\n", removeData);
//    (plist -> numOfData)--;
//    delNode = NULL;
//}
//
////N번째 노드 삭제
//void DeleteFrontNth(List * plist, int index){
//    if(plist -> numOfData == 0)
//    {
//        printf("구성된 노드가 없습니다.\n");
//        return;
//    }
//    //1. 첫번째 노드 삭제하는 경우
//    if(index == 1)
//        DeleteFront(plist);
//    //2. 마지막노드 삭제하는 경우
////    else if(index == GetNodeCount(plist) + 1)
//        //RemoveRear(plist);
//    //3. 노드의 개수를 초과하는 인덱스의 노드를 삭제하고싶을때
//    else if(plist -> head != NULL && index > GetNodeCount(plist) + 1){
//        printf("선택한 index에 노드는 존재하지 않습니다.\n");
//        return;
//    }
//    else{
//        int removeData;
//        
//        Node * delNode = plist -> head;
//        Node * before = NULL;
//        int i = 1;
//        while(i < index){
//            
//            before = delNode;
//            delNode = delNode -> next;
//            i++;
//        }
//        
//        before -> next = delNode -> next;
//        delNode -> prev = before;
//        removeData = delNode -> data;
//        free(delNode);
//        (plist -> numOfData)--;
//        printf("%d노드 삭제\n", removeData);
//        delNode = NULL;
//    }
//    
//}
//
////모든 노드 삭제
//void DeleteAll(List * plist){
//    if(plist -> numOfData == 0)
//    {
//        printf("구성된 노드가 없습니다.\n");
//        return;
//    }
//    Node * delNode = plist -> head;
//    while (plist -> numOfData != 0) {
//        plist -> head = plist -> head -> next;
//        printf("%d 노드 삭제\n", delNode -> data);
//        free(delNode);
//        (plist -> numOfData)--;
//        delNode = plist -> head;
//    }
//}
//
////순행 조회
//void Display(List * plist){
//    if (plist -> numOfData == 0) {
//        printf("구성된 노드가 없습니다.\n");
//           return;
//       }
//    plist -> cur = plist -> head;
//    do
//    {
//        printf("%d ", plist -> cur ->data);
//        plist -> cur = plist -> cur -> next;
//    }while(plist -> cur != plist -> head);
//}
//
////역순 조회
//void DisplayReverse(List * plist)
//{
//    if (plist -> numOfData == 0) {
//        printf("구성된 노드가 없습니다.\n");
//           return;
//       }
//    plist -> cur = plist -> head -> prev; //마지막 노드로 지정
//    do
//    {
//        printf("%d ", plist -> cur ->data);
//        plist -> cur = plist -> cur -> prev;
//    }while(plist -> cur != plist -> head -> prev);
//}
//
//void sort(List * plist)
//{
//    if (plist -> numOfData == 0) {
//        printf("구성된 노드가 없습니다.\n");
//           return;
//       }
//
//    int sortingData;
//    Node * temp1 = plist -> head;
//    Node * temp2 = plist -> head;
//    do{
//        temp2 = temp1->next; //한발 앞서나간다
//        while(temp2 != plist ->head)
//        {
//            if (temp1->data > temp2->data) //앞에 노드가 뒤에노드보다 커?
//            {
//                sortingData = temp1->data;
//                temp1->data = temp2->data;
//                temp2->data = sortingData;
//            }
//            temp2 = temp2->next;
//        }
//        temp1 = temp1->next;
//    }while (temp1->next != plist -> head); //제자리로 돌아오기전까지
//}
// 
//
//int GetNodeCount(List * plist){
//    if(plist -> numOfData == 0)
//    {
//        printf("노드가 0개입니다\n");
//    }
//    return plist -> numOfData;
//}
