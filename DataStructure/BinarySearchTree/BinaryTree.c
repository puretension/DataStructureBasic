#include<stdio.h>
#include<stdlib.h>
#include "BinaryTree.h"

////typedef int BTData;
////
////typedef struct _bTreeNode{
////    BTData data;
////    struct _bTreeNode * left;
////    struct _bTreeNode * right;
////}BTreeNode;
////
////BTreeNode * MakeBTreeNode(); //노드 생성 및 주소값 반환
////BTData GetData(BTreeNode * bt); //노드의 데이터 값 반환
////void SetData(BTreeNode * bt, BTData data); //노드에 데이터 값 저장
////
////BTreeNode * GetLeftSubTree(BTreeNode * bt); //왼쪽 서브트리 주소값 반환
////BTreeNode * GetRightSubTree(BTreeNode * bt); //오른쪽 서브트리 주소값 반환
////
////void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub); //노드A의 왼쪽 자식 노드로 노드B 연결
////void MakeRightSubTree(BTreeNode * main, BTreeNode * sub); //노드A의 오른쪽 자식 노드로 노드C 연결
//
//
//BTreeNode * MakeBTreeNode(){
//    BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));
//    nd -> left = NULL;
//    nd -> right = NULL;
//    return nd;
//}
//
//BTData GetData(BTreeNode * bt){
//    return bt -> data;
//}
//
//void SetData(BTreeNode * bt, BTData data){
//    bt -> data = data;
//}
//
//BTreeNode * GetLeftSubTree(BTreeNode * bt){
//    return bt -> left;
//}
//
//BTreeNode * GetRightSubTree(BTreeNode * bt){
//    return bt -> right;
//}
//
//void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub){
//    if(main -> left != NULL)
//        free(main -> left);
//
//    main -> left = sub;
//}
//
//void MakeRightSubTree(BTreeNode * main, BTreeNode * sub){
//    if(main -> right != NULL)
//        free(main -> right);
//
//    main -> right = sub;
//}
//
//////함수의 주소값을 파라미터 action으로 전달
////void PreorderTraverse(BTreeNode * bt, VisitFuncPtr action){
////    if(bt == NULL) return;
////
////    //action(bt -> data);
////    printf("%d ", bt -> data);
////    PreorderTraverse(bt -> left, action);
////    PreorderTraverse(bt -> right, action);
////}
//
//void PreorderTraverse(BTreeNode * bt){
//    if(bt == NULL) return;
//
//    //action(bt -> data);
//    printf("%d ", bt -> data);
//    PreorderTraverse(bt -> left);
//    PreorderTraverse(bt -> right);
//}
//
//void InorderTraverse(BTreeNode * bt){
//    if(bt == NULL) return;
//
//    InorderTraverse(bt -> left);
//    printf("%d ", bt -> data);
//    InorderTraverse(bt -> right);
//}
//
//void PostorderTraverse(BTreeNode * bt){
//    if(bt == NULL) return;
//
//    PostorderTraverse(bt -> left);
//    PostorderTraverse(bt -> right);
//    printf("%d ", bt -> data);
//}
//
////루트노드는 마지막 소멸되야함 => 후위순회로 삭제
//void DeleteTree(BTreeNode * bt){
//    if(bt == NULL) return;
//    DeleteTree(bt -> left);
//    DeleteTree(bt -> right);
//    printf("del tree data: %d\n", bt -> data);
//    free(bt);
//
//}
//
//void ShowIntData(BTData data){
//    printf("%d ", data);
//}
//
//int main(void)
//{
//
//    //노드 6개 생성
//    BTreeNode * bt1 = MakeBTreeNode();
//    BTreeNode * bt2 = MakeBTreeNode();
//    BTreeNode * bt3 = MakeBTreeNode();
//    BTreeNode * bt4 = MakeBTreeNode();
//    BTreeNode * bt5 = MakeBTreeNode();
//    BTreeNode * bt6 = MakeBTreeNode();
//
//    //각 노드에 데이터 값 저장
//    SetData(bt1, 1);
//    SetData(bt2, 2);
//    SetData(bt3, 3);
//    SetData(bt4, 4);
//    SetData(bt5, 5);
//    SetData(bt6, 6);
//
//    //노드 연결
//    MakeLeftSubTree(bt1, bt2);
//    MakeRightSubTree(bt1, bt3);
//    MakeLeftSubTree(bt2, bt4);
//    MakeRightSubTree(bt2, bt5);
//    MakeRightSubTree(bt3, bt6);
//
//    //재귀 방법 이용
////    PreorderTraverse(bt1, ShowIntData);
//    printf("\n");
//    InorderTraverse(bt1);
//    printf("\n");
//    PostorderTraverse(bt1);
//    printf("\n");
//    DeleteTree(bt1);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
////배열을 트리(complete binary tree) 구조로 변경
//typedef struct tree
//{
//    int value; //값
//    struct tree* left; //왼쪽 자식 주소
//    struct tree* right; //오른쪽 자식 주소
//}tree;
//
//tree* setBinTree(int* arr, int size, int index)
//{
//    int leftIdx, rightIdx;
//    tree* newNode;
//
//    newNode = (tree*)malloc(sizeof(tree));
//    newNode->value = arr[index];
//    newNode->left = newNode->right = NULL;
//
//    leftIdx = 2 * index + 1; //왼쪽 자식의 인덱스
//    rightIdx = leftIdx + 1; //오른쪽 자식의 인덱스
//
//    if(leftIdx < size) //재귀호출의 종료 조건
//        newNode->left = setBinTree(arr, size, leftIdx);//왼쪽 자식을 만들기 위한 재귀호출
//
//    if(rightIdx < size) //재귀호출의 종료 조건
//        newNode->right = setBinTree(arr, size, rightIdx);//오른쪽 자식을 만들기 위한 재귀호출
//
//    return newNode; //현재 노드 리턴
//}
//
//
//
//void displayInOrder(tree* t)
//{
//    //중위 순회로 데이터를 출력
//    if (t != NULL)
//    {
//        displayInOrder(t->left);
//        printf("%d ", t->value);
//        displayInOrder(t->right);
//    }
//}
//
//void displayPreOrder(tree* t)
//{
//    //전위 순회로 데이터를 출력
//    if (t != NULL)
//    {
//        printf("%d ", t->value);
//        displayPreOrder(t->left);
//        displayPreOrder(t->right);
//    }
//}
//
//void displayPostOrder(tree* t)
//{
//    //후위 순회로 데이터를 출력
//    if (t != NULL)
//    {
//        displayPostOrder(t->left);
//        displayPostOrder(t->right);
//        printf("%d ", t->value);
//    }
//}
//
//tree* memoryFree(tree* t)
//{
//    //후위 순회로 데이터를 제거
//    if (t != NULL)
//    {
//        memoryFree(t->left);
//        memoryFree(t->right);
//        printf("%d노드 제거\n", t->value);
//        free(t);
//    }
//    return NULL;
//}
//
//int getNodeCount(tree* t)
//{
//    if (t != NULL)
//        return 1 + getNodeCount(t->left) + getNodeCount(t->right);
//    return 0;
//}
//
//
//
//int main()
//{
//    int count;
//    int arr[] = {6, 4, 8, 2, 5, 7, 9, 1, 3};
//
//    tree* root  = NULL; //트리의 시작 노드의 주소를 저장
//    //setBinTree : 트리 구성 후 루트의 주소를 리턴
//    root = setBinTree(arr, 9, 0); //배열주소, 배열의 크기, 루트노드의 인덱스
//
//    printf("tree inorder : ");
//    displayInOrder(root); //중위 순회 방식으로 출력
//    puts("");
//
//    printf("tree preorder : ");
//    displayPreOrder(root); //중위 순회 방식으로 출력
//    puts("");
//
//    printf("tree postorder : ");
//    displayPostOrder(root); //중위 순회 방식으로 출력
//    puts("");
//
//    count = getNodeCount(root);
//    printf("전체 노드의 개수는 %d개 입니다.\n", count);
//
//    root = memoryFree(root);
//    return 0;
//}

