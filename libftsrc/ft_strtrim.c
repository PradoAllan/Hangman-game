/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:48:45 by aprado            #+#    #+#             */
/*   Updated: 2023/11/09 18:36:12 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	in(char const *str, char ch)
{
	while (*str && ch != *str)
		str++;
	if (ch == *str)
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;

	if (!(s1))
		return (NULL);
	first = 0;
	last = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (in(set, s1[first]))
		first++;
	if (first == last)
		return (ft_strdup(""));
	while (in(set, s1[last - 1]))
		last--;
	return (ft_substr(s1, first, last - first));
}
