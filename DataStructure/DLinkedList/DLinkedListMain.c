//#include <stdio.h>
//#include "DLinkedList.h"
//
//
//int main(void)
//{
//    //
//    List list;
//    int data;
//    ListInit(&list);
//
//    FInsert(&list, 11);  FInsert(&list, 11);
//    FInsert(&list, 22);  FInsert(&list, 22);
//    FInsert(&list, 33);
//
//    printf("현재 데이터 수: %d \n", LCount(&list));
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
//    printf("현재 데이터 수: %d \n", LCount(&list));
//
//    if(LFirst(&list, &data))
//    {
//        printf("%d ", data);
//        
//        while(LNext(&list, &data))
//            printf("%d ", data);
//    }
//    printf("\n\n");
//    return 0;
//}
//
