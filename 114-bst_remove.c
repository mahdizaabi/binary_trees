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
 * @target: parent node
 * @root: value of the node
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
/**
 * del_node_two - function to insert a value in a Binary search tree
 * @target: double pointer to the tree
 * @root: data to store into the created node
 * Return: the inserted node
 */
bst_t *del_node_two(bst_t *target, bst_t *root)
{
	bst_t *go_suc = NULL;

	if (root == NULL)
		return (NULL);

	go_suc = target->right;
	while (go_suc->left != NULL)
		go_suc = go_suc->left;
	if (root == target)
	{
		root->n = go_suc->n;
		if (go_suc->parent->left == go_suc)
			go_suc->parent->left = NULL;
		else
			go_suc->parent->right = NULL;
		free(go_suc);
	}

	else if (target->parent->right == target)
	{
		target->n = go_suc->n;
		if (go_suc->parent->left == go_suc)
			go_suc->parent->left = NULL;
		else
			go_suc->parent->right = NULL;
		free(go_suc);
	}
	else if (target->parent->left == target)
	{
		target->n = go_suc->n;
		if (go_suc->parent->left == go_suc)
			go_suc->parent->left = NULL;
		else
			go_suc->parent->right = NULL;
		free(go_suc);
	}

	return (root);
}


/**
 * bst_remove- prufen ob Wert des Nodes geringer/grösser:links/recht subtreee
 * @root: pointer to the root of ze tree
 * @value: value to inser
 * Return: pointer to the root
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *target = NULL;

	if (root == NULL)
		return (NULL);

	target = bst_search(root, value);


	if (target == NULL)
		return (NULL);

	if ((target->left && !target->right) || (!target->left && target->right))
		return (del_node_one(target, root));

	if (target->left == NULL && target->right == NULL)
	{
		if (target->parent->left == target)
			target->parent->left = NULL;
		else
			target->parent->right = NULL;
		free(target);
	}
	if ((target->left && target->right))
		return (del_node_two(target, root));

	return (root);
}
