#include "binary_trees.h"

/*
counting  the leaves of  a binary tree

 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count;

	leaf_count = 0;

	if (!tree)
		return (leaf_count);

	/* Check if root is childless */
	if (!tree->left && !tree->right)
		return (1);

	leaf_count = binary_tree_leaves(tree->left);
	leaf_count += binary_tree_leaves(tree->right);

	return (leaf_count);
}
