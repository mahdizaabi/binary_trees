#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - compute nb of leaves of BT recursively
 * @tree: pointer to the node of ze tree
 *
 * Return: size of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1 + l + r);
	else
		return (r + l);
}
