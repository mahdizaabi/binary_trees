#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is root
 * @node: node to check
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
		else
			return (0);
	}
	return (0);
}
