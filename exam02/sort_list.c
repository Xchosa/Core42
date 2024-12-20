
/*
Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include "list.h"


t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *start;
	start = lst;

	while((lst != NULL )&& (lst->next != NULL))
	{
		if((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return(start);
}

// typedef struct s_list  t_list;

// struct s_list
// {
// 	int 	data;
// 	t_list *next;
// };


int ascending(int a, int b) 
{
    return (a <= b);
}

void print_list(t_list *lst)
{
	while(lst != NULL)
	{
		printf("%d", lst ->data);
		if (lst->next != NULL)
			printf("%c", '->');
		lst = lst ->next;
	}
	  printf("\n");
}

int main() 
{
    t_list *lst = create_node(4);
    lst->next = create_node(2);
    lst->next->next = create_node(3);
    lst->next->next->next = create_node(1);

	lst = sort_list(lst, ascending);
	print_list(lst);

}