/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:58:43 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/14 11:41:18 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("ft_isdigit: %d, isdigit: %d\n", ft_isdigit('0'), isdigit('0'));
	printf("ft_isdigit: %d, isdigit: %d\n", ft_isdigit('a'), isdigit('a'));
	return (0);
} */
