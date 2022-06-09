#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "binary_search_tree_int.h"

// auxiliary functions
int max(const int a, const int b) {
    return a > b ? a : b;
}

void print_level(bst_int tree, int level) {
    for (int i = 0; i < level - 1; i++) {
        printf("   ");
    }

    if (is_empty(tree)) {
        printf("%snil\n", level == 0 ? "" : " +-");
        return;
    }

    printf("%s(%d)\n", level == 0 ? "" : " +-", tree->value);
    print_level(tree->left, level + 1);
    print_level(tree->right, level + 1);
}

// functions from the signature
bst_int nil() {
    return NULL;
}

bool is_empty(bst_int tree) {
    return tree == NULL;
}

int value(bst_int tree) {
    assert(! is_empty(tree));

    return tree->value;
}

int size(bst_int tree) {
    if (is_empty(tree)) {
        return 0;
    } else {
        return 1 + size(tree->left)
            + size(tree->right);
    }
}

int height(bst_int tree) {
    if (is_empty(tree)) {
        return 0;
    } else {
        return 1 +
            max(height(tree->left),
                height(tree->right));
    }
}

bst_int left_child(bst_int tree) {
    assert(! is_empty(tree));

    return tree->left;
}

bst_int right_child(bst_int tree) {
    assert(! is_empty(tree));

    return tree->right;
}

bst_int retrieve(bst_int tree, int value) {
    if (is_empty(tree)) {
        return tree;
    }

    if (tree->value == value) {
        return tree;
    } else if (tree->value < value) {
        return retrieve(tree->right, value);
    } else {
        return retrieve(tree->left, value);
    }
}

bst_int insert(bst_int tree, int value) {
    if (is_empty(tree)) {
        bst_node_int *p_new_node = malloc(sizeof(bst_node_int));

        if (p_new_node == NULL) {
            printf("cannot allocate memory for node in insert!\n");
        }

        p_new_node->value = value;
        p_new_node->left  = NULL;
        p_new_node->right = NULL;

        return p_new_node;;
    }

    if (tree->value < value) {
        tree->right = insert(tree->right, value);
    }

    if (tree->value > value) {
        tree->left = insert(tree->left, value);
    }

    return tree;
}

bst_int delete(bst_int tree, int value) {
    if (is_empty(tree)) {
        return tree;
    }

    if (tree->value == value) {
        // no child
        if (is_empty(tree->left) &&
            is_empty(tree->right)) {
            bst_node_int *p_old_node = tree;

            free(p_old_node);

            return nil();
        }

        // only left child
        if (is_empty(tree->right)) {
            bst_node_int *p_old_node = tree;
            bst_int       left_tree  = tree->left;

            free(p_old_node);

            return left_tree;
        }

        // only right child
        if (is_empty(tree->left)) {
            bst_node_int *p_old_node = tree;
            bst_int       right_tree = tree->right;

            free(p_old_node);

            return right_tree;
        }

        // two children, move the maximum value in the left subtree in
        // place of the value of the  node to delete and remove the
        // corresponding node in the left subtree (easy case)
       
        //?????????????????????
        //TBC 


    } else if (tree->value < value) {
        tree->right = delete(tree->right, value);
        return tree;
    } else {
        tree->left = delete(tree->left, value);
        return tree;
    }
}

void in_order_dfs_infix(bst_int tree) {
  //???????????????
  //TBC 
}

void deallocate_bst(bst_int tree) {
   //???????????? 
  //TBC 
}

void print_bst(bst_int tree) {
    print_level(tree, 0);
}
