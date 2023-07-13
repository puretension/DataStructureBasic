//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//#include "bstTest.h"
//
//void main()
//{
//    char c, grade;
//    int id;
//    bst_insert(9);
//    bst_insert(14);
//    bst_insert(4);
//    bst_insert(6);
//    bst_insert(15);
//    bst_insert(2);
//    bst_insert(19);
//    bst_insert(8);
//    bst_insert(3);
//    bst_insert(16);
//    bst_insert(20);
//    bst_insert(5);
//    bst_insert(1);
//    bst_insert(18);
//    bst_insert(7);
//    bst_insert(10);
//    bst_insert(17);
//    bst_insert(13);
//    bst_insert(11);
//    bst_insert(12);
//
//    bst_show_inorder(root);
//    printf("\n5이상 15이하의 데이터 수 : %d", range_count(root, 5, 15));
//}
//
//void bst_insert(int key) {
//    tree_pointer node = (tree_pointer)malloc(sizeof(tree_node));
//    node->key = key;
//    node->left = NULL;
//    node->right = NULL;
//    if (root == NULL) root = node;
//    else {
//        tree_pointer p = root;
//        while (1) {
//            if (node->key < p->key) {
//                if (p->left == NULL) {
//                    p->left = node;
//                    break;
//                }
//                else p = p->left;
//            }
//            else {
//                if (p->right == NULL) {
//                    p->right = node;
//                    break;
//                }
//                else p = p->right;
//            }
//        }
//    }
//}
//
//void bst_show_inorder(tree_pointer ptr) {
//    if (ptr == NULL) return;
//    if (ptr) {
//        bst_show_inorder(ptr->left);
//        printf("%d ", ptr->key);
//        bst_show_inorder(ptr->right);
//    }
//}
//int range_count(tree_pointer t, int low, int high) {
//    if (t == NULL) return 0;
//    
//    return (range_count(t->left, 5, 15) + (t->key >= low && t->key <= high) + range_count(t->right, 5, 15));
//}
