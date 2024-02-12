/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:33:56 by reldahli          #+#    #+#             */
/*   Updated: 2023/10/03 17:36:37 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ra;

	ra = 122;
	while (ra >= 97)
	{
		write(1, &ra, 1);
		ra--;
	}
}

//int     main(void)
//{
//        ft_print_reverse_alphabet();
//}
