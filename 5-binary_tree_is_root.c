#include "binary_trees.h"

/*
checks if a given node is a root node

 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->parent);
}
