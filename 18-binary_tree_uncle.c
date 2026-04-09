#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 *
 * Return: a pointer to the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *g_parent = parent->parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (parent->n == g_parent->right->n)
		return (g_parent->left);


	return (g_parent->right);

}
