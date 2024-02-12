/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:43:58 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/10 18:18:15 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'a' || str[i] >= 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	int	is_lower;
	char	str[] = "reem";
	is_lower = ft_str_is_lowercase(str);
	printf("%d \n", is_lower);
	return (0);
}
*/
