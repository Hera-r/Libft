/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-bras <mle-bras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:46:14 by mle-bras          #+#    #+#             */
/*   Updated: 2022/11/06 19:46:14 by mle-bras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len(char const *str)
{
	int i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len_str;
	char	*new_str;

	i = 0;
	j = 0;
	len_str = (len(s1) + len(s2)) + 1;
	new_str = malloc(len_str + sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
	i++;
	}
	while (s2[j])
	{
		new_str[i] = s2[j];
	i++;
	j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
int	main(void)
{
	char	st1[] = "unix";
	char	st2[] = "Linux";
	char	*new;

	new = ft_strjoin(st1, st2);
	printf("%s\n", new);
}
*/