#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_node - create a binary tree node
 *
 * @value: Integer stored in the node
 * @parent:  pointer to the parent node of the node to create
 *
 * Return: a pointer to the node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_btn = malloc(sizeof(binary_tree_t));
	/* btn : binary tree node*/
	if (new_btn == NULL)
	{
		return (NULL);
	}

	/* Assign the value and the parent pointer */
	new_btn->n = value;
	new_btn->parent = parent;

	/*initialize the children to NULL */

	new_btn->left = NULL;
	new_btn->right = NULL;

	return (new_btn);

}
