#include "binary_search_tree_int.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void aux_retrieval(bst_int tree, int value) {
    printf("\nRetrieve %d:", value);

    bst_int t_result = retrieve(tree, value);

    if (! is_empty(t_result)) {
        printf("\n");
        print_bst(t_result);
    } else {
        printf(" not found\n");
    }
}

bst_int aux_delete(bst_int tree, int value) {
    printf("\nPrint tree before deletion:\n");
    print_bst(tree);

    tree = delete(tree, value);
    printf("\nPrint tree after deleting %d:\n", value);
    print_bst(tree);

    return tree;
}

void print_height_size(bst_int tree) {
    printf("height: %d  | size: %d\n",
           height(tree),
           size(tree));
}

int main(void) {
    bst_int tree;

    // create empty tree
    tree = nil();

    assert (is_empty(tree));

    printf("Print empty tree:\n");
    print_bst(tree);

    // insert some values
    tree = insert(tree, 5);
    tree = insert(tree, 1);
    tree = insert(tree, 10);
    tree = insert(tree, 20);
    tree = insert(tree, 0);
    tree = insert(tree, 3);

    printf("\nPrint tree after some insertions:\n");
    print_bst(tree);

    // print height and size
    print_height_size(tree);

    // in-order traversal
    printf("\nIn-order traversal:\n");
    in_order_dfs_infix(tree);
    printf("\n");

    // retrievals
    aux_retrieval(tree, 10);
    aux_retrieval(tree, 25);
    aux_retrieval(tree, 3);

    tree = aux_delete(tree, 100);
    tree = aux_delete(tree, 3);
    print_height_size(tree);

    // deletions
    tree = insert(tree, 3);
    tree = aux_delete(tree, 10);

    insert(tree, 10);
    insert(tree, 2);
    tree = aux_delete(tree, 5);

    deallocate_bst(tree);
}
