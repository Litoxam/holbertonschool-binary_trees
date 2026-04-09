#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
	left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
	right_height = 1 + binary_tree_height(tree->right);
	}

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 *
 * Return: 1 if tree is perfect, else returns 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1); /*if leaves are perfect, return 1*/

	if (tree->left == NULL || tree->right == NULL)
		return (0); /*if only 1 child is missing, not perfect, returns 0*/

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{ /*if both heights are the same and...*/

		/*... if both children are perfect, returns 1*/
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);
	}
		return (0); /*else returns 0*/
}
