/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:29:26 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/18 17:34:44 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	totallen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (destlen > size)
		destlen = size;
	totallen = destlen + srclen;
	if (destlen >= size)
		return (totallen);
	while (destlen + i < size - 1 && src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

int	main(void)
{
	char s1[10] = "Hello!";
	char s2[] = "World";
	printf("return: %d,dest: %s\n", ft_strlcat(s1, s2, 9), s1);
	
	char dest[10] = "Hello!";
        char src[] = "World";
        printf("return: %zu,dest: %s\n", strlcat(dest, src, 9), dest);
}
