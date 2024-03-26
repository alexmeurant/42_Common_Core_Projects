/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:04:34 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/21 12:12:11 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	number_len;
	long	nb;

	number_len = n_len(n);
	result = (char *)malloc(sizeof(char) * (number_len + 1));
	if (!result)
		return (NULL);
	result[number_len] = 0;
	nb = n;
	if (n < 0)
		nb = -nb;
	if (n == 0)
		result[0] = '0';
	else
	{
		while (number_len-- && nb > 0)
		{
			result[number_len] = (nb % 10) + '0';
			nb = (nb - (nb % 10)) / 10;
		}
		if (n < 0)
			result[number_len] = '-';
	}
	return (result);
}

/* int	main(void)
{
	printf("Length: %d => %s\n", n_len(48), ft_itoa(48));
	printf("Length: %d => %s\n", n_len(0), ft_itoa(0));
	printf("Length: %d => %s\n", n_len(-48), ft_itoa(-48));
	printf("Length: %d => %s\n", n_len(2147483647), ft_itoa(2147483647));
	printf("Length: %d => %s\n", n_len(-2147483648), ft_itoa(-2147483648));
} */
