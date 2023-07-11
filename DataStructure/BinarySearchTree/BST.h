#ifndef BST_h
#define BST_h


typedef struct _node{
    int data;
    struct _node * left;
    struct _node * right;
}Node;

Node * root;


//삽입
Node * BSTInsert(Node * pRoot, int data);
//검색
Node * BSTSearch(Node * pRoot, int data);
//삭제
Node * BSTDelete(Node * pRoot, int data);
//최솟값
Node * BSTMinNode(Node * pRoot);
//최댓값
Node * BSTMaxNode(Node * pRoot);
//출력
void BSTDisplay(Node * pRoot);


#endif /* BST_h */
