/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:03:10 by odessein          #+#    #+#             */
/*   Updated: 2022/02/06 17:51:57 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	middle;
	int	buffer_middle;
	int	buffer_value;
	int	counter;

	size = size - 1;
	if (size % 2 == 1)
		middle = (size / 2) - 1;
	else
		middle = size / 2;
	buffer_middle = middle;
	counter = 0;
	while (size > buffer_middle && counter < buffer_middle)
	{
		buffer_value = tab[counter];
		tab[counter] = tab[size];
		tab[size] = buffer_value;
		++counter;
		--size;
	}
	return ;
}
