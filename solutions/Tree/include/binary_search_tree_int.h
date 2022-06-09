#ifndef BINARY_SEARCH_TREE_INT_H
#define BINARY_SEARCH_TREE_INT_H

#include <stdbool.h>

 
typedef struct bst_node_int bst_node_int;

 
typedef bst_node_int *bst_int;

 
struct bst_node_int {
    /** The left subtree of the node */
    bst_int left;
    /** The value/key in the node */
    int       value;
    /** The right subtree of the node */
    bst_int right;
};

 
bst_int nil();

 
bool is_empty(bst_int tree);

 
int value(bst_int tree);

 
int size(bst_int tree);

 
int height(bst_int tree);

 
bst_int left_child(bst_int tree);

 
bst_int right_child(bst_int tree);

 
bst_int retrieve(bst_int tree, int value);

 
bst_int insert(bst_int tree, int value);

 
bst_int delete(bst_int tree, int value);

 
void in_order_dfs_infix(bst_int tree);

 
void deallocate_bst(bst_int tree);
 
void print_bst(bst_int tree);

#endif
