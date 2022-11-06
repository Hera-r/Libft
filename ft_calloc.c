/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-bras <mle-bras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:35:51 by mle-bras          #+#    #+#             */
/*   Updated: 2022/11/05 15:35:51 by mle-bras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char    *new_space;
	int     i;

	i = 0;
	new_space = malloc(nmemb, size);
	if (new_space == NULL)
		return (NULL);
	while (nmemb)
	{
		new_space[i] = 0;
	i++;
	nmemb--;
	}
	return (new_space);
}