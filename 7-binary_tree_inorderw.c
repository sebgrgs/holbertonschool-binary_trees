#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary tree using in-order traversal
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if(tree || func == NULL)
    return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);

}