#include "binary_trees.h"
#include "limits.h"




int check_bst(binary_tree_t *root, int min, int max)
{

	if (root == NULL)
		return (1);
	if (root->n < min || root->n > max)
		return (0);
	return (check_bst(root->left, min, root->n) &&
	check_bst(root->right, root->n, max));
		

}



int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_bst(tree, INT_MIN, INT_MAX));
}
