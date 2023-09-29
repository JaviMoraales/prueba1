/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamorale <jamorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:34:11 by jamorale          #+#    #+#             */
/*   Updated: 2023/09/29 12:59:44 by jamorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formats(va_list args, char car)
{
	int	result;

	if (car == 'c')
		result +=ft_putchar(va_arg(args, int));
	if (car == 's')
		result += ft_putstr(va_arg(args, char *));
	if (car == 'd')
		result += ft_putnbr_dec(va_arg(args, double));
	if (car == 'i')
		result = ft_putnbr(va_arg(args, int));
	if (car == 'u')
		result += ft_putunsigned(va_arg(args, unsigned int));
	if (car == 'x')
	{
		result += ft_puthex(va_arg(args, unsigned int), car);
	}
	if (car == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			formats(args, str[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str;
	double	num;
	char	c;

	str = "Hola que tal";
	num = 123.4567891;
	c = 'Z';

	ft_printf("%u", num);
	return (0);
}
