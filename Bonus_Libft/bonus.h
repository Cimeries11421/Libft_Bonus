#ifndef BONUS_H
#define BONUS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list
{
    void            *content;
    struct  s_list  *next;
}                   t_list;


t_list  *ft_lstnew(void  *content);

#endif