#include "binary_trees.h"

/**
 * array_to_bst - function that builds a Binary Search Tree from an array
 * @array: an array of integer storing the data to be inserted into the tree
 * @size: size of the array
 * Return: pointer to the created root of the tree or NULL in failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 1;
	bst_t *root = NULL;

	if (!array || size == 0)
		return (NULL);

	root = (bst_t *)binary_tree_node(NULL, array[0]);

	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}
