#include "binary_trees.h"

/*
checking if a node is a leaf node
 
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* If node do not have left or right child, it is leaf node */
	return (!node->left && !node->right);
}
