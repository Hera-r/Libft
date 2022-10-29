/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:34:54 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 22:36:43 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_len((char *)s);
	while (i)
	{
		if (s[i] == c)
			break ;
	i--;
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

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/