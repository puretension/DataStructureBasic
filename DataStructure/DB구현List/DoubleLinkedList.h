//#ifndef DoubleLinkedList_h
//#define DoubleLinkedList_h
//
//#define TRUE    1
//#define FALSE   0
//
//
//typedef struct _node{
//    int data;
//    struct _node * prev; //다음 노드의 주소
//    struct _node * next; //이전 노드의 주소
//}Node;
//
//typedef struct _dbLinkedList{
//    Node * head; //첫번째 노드 주소 저장
//    Node * cur; //순회용 포인터
//    int numOfData; //노드 총 개수
//}DbLinkedList;
//
//typedef DbLinkedList List;
//
//
//void ListInit(List * plist); //리스트 생성
//void InsertFront(List * plist, int data); //맨앞삽입
//void InsertRear(List * plist, int data); //맨끝삽입
//void InsertFrontNth(List * plist, int index, int data); //N번째 삽입
//void DeleteFront(List * plist);//맨앞 데이터 삭제
//void DeleteRear(List * plist); //맨뒤 데이터 삭제
//void DeleteFrontNth(List * plist, int index); //N번째 데이터 삭제
//void DeleteAll(List * plist); //모든 데이터 삭제
//void Display(List * plist); //순회
//void DisplayReverse(List * plist); //역순 순회
//int GetNodeCount(List * plist); //총 노드 개수
//
//
//
//#endif
