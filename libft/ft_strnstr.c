/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamorale <jamorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:56:26 by jamorale          #+#    #+#             */
/*   Updated: 2023/09/22 12:02:54 by jamorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	if (*to_find == '\0')
		return ((char *)str);
	i = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= i)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, i) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
