/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:10:27 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/22 13:44:38 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmap;
	t_list	*mod_node;

	if (!lst || !f)
		return (NULL);
	lstmap = NULL;
	while (lst)
	{
		mod_node = ft_lstnew(f(lst->content));
		if (!mod_node)
		{
			ft_lstclear(&lstmap, del);
			return (NULL);
		}
		ft_lstadd_back(&lstmap, mod_node);
		lst = lst->next;
	}
	return (lstmap);
}

/* int main(void)
{
	void	*add_one(void *content)
	{
		int *number = (int *)content;
		int *new_number = (int *)malloc(sizeof(int));
		if (new_number)
			*new_number = (*number) + 1;
		return new_number;
	}

	// Fonction de suppression pour la fonction ft_lstclear
	void	del_int(void *content)
	{
		free(content);
	}

	t_list	*lst = NULL;
	for (int i = 0; i < 5; i++)
	{
		int *number = (int *)malloc(sizeof(int));
		*number = i;
		ft_lstadd_back(&lst, ft_lstnew(number));
	}

	t_list	*lstmap = ft_lstmap(lst, add_one, del_int);

	t_list *current = lstmap;
	while (current)
	{
		printf("%d ", *((int *)(current->content)));
		current = current->next;
	}
	printf("\n");

	ft_lstclear(&lst, del_int);
	ft_lstclear(&lstmap, del_int);

	return 0;
} */
