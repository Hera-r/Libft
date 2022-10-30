/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:31:22 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/30 15:31:22 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && n--)
	i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abc");
   strcpy(str2, "abcdefr");

   ret = ft_strncmp(str1, str2, 4);
//    ret = ft_strncmp(str1, str2, 4);


   if(ret < 0) {
      printf("str1 is less than str2\n");
   } else if(ret > 0) {
      printf("str2 is less than str1\n");
   } else {
      printf("str1 is equal to str2\n");
   }
   
   return(0);
}
*/