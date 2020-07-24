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
 * del_node_onde - delete node with only one child
 * @parent: parent node
 * @value: value of the node
 * Return: node
 */
bst_t *del_node_one(bst_t *target)
{
		parentx = (target)->parent;
		if ((!target-)>right)
		{
			childx = target->left;
			free(target);
			parent->left = childx;
			childx->parent = parent;
		}
		else
		{
			childx = parent->right;
			free(target);
			parent->right = childx;
			childx->parent = parent;
		}
	}
/**
 * del_node_two - searches for a value in a binary search tree
 * @root: pointer to the node to be deleted
 * Return: pointer to the node containing the searched , or NULL
 */
bst_t *del_node_two(bst_t *node)
{
	if (node == NULL)
		return (NULL);

	current = target->left;
	
	while(current->left != NULL)
	{
		current = current->left;
	}
	successeur = current;
	del_node_one(current);
	if (parent != NULL)
	{
		if (target == target->parent->left)
		{
			target->parent->left = successeur;
		}
		else
		{
			target->parent->right = successeur;








}

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
		del_node_one(&target);
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
