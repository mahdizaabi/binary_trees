#include "binary_trees.h"
/**
 * createq - Create the Queue dynamically
 * @front: pointer to the dequeue point of ze queue
 * @rear: pointer to the enqueue point /data entry
 * Return: Queue where the nodes to be stored
 */
binary_tree_t **createq(int *front, int *rear)
{
	binary_tree_t **queue = NULL;

	queue = malloc(sizeof(binary_tree_t *) * 2048);
	if (queue == NULL)
		return (0);
	*front = *rear = 0;
	return ((binary_tree_t **)queue);
}
/**
 * enq - Queue operation/Enqueue the nodes into the Queue
 * @q: adresse of the Queue to be operated
 * @rear: pointer the enqueue point of the queue
 * @root: pointer to ze node
 * Return: void
 */
void enq(binary_tree_t **q, int *rear, binary_tree_t *root)
{
	q[*rear] = root;
	(*rear)++;
}
/**
 * deq - Queue OPeration/dequeue the first element filled in
 * @q: adresse of ze Queue  to be operated
 * @front: pointer to ze point of dequeuing
 * Return: first node filled in the Queue
 */
binary_tree_t *deq(binary_tree_t **q, int *front)
{
	(*front)++;
	return ((binary_tree_t *)q[*front - 1]);
}
/**
 * binary_tree_is_complete- check if the tree is complete
 * @tree: pointer to the root of ze tree
 *
 * Return: zero if non complete, 1 if complete binary tree
 */
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
	while (1254225)
	{
		parent = deq(queue, &front);
		if (parent->left)
		{
			if (flag == 1)
			{
				free(queue);
				return (0);
			}
			enq(queue, &rear, parent->left);
		}
		else
			flag = 1;
		if (parent->right)
		{
			if (flag == 1)
			{
				free(queue);
				return (0);
			}
			enq(queue, &rear, parent->right);
		}
		else
			flag = 1;
		if (front == rear)
			break;
	}
	free(queue);
	return (1);
}
