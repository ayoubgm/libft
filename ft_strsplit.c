/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:37:18 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/11 18:36:42 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_lenword(char const *s, char c)
{
	int			i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char			**filltab(char **tab, char const *s, char c)
{
	int			counw;
	int			i;
	int			j;
	int			t;

	i = 0;
	t = 0;
	counw = ft_countwords(s, c);
	while (s[i] && t < counw)
	{
		j = 0;
		while (s[i] == c)
			i++;
		tab[t] = (char*)malloc(sizeof(char) * (ft_lenword(s + i, c) + 1));
		if (tab == NULL)
			return (NULL);
		while (s[i] && !(s[i] == c))
			tab[t][j++] = s[i++];
		tab[t][j] = '\0';
		t++;
	}
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	int			counw;
	char		**tab;

	if (s && c)
	{
		counw = ft_countwords(s, c);
		if (!(tab = (char**)ft_memalloc(sizeof(char*) * (counw + 1))))
			return (NULL);
		tab = filltab(tab, s, c);
		return (tab);
	}
	return (NULL);
}
