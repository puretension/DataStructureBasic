#include <stdio.h>
#include <stdlib.h>

typedef struct node *tree_pointer;
typedef struct node {
    int key;
    tree_pointer left_child;
    tree_pointer right_child;
} Node;

int IsBST(tree_pointer t, int min, int max) {
    if (t == NULL)
        return 1;

    if (t->key < min || t->key > max)
        return 0;

    int left = IsBST(t->left_child, min, t->key - 1);
    int right = IsBST(t->right_child, t->key + 1, max);

    return left && right;
}

tree_pointer createNode(int key) {
    tree_pointer newNode = (tree_pointer)malloc(sizeof(Node));
    newNode->key = key;
    newNode->left_child = NULL;
    newNode->right_child = NULL;
    return newNode;
}

int main() {
    // BST 예시
    tree_pointer bst = createNode(4);
    bst->left_child = createNode(2);
    bst->right_child = createNode(6);
    bst->left_child->left_child = createNode(1);
    bst->left_child->right_child = createNode(3);
    bst->right_child->left_child = createNode(5);
    bst->right_child->right_child = createNode(7);

    int isBST = IsBST(bst,1, 10);
    printf("IsBST: %d\n", isBST); // 1

    // BST X 예시
    tree_pointer nonBST = createNode(4);
    nonBST->left_child = createNode(6);
    nonBST->right_child = createNode(2);
    nonBST->left_child->left_child = createNode(1);
    nonBST->left_child->right_child = createNode(3);
    nonBST->right_child->left_child = createNode(5);
    nonBST->right_child->right_child = createNode(7);

    isBST = IsBST(nonBST, 1, 10);
    printf("IsBST: %d\n", isBST); // 0

    return 0;
}
