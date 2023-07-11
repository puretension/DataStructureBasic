////#include <stdio.h>
////#include "CLinkedList.h"
////
//////int main()
//////{
//////    // 원형 연결리스트 생성 및 초기화
//////    List list;
//////    int data, i, nodeNum;
//////    ListInit(&list);
//////
//////    //리스트에 5개의 데이터 저장
//////    LInsert(&list, 3);
//////    LInsert(&list, 4);
//////    LInsert(&list, 5);
//////    LInsertFront(&list, 2);
//////    LInsertFront(&list, 1);
//////
//////    //리스트에 저장된 데이터 연속 3회 출력
//////    if(LFirst(&list, &data))
//////    {
//////        printf("%d ", data); //처음꺼만 출력해주고 [1]
//////
//////        for(i=0; i<LCount(&list)*3-1; i++)
//////        {
//////            if(LNext(&list, &data)) //원형이기때문에 [2,3,4,5] [1,2,3,4,5] [1,2,3,4,5]로
//////                printf("%d ", data);
//////        }
//////    }
//////    printf("\n");
//////
//////    // 2배수 찾아서 모두 삭제
//////    nodeNum = LCount(&list);
//////
//////    if(nodeNum != 0)
//////    {
//////        LFirst(&list, &data);
//////        if(data%2 == 0)
//////            LRemove(&list);
//////
//////        for(i=0; i < nodeNum-1; i++)
//////        {
//////            LNext(&list, &data);
//////            if(data%2 == 0)
//////                LRemove(&list);
//////        }
//////    }
//////
//////    //전체 데이터 1회 출력
//////    if(LFirst(&list, &data))
//////    {
//////        printf("%d ", data);
//////
//////        for(i=0; i<LCount(&list)-1; i++)
//////        {
//////            if(LNext(&list, &data))
//////                printf("%d ", data);
//////        }
//////    }
//////    return 0;
//////}
////
////int main(){
////
////        List list;
////        int data, i;
////        ListInit(&list);
////    LInsertFront(&list, 1);
////    LInsertFront(&list, 2);
////    LInsertFront(&list, 3);
////    LInsertFront(&list, 4);
////    LInsertFront(&list, 5);
//////        if(LFirst(&list, &data))
//////        {
//////            printf("%d ", data);
//////
//////            for(i=0; i<LCount(&list)-1; i++)
//////            {
//////                if(LNext(&list, &data))
//////                    printf("%d ", data);
//////            }
//////        }
////        if(LFirst(&list, &data))
////        {
////            printf("%d ", data);
////            LRemove(&list);
////            while(LNext(&list, &data))
////            {
////
////                    printf("%d ", data);
////                    LRemove(&list);
////
////            };
////        }
////
////    return 0;
////}
//
//#include <stdio.h>
//#include "CLinkedList.h"
//
//int main()
//{
//
//    // 원형 연결리스트 생성 및 초기화
//    List list;
//    int data, i, nodeNum;
//    ListInit(&list);
//
//    //리스트에 5개의 데이터 저장
//    LInsertRear(&list, 3);
//    LInsertRear(&list, 4);
//    LInsertRear(&list, 5);
//    LInsertFront(&list, 2);
//    LInsertFront(&list, 1);
//    
//
//    //리스트에 저장된 데이터 연속 3회 출력
//    if(LFirst(&list, &data))
//    {
//        printf("%d ", data);
//        
//        for(i=0; i<LCount(&list)*3-1; i++)
//        {
//            if(LNext(&list, &data))
//                printf("%d ", data);
//        }
//    }
//    printf("\n");
//
//
//    // 2배수 찾아서 모두 삭제
//    nodeNum = LCount(&list);
//
//    if(nodeNum != 0)
//    {
//        LFirst(&list, &data);
//        if(data%2 == 0)
//            LRemove(&list);
//        
//        for(i=0; i < nodeNum-1; i++)
//        {
//            LNext(&list, &data);
//            if(data%2 == 0)
//                LRemove(&list);
//        }
//    }
//
//    //전체 데이터 1회 출력
//    if(LFirst(&list, &data))
//    {
//        printf("%d ", data);
//        
//        for(i=0; i<LCount(&list)-1; i++)
//        {
//            if(LNext(&list, &data))
//                printf("%d ", data);
//        }
//    }
//    return 0;
//}
