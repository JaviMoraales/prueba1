/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamorale <jamorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:23:23 by jamorale          #+#    #+#             */
/*   Updated: 2023/09/29 12:57:11 by jamorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);

int		ft_unsigned_len(unsigned int nb);
char	*ft_uitoa(unsigned int nb);
int		ft_putunsigned(unsigned int nb);

int		hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_puthex(unsigned int num, const char format);

#endif