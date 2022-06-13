#include "sort.h"

/**
 *insertion_sort_list - main
 *@list : list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *help, *back;

	aux = *list;
	help = aux->next;
	while (help)
	{
		aux = help;
		help = help->next;
		back = aux->prev;
		while (back && (aux->n < back->n))
		{
			if (back->prev)
				back->prev->next = aux;
			aux->prev = back->prev;
			back->next = aux->next;
			if (aux->next)
				aux->next->prev = back;
			aux->next = back;
			back->prev = aux;
			if (aux->prev == NULL)
				*list = aux;
			back = aux->prev;
			print_list(*list);
		}
	}
}
