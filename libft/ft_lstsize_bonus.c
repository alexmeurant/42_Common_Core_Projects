/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:21:21 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/22 13:45:09 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
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

	printf("List size: %d\n", ft_lstsize(elem1));

	free(elem1);
	free(elem2);
	free(elem3);
	return 0;
} */
