/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:59:48 by hrandria          #+#    #+#             */
/*   Updated: 2022/11/10 18:09:28 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

static int	element_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			i++;
		}
	}
	return (count);
}

static char	*strdup_index(char const *s, int st, int end)
{
	char	*newstr;
	int		size;
	int		i;

	size = (end - st) + 1;
	i = 0;
	newstr = malloc(size * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (st < end)
	{
		newstr[i] = s[st];
		i++;
		st++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		size;
	int		start;
	int		index;

	index = 0;
	size = element_count(s, c);
	tab = malloc((size + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
		i++;
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
			i++;
			tab[index++] = strdup_index(s, start, i);
		}
	}
	tab[index] = '\0';
	return (tab);
}

/*
int main(void)
{
	char str[] = "..bonjour.fdsfdsf bot. fqsfdq ..now..";
	char c = '.';
	//int taille = element_count(str, c);
	char **ta = ft_split(str, c);

	 for (int i = 0; i < 5; i++)
			printf("tab[%u] = %s\n", i, ta[i]);

	 return (0);
}
*/