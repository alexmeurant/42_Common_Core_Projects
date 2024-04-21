/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:42:25 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/22 14:00:40 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/* int main(void)
{
	t_list *elem1 = (t_list *)malloc(sizeof(t_list));
	t_list *elem2 = (t_list *)malloc(sizeof(t_list));
	t_list *elem3 = (t_list *)malloc(sizeof(t_list));
	t_list *new = (t_list *)malloc(sizeof(t_list));

	elem1->content = "1";
	elem2->content = "2";
	elem3->content = "3";
	new->content = "4";

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	new->next = NULL;

	ft_lstadd_back(&elem1, new);

	printf("Last element\'s value: %s\n", (char *)new->content);

	free(elem1);
	free(elem2);
	free(elem3);
	free(new);
	return 0;
} */
