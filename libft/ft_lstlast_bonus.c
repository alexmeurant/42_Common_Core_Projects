/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:08:22 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/22 13:44:24 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int main(void)
{
	t_list *elem1 = (t_list *)malloc(sizeof(t_list));
	t_list *elem2 = (t_list *)malloc(sizeof(t_list));
	t_list *elem3 = (t_list *)malloc(sizeof(t_list));

	elem1->content = "1";
	elem2->content = "2";
	elem3->content = "3";

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;

	printf("Last element\'s value: %s\n", (char *)ft_lstlast(elem1)->content);

	free(elem1);
	free(elem2);
	free(elem3);
	return 0;
} */
