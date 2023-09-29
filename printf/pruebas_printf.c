/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamorale <jamorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:01:13 by jamorale          #+#    #+#             */
/*   Updated: 2023/09/26 11:05:52 by jamorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*str;
	int		num;

	num = 4;
	str = "Hola que tal";
	printf("%s %d", str, num);
	return (0);
}
