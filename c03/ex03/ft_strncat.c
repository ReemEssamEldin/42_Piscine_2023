/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:23:47 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/17 13:10:17 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	char			*i;

	i = dest;
	j = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && j < nb)
	{
		*dest = *src;
		src++;
		dest++;
		j++;
	}
	*dest = '\0';
	return (i);
}

int	main(void)
{
	char	s[] = " Reem Eldahlish!";
	char	d[30] = "Hello";

	ft_strncat(d, s, 15);
	printf("My function: %s \n", d);

	char    s1[] = " Reem Eldahlish!";
        char    d1[30] = "Hello";

        strncat(d1, s1, 15);
        printf("Existing function: %s \n", d1);
}
