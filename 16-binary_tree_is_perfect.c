#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, feuille;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	feuille = (size_t)1 << height;

	int is_full = binary_tree_is_full(tree);

	return (is_full && feuille == (binary_tree_leaves(tree) * 2));
}

