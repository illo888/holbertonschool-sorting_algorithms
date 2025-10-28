#include "sort.h"
#include <stdio.h>

/**
 * swap_nodes - Swaps two adjacent nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @left: The left node to swap
 * @right: The right node to swap
 */
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
    if (!left || !right || !list)
        return;

    left->next = right->next;
    if (right->next)
        right->next->prev = left;

    right->prev = left->prev;
    if (left->prev)
        left->prev->next = right;
    else
        *list = right;

    right->next = left;
    left->prev = right;

    print_list(*list);
}

/**
 * cocktail_sort_list - Sorts a doubly linked list using Cocktail Shaker Sort
 * @list: Double pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
    int swapped = 1;
    listint_t *start, *end;

    if (!list || !*list || !(*list)->next)
        return;

    start = *list;
    while (swapped)
    {
        swapped = 0;

        /* Forward pass */
        while (start->next)
        {
            if (start->n > start->next->n)
            {
                swap_nodes(list, start, start->next);
                swapped = 1;
            }
            else
                start = start->next;
        }

        if (!swapped)
            break;

        swapped = 0;
        end = start;

        /* Backward pass */
        while (end->prev)
        {
            if (end->n < end->prev->n)
            {
                swap_nodes(list, end->prev, end);
                swapped = 1;
            }
            else
                end = end->prev;
        }
        start = end;
    }
}

