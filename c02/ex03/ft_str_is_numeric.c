/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:39:37 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/10 18:17:21 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
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
	int	is_num;
	char	str[] = "123";
	is_num = ft_str_is_numeric(str);
	printf("%d \n", is_num);
	return (0);
}
*/
