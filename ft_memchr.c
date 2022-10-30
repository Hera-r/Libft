/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:07:40 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/30 22:07:40 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *buffer, int c, size_t count)
{
	char	*new_b;
	int		i;

	i = 0;
	new_b = (char *)buffer;
	while (new_b[i] && count--)
	{
		if (new_b[i] == c)
			return (new_b + i);
	i++;
	}
	return (0);
}

/*
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
*/
