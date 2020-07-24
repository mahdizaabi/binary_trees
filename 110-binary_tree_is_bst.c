#include "binary_trees.h"

/**
 * check_bst- prufen ob Wert des Nodes geringer/grösser:links/recht subtreee
 * @root: pointer to the root of ze tree
 * @min: lower bound
 * @max: upper bound
 * Return: 1 wenn das test ergolgreich ist, 0 wenn nicht
 */

int check_bst(const binary_tree_t *root, int min, int max)
{

	if (root == NULL)
		return (1);
	if (root->n < min || root->n > max)
		return (0);
	else
		return (1);

	return (check_bst(root->left, min, root->n) &&
	check_bst(root->right, root->n, max));
}
/**
 * binary_tree_is_bst - prüfen ob es ein binary search tree ist
 * @tree: Zeiger zu dem Root des Baumes.
 *
 * Return: 1 wenn ja , wenn nicht 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (check_bst(tree, INT_MIN, INT_MAX))
		return (1);

	return (0);
}
