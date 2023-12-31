#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves
 * @tree: root node to count leaves
 *
 * Return: number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (left_leaves + right_leaves + 1);

	return (left_leaves + right_leaves);
}
