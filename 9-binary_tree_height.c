#include "binary_trees.h"

/*
measuring the height of a binary tree
 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);

	height = get_max_height(tree);

	return (height - 1);
}


/*
calculating the height of binary tree
 */
size_t get_max_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0, max_h = 0;

	if (!tree)
		return (0);

	/* Geting the depth of left and right edges */

	left_h = get_max_height(tree->left);
	right_h = get_max_height(tree->right);

	/* Determining the maximum height of a binary */

	max_h = (left_h > right_h ? left_h : right_h);

	return (max_h + 1);
}
