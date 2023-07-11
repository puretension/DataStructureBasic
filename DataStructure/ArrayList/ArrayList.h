//#ifndef __ARRAY_LIST_H__
//#define __ARRAY_LIST_H__
////위 선언은 헤더파일의 중복을 막기위한 선언
//#define TRUE    1
//#define FALSE    0
//
////ArrayList의 정의
//#define LIST_LEN    100
//
//#include "PointArrayList.h"
////typedef int LData;
//typedef Point* LData;
//
//typedef struct ArrayList
//{
//    LData arr[LIST_LEN];
//    int numOfData; //데이터수
//    int curPosition; //데이터 참조 위치
//} ArrayList;
//
////ArrayList관련 연산들
//typedef ArrayList List;
//
//void ListInit(List * plist);
////초기화할 리스트의 주소값을 argument로 전달해, 리스트 생성
//void LInsert(List * plist, LData data);
////data를 리스트에 저장
//int LFirst(List * plist, LData * pdata);
//int LNext(List * plist, LData * pdata);
//
//LData LRemove(List * plist);
//int LCount(List * plist);
//
//#endif
//
//
////ArrayList 소스파일은 직접 구현이 가능해야함
//
//
//
