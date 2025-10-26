#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list using insertion sort
 * @list: Double pointer to the head of the list
 *
 * Description: Sorts a doubly linked list of integers in ascending order
 * using insertion sort algorithm. Prints list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert_node, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		insert_node = current;
		current = current->next;

		while (insert_node->prev != NULL && insert_node->n < insert_node->prev->n)
		{
			temp = insert_node->prev;

			if (temp->prev != NULL)
				temp->prev->next = insert_node;
			else
				*list = insert_node;

			if (insert_node->next != NULL)
				insert_node->next->prev = temp;

			temp->next = insert_node->next;
			insert_node->prev = temp->prev;
			temp->prev = insert_node;
			insert_node->next = temp;

			print_list(*list);
		}
	}
}
