/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:04:56 by ameurant          #+#    #+#             */
/*   Updated: 2024/03/19 16:25:59 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* int	main(void)
{
	void	ft_maj(unsigned int i, char *s)
	{
		i = 0;
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	char	s[] = "hello world";
	ft_striteri(s, &ft_maj);

	printf("Result: %s\n", s);
	return (0);
} */
