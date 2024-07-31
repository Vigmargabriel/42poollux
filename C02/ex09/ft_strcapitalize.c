/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:45:04 by vigde-ol          #+#    #+#             */
/*   Updated: 2024/07/23 16:12:41 by vigde-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (first && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!first && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
			first = 0;
		}
		else
		{
			first = 1;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "cAda Historia e umA hisToriA!";
    char str2[] = "12D,bY87/mIss";
    char str3[] = "45230y,*q";
    char str4[] = "OLA TUDO BEM?";

    printf("Original string: %s\n", str1);
    printf("Capitalized string: %s\n\n", ft_strcapitalize(str1));

    printf("Original string: %s\n", str2);
    printf("Capitalized string: %s\n\n", ft_strcapitalize(str2));

    printf("Original string: %s\n", str3);
    printf("Capitalized string: %s\n\n", ft_strcapitalize(str3));

    printf("Original string: %s\n", str4);
    printf("Capitalized string: %s\n", ft_strcapitalize(str4));

    return (0);
}*/
/*
nao aceita no exercicio pq usa a funcao da biblioteca <ctype.h>
{
	int	i;
	int	pln;

	i = 0;
	pln = 1;
	while (str[i] != '\0')
	{
		if (isalnum(str[i]))
		{
			if (pln && isalpha(str[i]))
			{
				str[i] = toupper(str[i]));
				pln = 0;
			}
			else
			{
				str[i] = tolower(str[i];
			}
		}
		else
		{
			pln = 1;
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char str1[] = "hello, world! 42foo bar";
    char str2[] = "heLLo, WoRLD! 42FOO bAr";
    char str3[] = "a1b2c3";
    char str4[] = "HELLO WORLD";

    // Testa a função com diferentes strings
    printf("%s\n", ft_strcapitalize(str1));
    printf("%s\n", ft_strcapitalize(str2));
    printf("%s\n", ft_strcapitalize(str3)); // Deve imprimir "A1b2c3"
    printf("%s\n", ft_strcapitalize(str4)); // Deve imprimir "Hello World"

    return 0;
}*/
