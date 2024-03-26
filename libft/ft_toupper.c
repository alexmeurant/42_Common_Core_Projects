/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:00:56 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/15 13:36:20 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* int	main(void)
{
	printf("n, A toupper => %c, %c\n", toupper('n'), toupper('A'));
	printf("n, A ft_toupper => %c, %c\n", ft_toupper('n'), ft_toupper('A'));
} */
