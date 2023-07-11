//#ifndef BinaryTree_h
//#define BinaryTree_h
//
//typedef int BTData;
//
//typedef struct _bTreeNode{
//    BTData data;
//    struct _bTreeNode * left;
//    struct _bTreeNode * right;
//}BTreeNode;
//
//BTreeNode * MakeBTreeNode(); //노드 생성
//BTData GetData(BTreeNode * bt); //노드에 저장된 주소값 반환
//void SetData(BTreeNode * bt, BTData data); //노드에 데이터 저장
//
//BTreeNode * GetLeftSubTree(BTreeNode * bt); //왼쪽 서브트리 주소값 반환
//BTreeNode * GetRightSubTree(BTreeNode * bt); //오른쪽 서브트리 주소값 반환
//
//void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub); //노드A의 왼쪽 자식 노드로 노드B 연결
//void MakeRightSubTree(BTreeNode * main, BTreeNode * sub); //노드A의 오른쪽 자식 노드로 노드C 연결
//
//typedef void (*VisitFuncPtr) (BTData data);
//
//
//#endif
