/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:36:18 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/27 15:36:40 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*malloc(size_t size)
{
	void	*block;

	block = sbrk(size);
	if (block == (void *)-1)
		return (NULL);
	return (block);
}