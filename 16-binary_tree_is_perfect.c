#include "binary_trees.h"
/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *
 *@tree: pointer to the root node of the tree to check
 *
 *Return: if a binary tree is perfect 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t i = 0, j = 0, k = 2;

    if (tree == NULL)
    {
        return (0);
    }

    j = binary_tree_height(tree);
    for (i = 1; i < j; i++)
    {
        k = k * 2;
    }
    if (binary_tree_leaves(tree) == k)
    {
        return (1);
    }

    return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    int i = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left == NULL && tree->right == NULL)
    {
        return (i + 1);
    }
    if (tree->left != NULL)
    {
        i += binary_tree_leaves(tree->left);
    }
    if (tree->right != NULL)
    {
        i += binary_tree_leaves(tree->right);
    }

    return (i);
}

/**
 * tree_height - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */
size_t tree_height(const binary_tree_t *tree)
{
    int i = 0, j = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left != NULL)
    {
        i += tree_height(tree->left);
    }
    if (tree->right != NULL)
    {
        j += tree_height(tree->right);
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
    return (0);

    return ((tree_height(tree)) - 1);
}