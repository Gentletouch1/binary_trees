#include "binary_trees.h"

/*
 measuring the depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *node;

	node = tree;

	if (!tree)
		return (depth);

	while (node->parent)
	{
		node = node->parent;
		depth += 1;
	}

	return (depth);
}
