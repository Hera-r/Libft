/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:47:50 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 16:35:49 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*new_dest;
	int		i;

	i = 0;
	new_dest = dest;
	while (*(char *)src && count--)
	{
		new_dest[i++] = *(char *)src++;
	}
	return (new_dest);
}

/*
#include <unistd.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
   char fdest[] = "oldstring";
   const char fsrc[]  = "newstring";

	printf("Before ft_memmove dest = %s, src = %s\n", fdest, fsrc);
	ft_memmove(fdest+2, fsrc, 9);
	printf("After ft_memmove dest = %s, src = %s\n\n", fdest, fsrc);

	printf("##########################\n\n");

   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest+2, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   // je pense qu'il faudrait mettre une condition par rapport à la taille de dest
   return(0);
}
*/