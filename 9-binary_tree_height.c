#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#define Max(a, b) (a > b ? a + 1 : b + 1)
/**
 * binary_tree_height - compute the height of BT recursively
 * @tree: pointer to the root of ze tree
 *
 * Return: size of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (tree && tree->right == NULL && tree->left == NULL)
		return (0);
	return (Max(l, r));
}
