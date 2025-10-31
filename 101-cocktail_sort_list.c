#include "sort.h"
#include <stdio.h>

/**
* swap_nodes - Swaps two adjacent nodes in a doubly linked list
* @list: Double pointer to the head of the list
* @left: The left node to swap
* @right: The right node to swap
*/
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
    if (!a || !b || a == b)
        return;

    a->next = b->next;
    if (b->next)
        b->next->prev = a;

    b->prev = a->prev;
    if (a->prev)
        a->prev->next = b;
    else
        *list = b;

    b->next = a;
    a->prev = b;
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
void forward_pass(listint_t **list, listint_t **end, int *swapped)
{
    listint_t *node = *list;

    while (node && node->next)
    {
        if (node->n > node->next->n)
        {
            swap_nodes(list, node, node->next);
            print_list(*list);
            *swapped = 1;
        }
        else
            node = node->next;
    }
    *end = node;
}

/* Backward pass */
void backward_pass(listint_t **list, listint_t **start, listint_t *end, int *swapped)
{
    listint_t *node = end;

    while (node && node->prev)
    {
        if (node->n < node->prev->n)
        {
            swap_nodes(list, node->prev, node);
            print_list(*list);
            *swapped = 1;
        }
        else
            node = node->prev;
    }
    *start = node;
}
