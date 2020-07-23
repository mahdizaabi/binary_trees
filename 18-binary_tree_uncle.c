#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle
 * @node: node to check
 * Return: uncle reference
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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
