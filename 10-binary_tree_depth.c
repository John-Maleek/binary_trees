#include "binary_trees.h"
/**
 * depth - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */
size_t depth(const binary_tree_t *tree)
{
    int i = 0;

    if (tree == NULL)
    {
        return (0);
    }

    if (tree->parent != NULL)
    {
        i += depth(tree->parent);
    }

    return (i + 1);
}

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    return (depth(tree) - 1);
}