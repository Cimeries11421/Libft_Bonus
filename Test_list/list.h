#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*typedef struct Liste Liste;
struct Liste
{
		Element *premier;
}*/

typedef	enum // si jamais la version du C ne prend pas ce type par défault
{
	false,
	true
}Bool;

typedef struct ListElement
{
	    int *value;
		struct 	ListElement *next;
			
}ListElement, *List;

//Prototypes

List	new_list(void);
Bool	is_empty_list(void);
int	list_len(List list);
void	printf_list(List list);


#endif