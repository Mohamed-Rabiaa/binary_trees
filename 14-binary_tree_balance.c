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
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *
 *Return: the balance factor of the tree or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, balance_factor;

	if (!tree)
		return (0);

	else
	{
		left_height = height(tree->left);
		right_height = height(tree->right);

		balance_factor = left_height - right_height;

		return (balance_factor);
	}
}
