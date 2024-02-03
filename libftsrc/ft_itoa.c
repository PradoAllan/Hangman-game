/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:27:21 by aprado            #+#    #+#             */
/*   Updated: 2023/11/08 12:04:21 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_negative(long n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	int_len(long n)
{
	long	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len = 2;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		neg;
	int		qtd;
	long	newn;

	newn = n;
	neg = is_negative(newn);
	qtd = int_len(newn);
	result = (char *)malloc(sizeof(char) * (qtd + 1));
	if (result == NULL)
		return (NULL);
	result[qtd] = '\0';
	if (neg == 1)
	{
		*result = '-';
		result[--qtd] = -(newn % 10) + '0';
		newn = -(newn / 10);
	}
	while (qtd-- - neg)
	{
		result[qtd] = newn % 10 + '0';
		newn = newn / 10;
	}
	return (result);
}
