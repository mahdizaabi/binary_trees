<<<<<<< HEAD
#include "binary_trees.h"

/**
 * binary_tree_inorder - going through a binary tree using in-order traversal
 * @tree: tree
 * @func: function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	
=======
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_preorder - traverse the BT RLRight
 * @tree: pointer to the root of ze tree
 * @func: pointer to function for printing
 * Return: size of the tree
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
>>>>>>> 07b2c3ecd67694c9a1816707c8996cd4bf9e7c52
}
