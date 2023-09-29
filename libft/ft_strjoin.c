/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:52:06 by marvin            #+#    #+#             */
/*   Updated: 2023/09/21 10:52:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ii;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	ii = 0;
	while (s1[i] != '\0')
		s3[ii++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		s3[ii++] = s2[i++];
	s3[ii] = '\0';
	return (s3);
}
