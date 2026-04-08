#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_insert_left - insert a node as the left-child of another one
 *
 * @value: Integer stored in the node
 * @parent:  pointer to the parent node of the node to create
 *
 * Return: a pointer to the node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_child;
	binary_tree_t *new_btn;

	old_child = parent->left;


	/* btn : binary tree node*/
	if (parent == NULL)
		return (NULL);

	new_btn = binary_tree_node(parent, value);

	if (new_btn == NULL)
		return (NULL);

	if (old_child != NULL)
	{
		new_btn->left = old_child;
		old_child->parent = new_btn;
	}

	parent->left = new_btn;
	return (new_btn);

}

