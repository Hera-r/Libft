/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:41:30 by hrandria          #+#    #+#             */
/*   Updated: 2022/11/11 00:09:46 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int count_str(int   n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
	count++;
	}
	return (count);
}

char    *ft_itoa(int n)
{
	int		size;
	char	*str_num;
	int		tmp;
	int		count;

	size = count_str(n);
	count = size;
	str_num = malloc((size + 1) * sizeof(char));
	if (str_num == NULL)
		return (NULL);
	while(n > 0)
	{
		tmp = n % 10;
		str_num[count-1] = tmp + '0';
		n  = n / 10;
		count--;
	}
	return (str_num);
}

int main(void)
{
	int number = 42401;
	char *newstr;

	newstr = ft_itoa(number);
	printf("nombre chiffre - %s\n", newstr);

	return (0);    
}