#include ""
#define N 10 /* size of the Queue */

/**
 *Stack implementation
 *
 *
 *
**/

binary_tree_t **createq(int *front, int *rear)
{
	binary_tree_t **queue = NULL;
	queue = malloc(sizeof(binary_tree_t*) * buffer);
	if (queue == NULL)
		return NULL;
	*front = *rear = 0;
	return queue;
}
void enq(binary_tree_t **q, int *rear, binary_tree_t *root)
{
	q[*rear] = root;
	(*rear)++;
}
binary_tree_t **deq(binary_tree_t **q, int *front)
{
	(*front)++;
	return q[*front - 1];
}
bool check_empty(int *front, int *rear)
{
	return (*rear == *front);
}

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int rear;
	int front;
	binary_tree_t *parent = NULL;
	if (tree == NULL)
		return (NULL);

	binary_tree_t **queue = createq(&front, &rear);

	enq(tree, &rear, root);
	while(!chech_empty(&front, &rear))
	{
		parent = deq(queue, &front);
		if (parent->left)
		{
			if (flag == true)
				return false;
			enq(queue, &rear, parent->left);
		}
		else
			flag = true;

		if (parent->right)
		{
			if(flag == true)
			return false;
			enq(queue, &rear, parent->right);
		}
		else
			flag = true;
	}

	return (1);
