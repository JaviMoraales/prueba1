/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamorale <jamorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:44:46 by jamorale          #+#    #+#             */
/*   Updated: 2023/09/15 11:14:35 by jamorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	i;
	int	num;

	num = 0;
	minus = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		minus *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	num *= minus;
	return (num);
}
