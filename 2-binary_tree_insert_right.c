#include "binary_trees.h"

/*
 inserting a node as the right-child of another node

 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	/* Checks if  a parent has a right-child */
	if (parent->right)
	{
		/* sets a new node->right to a right-child */
		new_node->right = parent->right;

		/* sets a right-child->parent to a new_node */
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
