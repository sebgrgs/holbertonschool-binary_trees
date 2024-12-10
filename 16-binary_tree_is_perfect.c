#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
	{
		if (binary_tree_leaves(tree) == binary_tree_nodes(tree) / 2)
		{
			return (1);
		}
	}

	return (0);
}
