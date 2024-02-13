/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:39:33 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/16 19:04:06 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	str1[] = "hi!";
	char	str2[] = "hello!";

	//char	str3[] = "hello!";
	//char	str4[] = "hello!";

	//char	str5[] = "hello!";
	//char	str6[] = "hi!";

	printf("My function:%d\n", ft_strcmp(str1, str2));
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("-----------------\n");
	printf("Existing function:%d\n", strcmp(str1, str2));
        printf("%s\n",str1);
        printf("%s\n",str2);
}
