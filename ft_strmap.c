/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:23:35 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/08 14:51:37 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ps;

	if (s && f)
	{
		i = 0;
		ps = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (ps == NULL)
			return (NULL);
		while (s[i])
		{
			ps[i] = f(s[i]);
			i++;
		}
		ps[i] = '\0';
		return (ps);
	}
	return (NULL);
}
