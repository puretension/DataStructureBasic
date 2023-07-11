//#include <stdio.h>
//#include <stdlib.h>
//#include "DBLinkedList.h"
//
//
//int main()
//{
//    List list;
//    int data;
//    ListInit(&list);
//    
//    LInsert(&list, 2);
//    LInsert(&list, 4);
//    LInsert(&list, 8);
//    
//    printf("현재 데이터 수: %d\n", LCount(&list));
//    
//    if(LFirst(&list, &data))
//    {
//        printf("%d ", data);
//        
//        while (LNext(&list, &data)) {
//            printf("%d ", data);
//        }
//    }
//    
//    
//    printf("\n\n");
//    
//        if(LFirst(&list, &data))
//        {
//            if(data == 4)
//                LRemove(&list);
//    
//            while(LNext(&list, &data))
//            {
//                if(data == 4)
//                    LRemove(&list);
//            }
//        }
//    
//    printf("현재 데이터 수: %d\n", LCount(&list));
//    
//        if(LFirst(&list, &data))
//        {
//            printf("%d ", data);
//    
//            while(LNext(&list, &data))
//                printf("%d ", data);
//        }
//        printf("\n\n");
//    
//    return 0;
//}
