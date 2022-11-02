/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-bras <mle-bras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:09:13 by mle-bras          #+#    #+#             */
/*   Updated: 2022/11/02 16:09:13 by mle-bras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

int	ft_findstr(char *str, char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && len)
	{
		while (j < ft_len(to_find))
		{
			if (str[i + j] == to_find[j] && j != ft_len(to_find) - 1)
			{
			j++;
			}
			else if ((j == ft_len(to_find) - 1) && str[i + j] == to_find[j])
			{
				return (i);
			}
			else
				j = ft_len(to_find);
		}
	i++;
	len--;
	j = 0;
	}
	return (-1);
}

char	*ft_strnstr(const char *str , const char *to_find , size_t len)
{
	int	i;

	if (*to_find == 0)
		return (str);
	i = ft_findstr(str, to_find, len);
	if (i == -1)
		return (0);
	return (str + i);
}