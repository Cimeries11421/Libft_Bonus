#include "bonus.h"

t_list  *ft_lstnew(void  *content)
{
  t_list    *new;

    new = (t_list *)malloc(sizeof(t_list)); //pourquoi cet syntaxe ?
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL; // pourquoi pointe sur NULL ?

    return (new);
}
/*void    main(void)
{
     t_list *new = ft_lstnew("a");
     printf("%s\n", (char *)new->content);

     free(new);
}*/