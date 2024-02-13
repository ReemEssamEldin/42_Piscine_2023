/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:19:34 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/16 16:11:21 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (i);
}

int	main(void)
{
	char	s[] = " World!";
	char	d[30] = "Hello";

	ft_strcat(d, s);
	printf("My function: %s \n", d);

	char    s1[] = " Reem!";
        char    d1[30] = "Hi";

	strcat(d1, s1);
	printf("Existing function: %s \n", d1);

}
