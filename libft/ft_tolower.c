/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:01:10 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/15 13:37:41 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* int	main(void)
{
	printf("n, A tolower => %c, %c\n", tolower('n'), tolower('A'));
	printf("n, A ft_tolower => %c, %c\n", ft_tolower('n'), ft_tolower('A'));
} */
