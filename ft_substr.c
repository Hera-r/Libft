/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-bras <mle-bras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:14:30 by mle-bras          #+#    #+#             */
/*   Updated: 2022/11/06 18:14:30 by mle-bras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	int		i;
	char	*copy;

	i = 0;
	new_s = (char *)s + start;
	copy = malloc(len + sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (new_s[i] && len)
	{
		copy[i] = new_s[i];
	i++;
	len--;
	}
	return (copy);
}

/*
int	main(void)
{
	char str[] = "https://www.apple.com/fr/shop/buy-mac/macbook-air";
	char *new_str;
	new_str = ft_substr(str, 8, 42);

	printf("%s\n", new_str);
	free(new_str);
	return (0);
}
*/