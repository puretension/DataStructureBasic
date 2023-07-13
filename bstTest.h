// Binary search tree node
typedef struct tree_node* tree_pointer;
typedef struct tree_node {
    int key;
    tree_pointer left;
    tree_pointer right;
} tree_node;
tree_pointer root; 

void bst_insert(int key);

void bst_show_inorder(tree_pointer ptr);

int range_count(tree_pointer t, int low, int high);
