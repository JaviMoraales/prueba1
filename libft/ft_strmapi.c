/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamorale <jamorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:18:48 by jamorale          #+#    #+#             */
/*   Updated: 2023/09/22 13:24:37 by jamorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!s || !f || !tmp)
		return (NULL);
	i = 0;
	while (i < (ft_strlen((char *)s)))
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
