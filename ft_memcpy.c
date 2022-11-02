/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:04:41 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 15:46:12 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	int		i;
	char	*new_dest;
	char	*new_src;

	i = 0;
	new_dest = dest;
	new_src = (char *)src;
	while (*new_src && count)
	{
		new_dest[i] = new_src[i];
		i++;
		count--;
	}
	new_dest[i] = '\0';
	return (new_dest);
}

/*
#include <unistd.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
   
	const char f_src[50] = "https://www.apple.com/fr/macbook-air-m2/";
	char f_dest[50];
	strcpy(f_dest,"Heloooo!!");
	printf("Before ft_memcpy dest = %s\n", f_dest);
	ft_memcpy(f_dest, f_src, strlen(f_src)+1);
	printf("After ft_memcpy dest = %s\n\n", f_dest);

	printf("################### \n\n");
	  
   const char src[50] = "https://www.apple.com/fr/macbook-air-m2/";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   

   return(0);
}
*/