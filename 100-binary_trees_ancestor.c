#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert left
 * @parent: parent node
 * @value: value of the node
 * Return: node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{

	if (!first || !second)
		return NULL;

	if (binary_tree_depth(first) > binary_tree_depth(second))
		{
			while(first)
			{
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
