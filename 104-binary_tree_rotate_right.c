#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotate a tree left
 * @tree: pointer to the root of the tree
 * Return: pointer to ze rotated root of ze tree
 * Ps: CODE IS NOT DRY and extended for my learning purposes
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{

	if (tree == NULL)
		return (NULL);

	if (tree->left->right == NULL)
	{
		tree->parent = tree->left;
		tree->parent->parent = NULL;
		tree->parent->right  = tree;
		tree->left = NULL;
	}
	else if (tree->left->right)
	{
		tree->parent = tree->left;
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->parent->parent = NULL;
		tree->left->parent = tree;
	}
	else if (tree->left == NULL)
		return (tree);
	return (tree->parent);
}
