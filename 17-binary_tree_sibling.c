#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node
 *
 * Return: pointer to sibling node, or NULL if none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* si node est à gauche → sibling = droite */
	if (node->parent->left == node)
		return (node->parent->right);

	/* sinon → sibling = gauche */
	return (node->parent->left);
}
