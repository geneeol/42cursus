/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahkang <dahkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:47:35 by dahkang           #+#    #+#             */
/*   Updated: 2022/10/02 22:40:41 by dahkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(int n)
{
	char	str[15];
	pf_itoa(n, str, 0);
	return (write(1, str, ft_strlen(str)));
}

int	print_udecimal(unsigned int n)
{
	char	str[15];
	pf_itoa(n, str, 1);
	return (write(1, str, ft_strlen(str)));
}

int	print_hex(unsigned int n, char button)
{
	char	str[15];
	pf_itoa_hex((unsigned int)n, str, button);
	return (write(1, str, ft_strlen(str)));
}
