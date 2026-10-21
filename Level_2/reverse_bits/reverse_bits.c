/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brechied <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:22:06 by brechied          #+#    #+#             */
/*   Updated: 2026/10/06 22:13:22 by brechied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	size_t	total_bits;
	unsigned char	res;

	total_bits = 8;
	while (total_bits--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return (res);
}

int	main()
{
	unsigned char	octet;
	unsigned char	res;
	int	i;


	i = 7;
	octet = 'H';
	while (i >= 0)
	{	
		printf("%d", (octet >> i) & 1);
		i--;
	}
	printf("\n");
	res = reverse_bits(octet);
	i = 7;
        while (i >= 0)
        {
                printf("%d", (res >> i) & 1);
                i--;
        }
	return (0);
}
