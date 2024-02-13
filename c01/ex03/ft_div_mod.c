/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:53:42 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/05 16:56:34 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 44;
	b = 10;

	ft_div_mod(a, b, &div, &mod);
	printf("The Divition of %d and %d = %d and The Modulour = %d ", a, b, div, mod);
}
