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
bst_t *del_node_one(bst_t *target, bst_t *root)
{
	bst_t *parentx = NULL;
	bst_t *childx = NULL;

	parentx = target->parent;
	if (!target->right)
	{
		childx = target->left;
		parentx = target->parent;
		if (parentx->right == target)
		{
			target->parent->right = NULL;
			target->parent->right = childx;
		}
		else
		{
			target->parent->left = NULL;
			target->parent->left = childx;
		}
		free(target);
		target = NULL;
		childx->parent = parentx;
	}
	else
	{
		childx = target->right;
		parentx = target->parent;
		if (parentx->right == target)
		{
			target->parent->right = NULL;
			target->parent->right = childx;
		}
		else
		{
			target->parent->left = NULL;
			target->parent->left = childx;
		}
		free(target);
		target = NULL;
		childx->parent = parentx;
	}
	return (root);
}

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *target = NULL;

	if (root == NULL)
		return (NULL);

	target = bst_search(root, value);

	if (target == NULL)
		return NULL;

	if ((target->left && !target->right) || (!target->left && target->right))
		return (del_node_one(target, root));

	if (target->left == NULL && target->right == NULL)
	{
		target->parent->left = NULL;
		free(target);
		target = NULL;
	}
	return (root);
}
