#include "binary_trees.h"
/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *
 *@tree: pointer to tree
 *
 *Return: 1 if a binary tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int i = 0, j = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left == NULL && tree->right == NULL)
    {
        return (1);
    }
    if (tree->left != NULL)
    {
        i = binary_tree_is_full(tree->left);
    }
    if (tree->right != NULL)
    {
        j = binary_tree_is_full(tree->right);
    }

    return (i && j);
}