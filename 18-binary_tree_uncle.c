#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 *
 * Return: a pointer to the uncle. if no uncle returns NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *g_parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	g_parent = parent->parent;

	if (g_parent->left == parent)
		return (g_parent->right);

	return (g_parent->left);
}
