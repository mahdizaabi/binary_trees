#include "binary_trees.h"

/**
 * binary_tree_sibling - find siblings
 * @node: node to check
 * Return: node reference
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
	else
		return (node->parent->right);
}
