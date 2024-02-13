/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:50:58 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/13 12:39:18 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	int	is_upper;
	char	str[] = "REEMISHERE";
	is_upper = ft_str_is_uppercase(str);
	printf("%d \n", is_upper);

	int     is_upper1;
	char    str1[] = "ReemIsHere";
	is_upper1 = ft_str_is_uppercase(str1);
	printf("%d \n", is_upper1);

	int     is_upper2;
	char    str2[] = "reemishere123!";
	is_upper2 = ft_str_is_uppercase(str2);
	printf("%d \n", is_upper2);

	return (0);
}
