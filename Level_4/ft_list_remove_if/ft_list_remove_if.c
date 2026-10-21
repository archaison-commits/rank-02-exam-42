#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"
#include <string.h>
#include <stdio.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
    t_list  **current;
    t_list  *tmp;

    current = begin_list;
    while (*current)
    {
        if(!(cmp((*current)->data, data_ref)))
        {
            tmp = *current;
            *current = (*current)->next;
            free(tmp);
        }
        else
            current = &(*current)->next;    
    }
}

int    cmp(void *data, void *data_ref)
{
    return(strcmp((char *)data, (char *)data_ref));
}

void print_list(t_list *list)
{
    while (list)
    {
        printf("%s\n", (char *)list->data);
        list = list->next;
    }
}

int main(void)
{
    t_list  *a;
    t_list  *b;
    t_list  *c;
    t_list  *d;

    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));
    c = malloc(sizeof(t_list));
    d = malloc(sizeof(t_list));

    a->data = strdup("hello");
    b->data = strdup("world");
    c->data = strdup("hello");
    d->data = strdup("42");

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    printf("Before:\n");
    print_list(a);

    ft_list_remove_if(&a, "hello", cmp);

    printf("\nAfter removing hello:\n");
    print_list(a);

    while (a)
    {
        t_list *tmp = a->next;
        free(a->data);
        free(a);
        a = tmp;
    }
    return (0);
}