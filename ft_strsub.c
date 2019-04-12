/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:11:34 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/08 15:02:57 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*sub;

	if (s)
	{
		sub = (char *)ft_memalloc(sizeof(char) * (len + 1));
		if (sub == NULL)
			return (NULL);
		ft_strncpy(sub, s + start, len);
		return (sub);
	}
	return (NULL);
}
