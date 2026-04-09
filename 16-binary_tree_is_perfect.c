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
	int left;
	int right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;

	if (left == right)
		return (1);
	else
		return (0);
}
