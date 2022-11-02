/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-bras <mle-bras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:25:49 by mle-bras          #+#    #+#             */
/*   Updated: 2022/11/02 15:25:49 by mle-bras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (*new_s1 == *new_s2 && n)
		n--;
	return (*new_s1 - *new_s2);
}

/*
int main () {

   int ret;
   ret = ft_memcmp("abcdef", "abCDEF", 2);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   }
    else {
      printf("str1 is equal to str2 or n == 0\n");
   }
   return(0);
}
*/