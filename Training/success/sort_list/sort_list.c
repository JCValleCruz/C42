
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *swap;
	int 	n;

	swap = lst;

	while (lst->next != '\0')
	{	
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			n = lst->data;
			lst->data = lst->next->data;
			lst->next->data = n;

			lst = swap;
		}
		else
		{
			lst = lst->next;
		}
	}
	lst = swap;
	return (lst);
}	
