/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:22:41 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/09 11:11:24 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	di;
	int	mo;

	di = (*a / *b);
	mo = (*a % *b);
	*a = di;
	*b = mo;
}
/*
int	main(void)
{
	int     a;
        int     b;

        a = 44;
        b = 10;
        ft_ultimate_div_mod(&a, &b);
	printf("value a = %d, value b = %d \n", a, b);
	printf("The Divition = %d and The Modulour = %d ", a, b);
}
*/
