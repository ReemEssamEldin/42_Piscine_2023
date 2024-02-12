/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:01:02 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/10 18:21:15 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	int	is_printable;
	char	str[] = "REEM";
	is_printable = ft_str_is_printable(str);
	printf("%d \n", is_printable);
	return (0);
}
*/
