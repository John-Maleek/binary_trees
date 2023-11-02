#include "binary_trees.h"
/**
 * tree_balance - measures the balance factor of a binary tree
 *
 *@tree: pointer to tree
 *@tree2: pointer to sub tree
 *
 *Return: Balance factor
 */
size_t tree_balance(const binary_tree_t *tree,
			    const binary_tree_t *tree2)
{
    int i = 0, j = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left != NULL)
    {
        i += tree_balance(tree->left, tree2);
    }
    if (tree->right != NULL)
    {
        j += tree_balance(tree->right, tree2);
    }
    if (tree == tree2)
    {
        return (i - j);
    }
    if (i > j)
    {
        return (i + 1);
    }

    return (j + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    return (tree_balance(tree, tree));
}