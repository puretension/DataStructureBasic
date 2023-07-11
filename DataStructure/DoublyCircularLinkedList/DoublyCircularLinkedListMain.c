//#include <stdio.h>
//#include <stdlib.h>
//#include "DoublyCircularLinkedList.h"
//
//int main(){
//    
//    List list;
//    int data, choice,index;
//    
//    ListInit(&list);
//    
//    while (1)
//    {
//        system("cls");
//        printf("\n\n\n\t\t 이중 원형 연결 리스트(doubly Circular linked list) \n\n\n");
//        printf("\t\t 1. 노드 맨 앞 삽입\n");
//        printf("\t\t 2. 노드 맨 뒤 삽입\n");
//        printf("\t\t 3. 노드 N번째 삽입\n");
//        printf("\t\t 4. 순행 조회\n");
//        printf("\t\t 5. 역순 조회\n");
//        printf("\t\t 6. 맨 앞 노드 삭제\n");
//        printf("\t\t 7. 맨 뒤 노드 삭제\n");
//        printf("\t\t 8. N번째 노드 삭제\n");
//        printf("\t\t 9. 전체 노드 삭제\n");
//        printf("\t\t10. 총 노드의 개수 구하기\n");
//        printf("\t\t11. (오름차순)정렬 하기\n");
//        printf("\t\t 0. 프로그램 종료\n");
//        
//        printf("\n\n메뉴 선택 : ");
//        scanf("%d", &choice);
//        while (getchar() != '\n');
//    
//        switch (choice)
//        {
//            case 1: printf("데이터 입력: ");
//                scanf("%d", &data);
//                InsertFront(&list, data);
//                break;
//            case 2: printf("데이터 입력: ");
//                scanf("%d", &data);
//                InsertRear(&list, data);
//                break;
//            case 3: printf("데이터 입력: ");
//                scanf("%d", &data);
//                printf("몇번째 삽입 하시겠습니까? : ");
//                scanf("%d", &index);
//                InsertFrontNth(&list, index, data);
//                break;
//            case 4: Display(&list);
//                break;
//            case 5: DisplayReverse(&list);
//                break;
//            case 6: DeleteFront(&list);
//                break;
//            case 7: DeleteRear(&list);
//                break;
//            case 8: printf("몇번째 데이터를 삭제하시겠습니까? ");
//                scanf("%d", &index);
//                DeleteFrontNth(&list, index);
//                break;
//            case 9 : DeleteAll(&list);
//                break;
//            case 10: printf("총 노드 개수: %d\n", GetNodeCount(&list));
//                break;
//            case 11: printf("정렬하였습니다.\n");
//                     sort(&list);
//                    break;
//            case 0: printf("프로그램을 종료합니다.\n");
//                exit(-1);
//        }
//        system("pause"); //결과 확인
//    }
//    return 0;
//}
