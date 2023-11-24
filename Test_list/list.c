#include "list.h"

List    new_list(void)
{
    return (List);
}

Bool    is_empty(List list)
{
    if (list == NULL)
        return true;
    return false;
}

int	list_len(List list)
{
    size_t    size;

    size = 0;
    if (!list)
        return (NULL);

    while (list != NULL)
    {
        ++size;
        list = list->next;
    }
    return (size);

}

void	printf_list(List list)
{
    if(!list)
    {
        printf("empty array\n");
        return;
    }
    while (list != NULL)
    {
        printf("[%d]", list->value);
        list = list->next;   
    }
    printf("\n"); 
}

