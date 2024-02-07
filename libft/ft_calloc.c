/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:56:42 by francflo          #+#    #+#             */
/*   Updated: 2024/01/30 15:30:52 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*my_calloc(size_t num_items, size_t size_of_item)
{
	size_t	total_size;
	void	*allocated_memory;

	total_size = num_items * size_of_item;
	if (num_items != 0 && total_size / num_items != size_of_item)
	{
		return (NULL);
	}
	*allocated_memory = malloc(total_size);
	if (allocated_memory != NULL)
	{
		memset(allocated_memory, 0, total_size);
	}
	return (allocated_memory);
}
