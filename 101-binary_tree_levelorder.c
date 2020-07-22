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
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	return (Max(l, r));
}

/**
 * check_level - check level o
 * @tree: pointer to the root of the tree
 * @l: level of the tree
 * @func: print function
 * Return: void
 */
void check_level(const binary_tree_t *tree, size_t l, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (l == 1)
		func(tree->n);
	else if (l > 1)
	{
		check_level(tree->left, l - 1, func);
		check_level(tree->right, l - 1, func);
	}
}

/**
 * binary_tree_levelorder - level-order traversal
 * @tree: pointer to ze root
 * @func: pointer to function to print
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height + 1; i++)
		check_level(tree, i, func);
}
