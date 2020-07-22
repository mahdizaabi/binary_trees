#include "binary_trees.h"

/**
 * binary_tree_depth - compute the depth of BT recursively
 * @tree: pointer to the node of ze tree
 *
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		a += 1;
	}
	return (a);
}

/**
 * binary_trees_ancestor - insert left
 * @first: pointer to ze first node
 * @second: pointer to ze second node
 * Return: node of ze ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *tempx;
	const binary_tree_t *tempy;

	if (!first || !second)
		return (NULL);
	tempx = first;
	tempy = second;
	if (binary_tree_depth(first) >= binary_tree_depth(second))
	{
		while (first)
		{
			second = tempy;
			while (second)
			{
				if (second == first)
					return ((binary_tree_t *)second);
				second = second->parent;
			}
			first = first->parent;
		}

	}
	if (binary_tree_depth(second) > binary_tree_depth(first))
	{
		while (second)
		{
			first = tempx;
			while (first)
			{
				if (first == second)
					return ((binary_tree_t *)first);
				first = first->parent;
			}
			second = second->parent;
		}
	}
	return (NULL);
}
