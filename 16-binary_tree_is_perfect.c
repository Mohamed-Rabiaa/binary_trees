#include "binary_trees.h"
/**
 *height - measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height
 *
 *Return: the height of the tree or 0 if tree is NULL
 */
int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (-1);
	else if (!tree->left && !tree->right)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}

/**
 *binary_tree_is_perfect - checks if a binary tree is full
 *@tree: a pointer to the root node of the tree to check
 *
 *Return: 1 if the tree is perfect or 0 if it isn't full or it is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, left, right;

	if (!tree)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height != right_height)
		return (0);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left && right)
		return (1);
	else
		return (0);
}
