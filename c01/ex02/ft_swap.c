/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:25:32 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/05 15:00:14 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int a;
	int b;

	a = 40;
	b = 50;
	printf("The value BEFOR swap = %d \n", a);
	ft_swap(&a,&b);
	printf("The value AFTER swap = %d \n", a);
	return 0;
}
