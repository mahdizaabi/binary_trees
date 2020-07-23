#include "binary_trees.h"


binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	
	tree->parent = tree->right;
	tree->parent->parent = NULL;
	tree->right->left = tree;
	tree->right = NULL;
	return(tree->parent);
}

