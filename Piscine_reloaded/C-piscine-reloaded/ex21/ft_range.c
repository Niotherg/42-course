/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:38:16 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/25 12:13:45 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function ft_range which returns an array of ints. This int array
  should contain all values between min and max.
• Min included - max excluded.
• If the value of min is greater than or equal to max, a NULL pointer should be
  returned.
*/

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/* int main(void)
{
	int	*arr;
	int min;
	int max;
	int	i;
	
	min = 10;
	max = 35;
	arr = ft_range(min, max);
	if (arr == 0)
	{
		printf("Returned 0\n");
		return (0);
	}
	i = 0;
	while (i < max - min)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
} */