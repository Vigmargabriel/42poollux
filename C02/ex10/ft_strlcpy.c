/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovack <jnovack@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:29:17 by jnovack           #+#    #+#             */
/*   Updated: 2024/07/22 16:22:20 by jnovack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	z;
	unsigned int	q;

	z = 0;
	while (src[z] != '\0')
		z++;
	if (size == 0)
		return (z);
	q = 0;
	while (q < size - 1 && src[q] != '\0')
	{
		dest[q] = src[q];
		q++;
	}
	if (size != 0)
		dest[q] = '\0';
	return (z);
}
/*
#include <stdio.h>
int main()
{
    char src[] = "Como Esta sendo a 42?";
    char dest[28];

    unsigned int result = ft_strlcpy(dest, src, sizeof(dest));

    printf("SRC string: %s\n", src);
    printf("DEST string: %s\n", dest);
    printf("Length of SRC string: %u\n", result);

    return 0;
}*/
/*unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}*/
/*
#include <stdio.h>

int	main()
{
	char	src[] = "Hello, world!";
	char	dest[13];
	unsigned int	len;

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Source length: %u\n", len);
	printf("Destination: %s\n", dest);
	return (0);
}
*/
