/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:11:23 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/11 14:22:24 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ini;
	char	c;
	int		i;

	ini = '0';
	i = 0;
	while (i <= 9)
	{
		c = ini + i;
		write(1, &c, 1);
		i++;
	}
}
