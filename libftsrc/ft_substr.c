/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:46:40 by aprado            #+#    #+#             */
/*   Updated: 2023/11/09 18:33:50 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;
	int		j;

	if (!(s))
		return (NULL);
	i = 0;
	j = (int)start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (len > 0)
	{
		new[i] = s[j];
		i++;
		j++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
