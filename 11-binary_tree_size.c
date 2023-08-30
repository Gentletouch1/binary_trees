#include "binary_trees.h"

/*

 measuring  the size of a binary tree

 
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, tree_size;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	tree_size = left_size + right_size + 1;

	return (tree_size);
}
