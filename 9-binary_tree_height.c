#include "binary_trees.h"
/**
 * height - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */
size_t height(const binary_tree_t *tree)
{
    int i = 0, j = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left != NULL)
    {
        i += height(tree->left);
    }
    if (tree->right != NULL)
    {
        j += height(tree->right);
    }
    if (i > j)
    {
        return (i + 1);
    }

    return (j + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    return ((height(tree)) - 1);
}