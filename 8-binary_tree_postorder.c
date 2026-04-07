#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. (here print_num)
 *
 * Description: If tree or func is NULL, do nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*the order is left --> right --> root */
	/*in the main file, there is another func void print_num(int n)*/
	
	binary_tree_postorder(tree->left, func); /*the function will call print_num */
	binary_tree_postorder(tree->right, func);	
	func(tree->n);
	
}
