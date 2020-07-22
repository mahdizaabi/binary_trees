#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - compute the depth of BT recursively
 * @tree: pointer to the node of ze tree
 *
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		a += 1;
	}
	return (a);
}
