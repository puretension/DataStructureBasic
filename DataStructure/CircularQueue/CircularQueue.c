//#include<stdio.h>
//#include<stdlib.h>
//#include "CircularQueue.h"
//
////typedef int Data;
////
////typedef struct _cQueue{
////    int front;
////    int rear;
////    Data queArr[QUE_LEN];
////}
////
////typedef Cqueue Queue;
////
////void QueueInit(Queue* pq);
//
//void QueueInit(Queue * pq){
//    pq -> front = 0;
//    pq -> rear = 0;
//}
//
//int QIsEmpty(Queue * pq){
//    if(pq -> front == pq-> rear) return TRUE;
//    else return FALSE;
//}
//
//int NextPosIdx(int pos){
//    if(pos == QUE_LEN -1) return 0; //배열길이 -1이 pos라면 마지막 인덱스를 의미
//    else return pos + 1;
//}
//
//void Enqueue(Queue * pq, Data data){
//    if(NextPosIdx(pq -> rear) == pq -> front)
//    {
//        printf("Queue Memory Error!");
//        exit(-1);
//    }
//    (pq -> rear) = NextPosIdx(pq -> rear);
//    pq -> queArr[pq ->rear] = data;
//     
//}
//
//Data Dequeue(Queue * pq){
//    if(QIsEmpty(pq)){
//        printf("Queue Memory Error!");
//        exit(-1);
//    }
//    pq -> front = NextPosIdx(pq->front);
//    return pq -> queArr[pq -> front];
//}
//
//Data QPeek(Queue * pq){
//    if(QIsEmpty(pq)){
//        printf("Queue Memory Error!");
//        exit(-1);
//    }
//    return pq -> queArr[NextPosIdx(pq -> front)];
//}
//
//int main(){
//    
//    //Queue 생성 및 초기화
//    Queue q;
//    QueueInit(&q);
//    
//    //데이터 넣기
//    Enqueue(&q, 1);
//    Enqueue(&q, 2);
//    Enqueue(&q, 3);
//    Enqueue(&q, 4);
//    Enqueue(&q, 5);
//    //데이터 꺼내기
//    while(!QIsEmpty(&q))
//        printf("%d ", Dequeue(&q));
//    return 0;
//}
//
////
////int QisEmpty(Queue * pq);
////
////void Enqueue(Queue * pq, Data data);
////Data DeQueue(Queue * pq);
////Data QPeek(Queue * pq);
//
//#include<stdio.h>
//#include<stdlib.h>
//
//#define TRUE 1
//#define FALSE 0
//
//#define QUE_LEN 100
//
//typedef int Data;
//
//typedef struct _cQueue{
//    int front;
//    int rear;
//    Data queArr[QUE_LEN];
//}CQueue;
//
//typedef CQueue Queue;
//
//void QueueInit(Queue * pq){
//    pq -> front = 0;
//    pq -> rear = 0;
//}
//
//int QIsEmpty(Queue * pq){
//    if(pq -> front == pq -> rear) return TRUE;
//    else return FALSE;
//}
//
//int NextPosIdx(int pos){
//    if(pos == QUE_LEN)
//    {
//        printf("배열의 마지막 인덱스라 다음으로 이동불가합니다.\n");
//        exit(-1);
//    }
//    return ++pos;
//}
//
//void Enqueue(Queue * pq, Data data){
//    if(pq -> queArr[NextPosIdx(pq -> rear)] == pq -> front)
//    {
//        printf("배열이 꽉찼습니다.\n");
//        exit(-1);
//    }
//    pq -> rear = NextPosIdx(pq -> rear);
//    pq -> queArr[pq -> rear] = data;
//    
//}
//
//Data DeQueue(Queue * pq){
//    if(QIsEmpty(pq)){
//        printf("큐가 비었습니다.\n");
//        exit(-1);
//    }
//    pq -> front = NextPosIdx(pq -> front);
//    return pq -> queArr[pq -> front];
//}
//
//Data QPeek(Queue * pq){
//    if(QIsEmpty(pq)){
//        printf("큐가 비었습니다.\n");
//        exit(-1);
//    }
//    //front를 이동시키면은 안된다.
//    // why? 단순히 맨앞 데이터를 출력하는 것일뿐. front이동시 dequeue가 되버림
//    return pq -> queArr[NextPosIdx(pq -> front)];
//}
//
//
