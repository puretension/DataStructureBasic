//#include<stdio.h>
//#include<stdlib.h>
//#include"BinarySearchTree.h"
//
////  typedef int BTData;
////BTreeNode * MakeBTreeNode(); //노드 생성
////BTData GetData(BTreeNode * bt); //노드에 저장된 Value 반환
////void SetData(BTreeNode * bt, BTData data); //노드에 데이터 저장
////
////BTreeNode * GetLeftSubTree(BTreeNode * bt); //왼쪽 서브트리 주소값 반환
////BTreeNode * GetRightSubTree(BTreeNode * bt); //오른쪽 서브트리 주소값 반환
////
////void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub); //노드A의 왼쪽 자식 노드로 노드B 연결
////void MakeRightSubTree(BTreeNode * main, BTreeNode * sub); //노드A의 오른쪽 자식 노드로 노드C 연결
////
////typedef void (*VisitFuncPtr) (BTData data);
//
//
////typedef BTData BSTData;
////
//////BST 생성 및 초기화
////void BSTMakeAndInit(BTreeNode ** pRoot);
////
////// 노드에 저장된 데이터 반환
////BSTData BSTGetNodeData(BTreeNode * bst);
////
//////BST에 데이터 저장(노드 생성과정 포함) (데이터 삽입 함수)
////void BSTInsert(BTreeNode ** pRoot , BSTData data);
////
//////BST로 데이터 탐색 (데이터 탐색 함수)
////BTreeNode * BSTSearch(BTreeNode * bst, BSTData target);
//
//void BSTMakeAndInit(BTreeNode ** pRoot){
//    *pRoot = NULL;
//}
//
//BSTData BSTGetNodeData(BTreeNode * bst){
//    return GetData(bst);
//}
//
//void BSTInsert(BTreeNode ** pRoot, BSTData data){
//    BTreeNode * pNode = NULL; //부모 노드
//    BTreeNode * cNode = *pRoot; //현재 노드
//    BTreeNode * nNode = NULL; //새 노드
//
//    //새로운 노드를 추가할 위치부터 찾는다.
//    while(cNode != NULL)
//    {
//        if(data == GetData(cNode))
//            return; //데이터 중복 허용X
//        pNode = cNode;
//        
//        if(GetData(cNode) > data)
//            cNode = GetLeftSubTree(cNode);
//        else
//            cNode = GetRightSubTree(cNode);
//    }
//    
//    //pNode의 자식 노드로 추가할 새노드의 생성
//    nNode = MakeBTreeNode(); //새 노드 생성
//    SetData(nNode, data);
//    
//    //pNode의 자식노드로 새 노드 추가
//    if(pNode != NULL) //새노드가 루트노드가 아니라면
//    {
//        if(data < GetData(pNode))
//            MakeLeftSubTree(pNode, nNode);
//        else
//            MakeRightSubTree(pNode, nNode);
//    }
//    else // 새 노드가 루트(최초) 노드라면?
//    {
//        *pRoot = nNode;
//    }
//    
//}
//
//BTreeNode * BSTSearch(BTreeNode * bst, BSTData target){
//    BTreeNode * cNode = bst; //current node
//    BSTData cd; //current data
//    
//    while(cNode != NULL)
//    {
//        cd = GetData(cNode);
//        
//        if(target == cd)
//            return cNode;
//        else if(target < cd)
//            cNode = GetLeftSubTree(cNode);
//        else
//            cNode = GetRightSubTree(cNode);
//    }
//    
//    return NULL; //탐색대상이 저장되어 있지 않음
//}
//
//
//int main(){
//    BTreeNode * bstRoot; //bstRoot는 BST의 루트노드를 가리킴
//    BTreeNode * sNode;
//    
//    //BST의 생성 및 초기화
//    BSTMakeAndInit(&bstRoot);
//    
//    //bstRoot에 1,2,3저장
//    BSTInsert(&bstRoot, 9);
//    BSTInsert(&bstRoot, 1);
//    BSTInsert(&bstRoot, 6);
//    BSTInsert(&bstRoot, 2);
//    BSTInsert(&bstRoot, 8);
//    BSTInsert(&bstRoot, 3);
//    BSTInsert(&bstRoot, 5);
//    
//    //탐색! 1이 저장된 노드 찾기
//    sNode = BSTSearch(bstRoot, 1);
//    
//    if(sNode == NULL)
//        printf("탐색 실패\n");
//    else
//        printf("탐색에 성공한 키의 값: %d \n", BSTGetNodeData(sNode));
//    
//    sNode = BSTSearch(bstRoot, 4);
//    if(sNode == NULL)
//        printf("탐색 실패\n");
//    else
//        printf("탐색에 성공한 키의 값: %d \n", BSTGetNodeData(sNode));
//    
//    sNode = BSTSearch(bstRoot, 6);
//    if(sNode == NULL)
//        printf("탐색 실패\n");
//    else
//        printf("탐색에 성공한 키의 값: %d \n", BSTGetNodeData(sNode));
//    
//    sNode = BSTSearch(bstRoot, 7);
//    if(sNode == NULL)
//        printf("탐색 실패\n");
//    else
//        printf("탐색에 성공한 키의 값: %d \n", BSTGetNodeData(sNode));
//
//    return 0;
//}
