#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left
 * @parent: parent node
 * @value: value of the node
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (!parent->left)
	{
		parent->left = node;
		node->left = NULL;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}
