/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 00:54:27 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/11 09:24:36 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(char c)
{
	if (c == '\n' || c == ' ' || c == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char		*head;
	char		*tail;

	if (s)
	{
		tail = (char *)s + ft_strlen(s) - 1;
		head = (char *)s;
		while (ft_isspace(*head))
			head++;
		while (ft_isspace(*tail))
			tail--;
		return (ft_strrdup(head, tail + 1));
	}
	return (NULL);
}
