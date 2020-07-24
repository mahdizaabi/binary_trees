#include "binary_trees.h"
/**
 * bst_search - searches for a value in a binary search tree
 * @tree: pointer to the root of the Binary search tree
 * @value: value to be searched
 * Return: pointer to the node containing the searched key, or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *current = NULL;

	current = (bst_t *)tree;
	while (current)
	{
		if (current->n == value)
			return (current);
		if (current->n < value)
			current = current->right;
		else
			current = current->left;
	}
	return (NULL);
}
/**
 * del_node_onde - insert left
 * @parent: parent node
 * @value: value of the node
 * Return: node
 */
/**
 * del_node_two - searches for a value in a binary search tree
 * @root: pointer to the node to be deleted
 * Return: pointer to the node containing the searched key, or NULL
 */
bst_t * del_node_two(bst_t *node)
{
	if (node == NULL)
		return (NULL);
	successor = find_successor()

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *target = NULL;
	bst_t *parentx = NULL;
	bst_t *childx = NULL;

	if (root == NULL)
		return (NULL);

	target = bst_search(root, value);

	if (target == NULL)
		return NULL;

	if (target->left && !target->right || !target->left && target->right)
	{
		parentx = target->parent;
		if (!target->right)
		{
			childx = target->left;
			free(target);
			parent->left = childx;
		}
		else
		{
			childx = parent->right;
			free(target);
			parent->right = childx;
		}
	}
	else if (!target->left && !target->right)
	{
		free(target);
	}
	else
	{
		delete_node_two();
	}
	return (root);
