#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child
 * @parent: pointer to the node
 * @value: value in new node
 *
 * Return: created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_np;

	if (parent == NULL)
		return (NULL);

	node_np = malloc(sizeof(binary_tree_t));
	if (node_np == NULL)
		return (NULL);

	node_np->n = value;
	node_np->parent = parent;
	node_np->left = parent->left;
	node_np->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = node_np;

	parent->left = node_np;

	return (node_np);
}
