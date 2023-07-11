//    #include<stdio.h>
//    #include<stdlib.h>
//
//
//    typedef struct node{
//        int data;
//        struct node* next; //다음 노드를 가리키는 포!인!터
//    }Node;
//    //추상 자료형: Abstract Data Type
//
//Node*head = NULL; //첫노드를 가리킴
//Node*tail = NULL; //마지막 노드를 가리킴
//Node*cur = NULL; //순회용 노드
//Node*newNode = NULL; //동적할당할 노드
//
//
//
//    int main()
//    {
//        int readData; //값 저장을 위한 데이터
//
//        //노드삽입(순행)
//        while (1) {
//            printf("자연수 입력: ");
//                  scanf("%d",&readData);
//                  if(readData < 1) break; //자연수 입력X -> 종료
//            //1. 노드 생성후 데이터 저장
//                  newNode = (Node*)malloc(sizeof(Node)); //newNode에 동적할당
//                  newNode -> data = readData; //데이터 저장
//                  newNode -> next = NULL; //다음을 가리키는게 없으므로 NULL초기화
//
//            //2. 첫번째 노드일 경우
//            if(head == NULL)
//            {
//                head = newNode; //head는 항상 첫 노드를 가리킨다
//                tail = newNode; //tail포인터(마지막을 가리킴)는 new노드를 항상 가리킨다.
//            }
//
//            //3. 두번째이후의 노드일 경우
//            else
//            {
//                tail -> next = newNode; //2번째 노드부터는 tail포인터로 순행으로 연결한다(head는 첫노드 가리키는걸로 유지)
//                tail = newNode; //tail포인터(마지막을 가리킴)는 new노드를 항상 가리킨다.
//            }
//        }
//
//
//        //노드 삽입(역순)
//        while(1)
//        {
//            printf("자연수 입력: ");
//            scanf("%d",&readData); //데이터(값) 입력
//            if(readData < 1) break;
//
//            //1. 노드 생성후 데이터 저장
//            newNode = (Node*)malloc(sizeof(Node)); //동적할당
//            newNode -> data = readData; //입력한 데이터 저장
//            newNode -> next = NULL; //next 가리키는게 없으므로 NULL초기화
//
//            //2. 첫번째 노드일 경우
//            if(head == NULL)//첫 노드일 경우
//            {
//                head = newNode;
//                tail = newNode; //첫노드이므로
//            }
//
//            //3. 두번째이후의 노드일 경우
//            else
//            {
//                newNode -> next = head;
//                head = newNode;
//            }
//        }
//
//        //노드 조회
//        if(head == NULL)
//            printf("저장된 자연수가 없습니다.\n");
//        cur = head;
//        while(cur != NULL)
//        {
//            printf("%d\n", cur -> data);
//            cur = cur -> next;
//        }
//
//        //노드 삭제
//        if(head == NULL)
//        {
//            printf("삭제할 데이터가 없습니다.\n");
//            return 0;
//        }
//
//       else
//       {
//           Node * delNode = head;
//           Node * delNextNode = head->next;
//
//           printf("%d 삭제\n", head -> data);
//           free(delNode); //1번째 노드 삭제
//
//           while (delNextNode != NULL)
//           {
//               delNode = delNextNode;
//               delNextNode = delNextNode -> next;
//
//               printf("%d 삭제\n", delNode -> data);
//               free(delNode); //2번째 이후 노드 삭제
//           }
//       }
//
//        return 0;
//    }
//
