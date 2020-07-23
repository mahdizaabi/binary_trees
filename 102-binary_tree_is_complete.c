#include "binary_trees.h"
#define BUFFER 1024 /* size of the Queue */

/**
 *Stack implementation
 *
 *
 *
**/

binary_tree_t **createq(int *front, int *rear)
{
	binary_tree_t **queue = NULL;
	queue = malloc(sizeof(binary_tree_t*) * BUFFER);
	if (queue == NULL)
		return (0);
	*front = *rear = 0;
	return ((binary_tree_t **)queue);
}
void enq(binary_tree_t **q, int *rear, binary_tree_t *root)
{
	q[*rear] = root;
	(*rear)++;
}
binary_tree_t *deq(binary_tree_t **q, int *front)
{
	(*front)++;
	return ((binary_tree_t *)q[*front - 1]);
}
int check_empty(int *front, int *rear)
{
	if (*rear == *front)
		return (0);
	if (*rear != *front)
		return (1);
}

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int rear;
	int front;
	binary_tree_t *parent = NULL;
	binary_tree_t **queue = NULL;
	int flag = 0;

	if (tree == NULL)
		return (0);

	queue = createq(&front, &rear);

	enq((binary_tree_t **)queue, &rear, (binary_tree_t *)tree);
	while(!check_empty(&front, &rear))
	{
		parent = deq(queue, &front);
		if (parent->left)
		{
			if (flag == 1)
				return 0;
			enq(queue, &rear, parent->left);
		}
		else
			flag = 1;

		if (parent->right)
		{
			if(flag == 1)
			return 0;
			enq(queue, &rear, parent->right);
		}
		else
			flag = 1;
	}

	return (1);
}
