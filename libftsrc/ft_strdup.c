/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:10:44 by aprado            #+#    #+#             */
/*   Updated: 2023/11/09 18:04:47 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	strlen;
	size_t	i;
	char	*dup;

	i = 0;
	strlen = ft_strlen(s);
	dup = (char *)malloc((strlen + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < strlen)
		dup[i++] = *s++;
	dup[strlen] = '\0';
	return (dup);
}
