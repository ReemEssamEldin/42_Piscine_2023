/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:12:28 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/16 16:06:33 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0') && (i + 1) < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	str1[] = "Hello";
        char    str2[] = "Hellz";

	printf("My function:%d\n", ft_strncmp(str1, str2, 5));
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("-----------------\n");
	printf("Existing function:%d\n", strncmp(str1, str2, 5));
        printf("%s\n",str1);
        printf("%s\n",str2);
}
