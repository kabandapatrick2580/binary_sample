#include "binary_trees.h"

/**
 * binary_tree_depth - measurement of the depth of node
 * @tree: node to measure the depth
 *
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t profond = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		profond++;
		tree = tree->parent;
	}

	return (profond);
}
