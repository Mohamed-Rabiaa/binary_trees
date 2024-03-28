#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes in a binary tree
 *@tree: a pointer to the root node of the tree to count
 *the number of nodes
 *
 *Return: the number of nodes in the tree or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	else
	{
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);
		return (1 + left_nodes + right_nodes);
	}
}
