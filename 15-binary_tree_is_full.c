#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: tree to check
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
}
