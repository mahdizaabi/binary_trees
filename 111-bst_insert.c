#include "binary_trees.h"
/**
 * bst_insert - function to insert a value in a Binary search tree
 * @tree: double pointer to the tree
 * @value: data to store into the created node
 * Return: the inserted node
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current = NULL;
	bst_t *parent = NULL;

	if (*tree == NULL)
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}

	current = *tree;

	while (current != NULL)
	{
		parent = current;

		if (current->n == value)
			return (NULL);
		if (current->n < value)
		{
			current = current->right;
		}
		else
			current = current->left;
	}

	if (parent->n < value)
	{
		parent->right = (bst_t *)binary_tree_node(parent, value);
			return (parent->right);

	}
	else
	{
		parent->left = (bst_t *)binary_tree_node(parent, value);

			return (parent->left);
	}
	return (NULL);
}
