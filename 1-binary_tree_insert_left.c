#include "binary_trees.h"

/**
   inserting a node as the left-child of another node
 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent null */
	if (parent == NULL)
		return (NULL);

	/* Create node */
	new_node = binary_tree_node(parent, value);

	/* Check if new node created */
	if (new_node == NULL)
		return (NULL);

	/* Check if parent already has left child */
	if (parent->left)
	{
		/* set left of new node to current node */
		new_node->left = parent->left;

		/* set parent of current to new node */
		parent->left->parent = new_node;
	}

	/* Set parent left to new node */
	parent->left = new_node;

	return (new_node);
}
