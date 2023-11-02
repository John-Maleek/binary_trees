#include "binary_trees.h"
/**
 * tree_size - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: size
 */
size_t tree_size(const binary_tree_t *tree)
{
    int i = 0, j = 0;

    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left != NULL)
    {
        i = tree_size(tree->left);
        i++;
    }

    if (tree->right != NULL)
    {
        j = tree_size(tree->right);
        j++;
    }

    return (i + j);
}

/**
 * binary_tree_size - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    return (tree_size(tree) + 1);
}