/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:20:34 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 20:33:50 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i++])
	{
		if (s[i++] == c)
			break ;
	}
	return ((char *)s + i);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "https://www.apple.com/fr/macbook-air-m2/";

   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/