//#include "stdio.h"
//#include "stdlib.h"
//#include "BST.h"
//
//
////typedef struct _node{
////    int data;
////    struct _node * left;
////    struct _node * right;
////}Node;
////
////Node * root;
//
//Node * BSTInsert(Node * pRoot, int data);
//Node * BSTSearch(Node * pRoot, int target);
//void BSTDisplay(Node * pRoot);
//Node * BSTDelete(Node * pRoot, int target);
//Node * BSTMinNode(Node * pRoot);
//Node * BSTMaxNode(Node * pRoot);
//
//Node * BSTInsert(Node * pRoot, int data){
//    if(pRoot == NULL)
//    {
//        pRoot = (Node*)malloc(sizeof(Node));
//        pRoot -> data = data;
//        pRoot -> left = pRoot -> right = NULL;
//    }
//
//    else if(pRoot -> data > data)
//        pRoot -> left = BSTInsert(pRoot -> left, data);
//
//    else if(pRoot -> data < data)
//        pRoot -> right = BSTInsert(pRoot -> right, data);
//
//    return pRoot;
//}
//
//Node * BSTSearch(Node * pRoot, int target){
//    if(pRoot == NULL)
//        return NULL;
//    //첫 루트노드가 찾는 값일 경우
//    if(pRoot -> data == target)
//        return pRoot;
//    else if(pRoot -> data < target)
//        return BSTSearch(pRoot -> right, target);
//    else if(pRoot -> data > target)
//        return BSTSearch(pRoot -> left, target);
//    else
//    {
//        printf("존재하지 않는 데이터입니다.\n");
//        return NULL;
//    }
//}
//
//void BSTDisplay(Node * pRoot)
//{
////중위 순회 방식
//    if(pRoot != NULL){
//        BSTDisplay(pRoot -> left);
//        printf("%d ",pRoot -> data);
//        BSTDisplay(pRoot -> right);
//    }
//}
//
////삭제만 다시!
//Node * BSTDelete(Node * pRoot, int target){
//    if(pRoot == NULL)
//    {
//        printf("삭제할 데이터가 없습니다\n");
//        return NULL;
//    }
//    Node * temp = NULL;
//    //3 삭제하고싶은데 5 놓여저 있을때
//   if(pRoot -> data > target)
//       pRoot -> left = BSTDelete(pRoot -> left, target);
//    //5 삭제하고싶은데 3 놓여저 있을때
//    else if(pRoot -> data < target)
//        pRoot -> right = BSTDelete(pRoot -> right, target);
//    //삭제할 노드는 찾았고 그 삭제할 노드의 자식노드가 0개일때/1개일때/2개일때
//    else{
//
//        //1. 삭제할 노드의 자식노드가 둘다 없을때
//        if(pRoot -> left == NULL && pRoot -> right == NULL)
//        {
//            free(pRoot);
//            return NULL;
//        }
//
//        //2. 자식노드가 1개일때(왼쪽 자식만 있을때)
//        else if(pRoot -> right == NULL){
//            temp = pRoot -> left;
//            free(pRoot);
//            return temp;
//        }
//
//        //3. 자식노드가 1개일때(오른쪽 자식만 있을때)
//        else if(pRoot -> left == NULL){
//            temp = pRoot -> right;
//            free(pRoot);
//            return temp;
//        }
//        //3. ⭐️자식노드가 2개일때⭐️
//        else {
//            //1. 방법1. 왼쪽 자식노드중 가장 큰 값을 삭제할 노드 자리로 옮긴다.
////            temp = BSTMaxNode(pRoot -> left); //(현재)삭제할 노드의 왼쪽 자식중 가장 큰 값 찾아 temp 저장
////            pRoot -> data = temp -> data; //삭제할 노드의 값을 구한 값으로 대체함
////            BSTDelete(pRoot, temp -> data); //temp노드 찾아서 삭제
//            //1. 방법2. 오른쪽 자식노드중 가장 작은 값을 삭제할 노드 자리로 옮긴다.
//            temp = BSTMinNode(pRoot -> right); //삭제할 노드의 오른쪽 자식중 가장 작은 값 찾아 temp 저장
//            pRoot -> data = temp -> data; //삭제할 노드의 값을 구한 값으로 대체함
//            BSTDelete(pRoot, temp -> data); //temp노드 찾아서 삭제
//        }
//    }
//    return pRoot;
//}
//
//Node * BSTMinNode(Node * pRoot){
//    Node * temp = pRoot;
//    while(temp -> left != NULL)
//        temp = temp -> left;
//    return temp;
//}
//
//Node * BSTMaxNode(Node * pRoot){
//    Node * temp = pRoot;
//    while(temp -> right != NULL)
//        temp = temp -> right;
//    return temp;
//}
//
//
//
//
//
//
//int main(){
//    Node * root = NULL;
//    Node * searchNode = NULL;
//    int choice, data;
//
//    while (1)
//    {
//        //system("cls");
//        printf("\n\n\t\t *** Binary Search Tree(BST) ***\n\n");
//        printf("1. 노드 추가\n");
//        printf("2. 노드 제거\n");
//        printf("3. 노드 검색\n");
//        printf("4. 노드 출력\n");
//        printf("5. 최댓값\n");
//        printf("6. 최솟값\n");
//        printf("0. 프로그램 종료\n");
//        printf("메뉴 선택 : ");
//        scanf("%d", &choice);
//        while (getchar() != '\n');
//
//        switch(choice){
//            case 1:
//                printf("삽입할 정수 입력: ");
//                scanf("%d", &data);
//                while (getchar() != '\n');
//                root = BSTInsert(root, data);
//                break;
//            case 2:
//                printf("제거할 정수 입력: ");
//                scanf("%d", &data);
//                while (getchar() != '\n');
//                root = BSTDelete(root, data);
//                break;
//            case 3:
//                printf("검색할 정수 입력: ");
//                scanf("%d", &data);
//                while (getchar() != '\n');
//                searchNode = BSTSearch(root, data); //검색한 노드가 있다면 그 주소를 리턴
//                if(searchNode == NULL)
//                    printf("검색한 노드는 존재하지 않는 노드입니다.\n");
//                else
//                    printf("검색한 노드의 값은 %d이며 존재합니다\n", searchNode -> data);
//                break;
//            case 4:
//                printf("오름차순 정렬로 출력합니다.\n");
//                BSTDisplay(root);
//                break;
//            case 5:
//                searchNode = BSTMaxNode(root); //최댓값 노드를 구해 리턴
//                printf("\n\n\t\t최댓값은 %d입니다.\n", searchNode->data);
//                break;
//            case 6:
//                searchNode = BSTMinNode(root); //최솟값 노드를 구해 리턴
//                printf("\n\n\t\t최솟값은 %d입니다.\n", searchNode->data);
//                break;
//            case 0:
//                exit(-1);
//        }
//        printf("\n\n");
//        //system("pause");
//    }
//    return 0;
//}
