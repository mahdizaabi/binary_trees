#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is leaf
 * @node: node to check
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
		else
			return (0);
	}
	return (0);
}
