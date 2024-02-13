/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:51:03 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/18 16:53:10 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = i;
		while (str[k] == to_find[j])
		{
			k++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	all[] = "The quick brown fox jumps over the lazy dog";
	char	string[30] = "zy dog";
	char	*result;
	result = ft_strstr(all, string);
	printf("%s \n", result);

	char	all1[] = "The quick brown fox jumps over the lazy dog";	
	char	string1[30] = "zy dog";
	char	*result1;
	result1 = strstr(all1, string1);
	printf("%s \n", result1);
}
