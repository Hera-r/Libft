/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:50:36 by hrandria          #+#    #+#             */
/*   Updated: 2022/11/12 00:58:50 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	size;
	char	*newstr;

	size = ft_strlen(s) + 1;
	newstr = malloc(size * sizeof(char));
	if (!newstr)
		return (0);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
	i++;
	}
	newstr[i] = '\0';
	return (newstr);
}