#include "binary_trees.h"

#define Max(a, b) (a > b ? a + 1 : b + 1)
/**
 * _binary_tree_height - compute the height of BT recursively
 * @tree: pointer to the root of ze tree
 *
 * Return: size of the tree
 */
int _binary_tree_height(const binary_tree_t *tree)
{

	int l = 0;
	int r = 0;

	if (tree == NULL)
		return (0);


	l = _binary_tree_height(tree->left);
	r = _binary_tree_height(tree->right);
	return (Max(l, r));

}

/**
 * binary_tree_balance -  measure the balance factor of a binary tree
 * @tree: tree to measure
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && tree->right)
	{
		return (_binary_tree_height(tree->right) * -1);
	}
	else if (!tree->right)
		return (_binary_tree_height(tree->left));
	else if (!tree->right && !tree->left)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
