#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert left
 * @parent: parent node
 * @value: value of the node
 * Return: node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{

	const binary_tree_t *tempx;
	const binary_tree_t *tempy;

	if (!first || !second)
		return NULL;
	tempx = first;
	tempy = second;

	if (binary_tree_depth(first) > binary_tree_depth(second))
		{
			while(first)
			{
				second = tempy;
				while(second)
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
			while(second)
			{
				first = tempx;
				while(first)
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
