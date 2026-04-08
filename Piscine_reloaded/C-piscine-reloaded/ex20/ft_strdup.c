/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:37:29 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/25 12:13:13 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Reproduce the behavior of the function strdup (man strdup).
*/

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main(void)
{
	char	*str;
	char	*copy;
	
	str = "Test string";
	copy = ft_strdup(str);
	if (copy == 0)
	{
		printf("malloc failed\n");
		return (1);
	}
	printf("Original: %s\n", str);
	printf("Copy: %s\n", copy);
	free(copy);
	return (0);
} */