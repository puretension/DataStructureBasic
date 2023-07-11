//#include<stdio.h>
//#include<stdlib.h>
//#include "ListBaseQueue.h"
//
//void QueueInit(Queue * pq){
//    pq -> front = NULL;
//    pq -> rear = NULL;
//}
//
//int QIsEmpty(Queue * pq){
//    if(pq -> front == NULL) return TRUE;
//    else return FALSE;
//}
//
//void Enqueue(Queue * pq, Data data){
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode -> next = NULL;
//    newNode -> data = data;
//
//    if(QIsEmpty(pq)){
//        pq->front = newNode;
//        pq->rear = newNode;
//    }
//
//    else{
//        pq -> rear -> next = newNode;
//        pq -> rear = newNode;
//    }
//}
//
//Data Dequeue(Queue * pq){
//    Node * delNode;
//    Data removeData;
//
//    if(QIsEmpty(pq)){
//        printf("큐가 텅 비었습니다.");
//        exit(-1);
//    }
//
//    delNode = pq -> front;
//    removeData = delNode -> data;
//    pq -> front = pq -> front -> next;
//    free(delNode);
//    return removeData;
//}
//
//Data QPeek(Queue * pq){
//    if(QIsEmpty(pq)){
//        printf("큐가 텅 비었습니다.\n");
//        exit(-1);
//    }
//    return pq -> front ->data;
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
//
