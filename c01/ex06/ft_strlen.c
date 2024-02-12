/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:03:37 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/09 12:50:13 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int main(void)
{
	char string_of_char[] = "This is EX06\n";
	int length;

	length = ft_strlen(string_of_char);
	printf("The number of characters = %d", length);
	return (0);
}
