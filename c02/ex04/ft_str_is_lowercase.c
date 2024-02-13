/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:43:58 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/13 12:38:31 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	int	is_lower;
	char	str[] = "reemishere";
	is_lower = ft_str_is_lowercase(str);
	printf("%d \n", is_lower);

	int     is_lower1;
	char    str1[] = "Reem Is Here";
	is_lower1 = ft_str_is_lowercase(str1);
	printf("%d \n", is_lower1);

	int     is_lower2;
	char    str2[] = "reem is here123!";
	is_lower2 = ft_str_is_lowercase(str2);
	printf("%d \n", is_lower2);
	return (0);
}
