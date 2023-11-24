#include "bonus.h"

int ft_lstsize(t_list *lst)
{
    size_t  i;

    i = 0;
    while(lst != NULL)
    {

        lst = lst->next;
        ++i;
    }
    return (i);
}

int main(void)
{
   t_list *lst = ft_lstnew("coucou");
    printf("%d", ft_lstsize(lst));
}