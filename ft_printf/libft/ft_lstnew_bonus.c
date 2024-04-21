/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:07:39 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/22 13:44:54 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

/* int main(void)
{
	int	*value = (int *)malloc(sizeof(int));
	*value = 42;

	t_list	*lstnew = ft_lstnew(value);

	printf("Value of lstnew: %d\n", *(int *)(lstnew->content));

	free(value);
	free(lstnew);
	return 0;
} */
