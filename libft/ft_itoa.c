/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamorale <jamorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:20:11 by jamorale          #+#    #+#             */
/*   Updated: 2023/09/22 16:07:09 by jamorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chars(int n)
{
	long int	nb;
	int			chars;

	nb = n;
	chars = 1;
	if (n < 0)
	{
		chars++;
		nb *= -1;
	}
	while (nb >= 10)
	{
		nb /= 10;
		chars++;
	}
	return (chars);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*str;
	int			i;

	str = malloc(count_chars(n) + 1);
	if (!str)
		return (NULL);
	str[count_chars(n)] = '\0';
	i = count_chars(n) - 1;
	nb = n;
	if (n < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb >= 10)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	str[i] = nb + '0';
	return (str);
}
