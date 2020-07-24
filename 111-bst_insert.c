#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current = NULL;
	bst_t *parent = NUL;

	if (*tree == NULL)
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}

	current = *tree;

	while (current != NULL)
	{
		parent = current;

		if (current->n = value)
			break;
		if (current->n < tree->n)
		{
			current = current->left;
		}
		else 
			current = current ->right;
	}

	if parent->n < value
	{
		parent->right = (bst_t *)binary_tree_node(parent, value);
			return (parent->right)

	}
	else
	{
		parent->left = (bst_t *)binary_tree_node(parent, value);

			return (parent ->left);
	}
	return (NULL);
}
