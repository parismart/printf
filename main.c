/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti </var/mail/parmarti>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 17:27:35 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/25 17:27:42 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <stdlib.h>

int		main()
{
	int 	i;

	printf("\n*********************Bullshit******************\n\n");
	printf("\n00000000000000000000000000000000000000000000000\n\n");
	i = ft_printf("%c\n", '\0');
	printf("%i\n", i);
	i = printf("%c\n", '\0');
	printf("%i\n", i);
	printf("\n11111111111111111111111111111111111111111111111\n\n");
	i = ft_printf("%c\n", '\0');
	printf("%i\n", i);
	i = printf("%c\n", '\0');
	printf("%i\n", i);
	printf("\n22222222222222222222222222222222222222222222222\n\n");
	i = ft_printf("%5c\n", '\0');
	printf("%i\n", i);
	i = printf("%5c\n", '\0');
	printf("%i\n", i);
	printf("\n33333333333333333333333333333333333333333333333\n\n");
	i = ft_printf("%-5c\n", '\0');
	printf("%i\n", i);
	i = printf("%-5c\n", '\0');
	printf("%i\n", i);
	printf("\n44444444444444444444444444444444444444444444444\n\n");
	i = ft_printf("%1$\n");
	printf("%i\n", i);
	i = printf("%1$\n");
	printf("%i\n", i);
	printf("\n55555555555555555555555555555555555555555555555\n\n");
	i = ft_printf("%0\n");
	printf("%i\n", i);
	i = printf("%0\n");
	printf("%i\n", i);
	printf("\n66666666666666666666666666666666666666666666666\n\n");
	i = ft_printf("% \n");
	printf("%i\n", i);
	i = printf("% \n");
	printf("%i\n", i);
	printf("\n77777777777777777777777777777777777777777777777\n\n");
	i = ft_printf("%#\n");
	printf("%i\n", i);
	i = printf("%#\n");
	printf("%i\n", i);
	printf("\n88888888888888888888888888888888888888888888888\n\n");
	i = ft_printf("%-\n");
	printf("%i\n", i);
	i = printf("%-\n");
	printf("%i\n", i);
	printf("\n99999999999999999999999999999999999999999999999\n\n");
	i = ft_printf("%+\n");
	printf("%i\n", i);
	i = printf("%+\n");
	printf("%i\n", i);
	printf("\n10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10\n\n");
	i = ft_printf("%23Q");
	printf("%i\n", i);
	i = printf("%23Q");
	printf("%i\n", i);
	/*printf("\n11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11\n\n"); |
	i = ft_printf("%.");                                               |
	printf("%i\n", i);                                                 | --------> This gives me in valgrind "1 errors from 1 context" 
	i = printf("%.");                                                  |
	*/printf("%i\n", i);
	printf("\n12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12\n\n");
	i = ft_printf("Mateo Tascon %10s xd\n", "Gomez");
	printf("%i\n", i);
	i = printf("Mateo Tascon %10s xd\n", "Gomez");
	printf("%i\n", i);
	printf("\n13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13\n\n");
	i = ft_printf("Mateo Tascon %-10s xd\n", "Gomez");
	printf("%i\n", i);
	i = printf("Mateo Tascon %-10s xd\n", "Gomez");
	printf("%i\n", i);
	printf("\n14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14\n\n");
	i = ft_printf("\033\n");
	printf("%i\n", i);
	i = printf("\033\n");
	printf("%i\n", i);
	printf("\n15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15\n\n");
	i = ft_printf("\033\n");
	printf("%i\n", i);
	i = printf("\033\n");
	printf("%i\n", i);
	printf("\n16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16\n\n");
	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
	printf("\n17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17\n\n");
	i = ft_printf("%-05c xd\n", 0);
	printf("%i\n", i);
	i = printf("%-05c xd\n", 0);
	printf("%i\n", i);
	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%05.c|", 'a'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%05.c|", 'a'));

	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%-c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%-c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%15c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%15c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%-15c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%-15c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.2c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%.2c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|% c|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|% c|", 0));

	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%c|", "coucou"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%c|", "coucou"));

	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%05.c|", 'a'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%05.c|", 'a'));

	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%015c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%015c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-015c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%-015c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-0c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%-0c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%.12c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%.12c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%.0c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%.0c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%-12.3c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%-12.3c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%-3.1c|", 'a'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%-3.1c|", 'a'));

	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%12.1c|", 'a'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%12.1c|", 'a'));

	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%3.1c|", '4'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%3.1c|", '4'));

	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%-c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%3c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%3c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%-3c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%-3c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%.2c|", 'a'));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%.2c|", 'a'));

	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%5.5c|", "N"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%5.5c|", "N"));

	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%7.5c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%7.5c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%.5c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%.5c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%.15c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%.15c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%15c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%15c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%5c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%5c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%-5.5c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%-5.5c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%-15.5c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%-15.5c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%-.5c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%-.5c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%-15c|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%-15c|", "Number 42"));

	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%-c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%-c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%5.5c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%5.5c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%15.5c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%15.5c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%.5c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%15c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%15c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-5.5c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%-5.5c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%-15.5c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%-15.5c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-.5c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%-.5c|", NULL));

	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%-15c|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%-15c|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%15c|", "bonjour"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%15c|", "bonjour"));








	printf("\n\n\033[1;41m|-------------------------| (Lancement du test STRING en cours...) |-------------------------|\033[0m\n");

	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");

	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05.0s|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%05.0s|", 0));

	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%05.s|", "42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%05.s|", "42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 2b => \033[0m|%05.2s|", "42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2b => \033[0m|%05.2s|", "42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|% s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|% s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%-s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%-s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%5.5s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%5.5s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%15.5s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%15.5s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%.5s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%.5s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 17b => \033[0m|%.15s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17b => \033[0m|%.15s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%15s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%15s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 18b => \033[0m|%5s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18b => \033[0m|%5s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%-5.5s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%-5.5s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-15.5s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%-15.5s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-.5s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%-.5s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%-15s|", "Number 42"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%-15s|", "Number 42"));
	
	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%-s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%-s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%5.5s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%5.5s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%15.5s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%15.5s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%.5s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%.5s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%15s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%15s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%-5.5s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%-5.5s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%-15.5s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%-15.5s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%-.5s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%-.5s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%-15s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%-15s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%s|", "coucou"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%s|", "coucou"));
	
	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%05.s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%05.s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 34b => \033[0m|%5.s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34b => \033[0m|%5.s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%015s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%015s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%-015s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%-015s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%-0s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%-0s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%.12s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%.12s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%.0s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%.0s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%-12.1s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%-12.1s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%-3.2s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%-3.2s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%12.1s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%12.1s|", "salut"));

	printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%3.2s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%3.2s|", "salut"));
	
	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%-s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%-s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%3s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%3s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%-3s|", NULL));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%-3s|", NULL));
	
	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%.2s|", "salut"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%.2s|", "salut"));

	printf(" ---> {%i}\n", printf("%010.4s", "mateo"));
	ft_printf(" ---> {%i}\n",  ft_printf("%010.4s", "mateo"));

	printf(" ---> {%i}\n", printf("%     0*s\n", 10, "hola"));
	ft_printf(" ---> {%i}\n",  ft_printf("%     0*s\n", 10, "hola"));





	printf("\n\n\033[1;41m|-----------------------| (Lancement du test POINTEUR en cours...) |-----------------------|\033[0m\n");
	
	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");

	printf("{%d}\n", printf("\033[1;32mTest 0 => \033[0m|%5p|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 0 => \033[0m|%5p|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%05p|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%05p|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%9.2p|", 1234));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%9.2p|", 1234));
	
	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%.0p|, |%.p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%.0p|, |%.p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%.1p|, |%.2p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%.3p|, |%.5p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%10.5p|, |%5.10p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%-10.5p|, |%-5.10p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7b => \033[0m|%10.5p|, |%5.10p|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8b => \033[0m|%-10.5p|, |%-5.10p|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|%p|", &i));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|%p|", &i));
	
	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%-5p|", &i));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%-5p|", &i));
	
	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%p|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%p|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%5p|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%5p|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%.0p|, |%.p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%.0p|, |%.p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%.1p|, |%.2p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%.3p|, |%.5p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%10.5p|, |%10.5p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%-10.5p|, |%-10.5p|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|%p|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|%p|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%-5p|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%-5p|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%p|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%p|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%5p|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%5p|", 0));

	printf(" ---> {%i}\n", printf("%     .p\n", 0));
	ft_printf(" ---> {%i}\n",  ft_printf("%     .p\n", 0));





	printf("\n\n\033[1;41m|-------------------------| (Lancement du test SIGNED DECIMAL en cours...) |-------------------------|\033[0m\n");
	
	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
	
	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%4.3i|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%4.3i|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%-3.1i|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%-3.1i|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%-4.1i|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%-4.1i|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%-4d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%-4d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%.d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%.d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|% d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|% d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%05.1d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%05.1d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%-09.5d|", -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%-09.5d|", -42));
	
	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%09.3d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%09.3d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%09.2d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%09.2d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.5d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%.5d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%.5d|", 400000));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%.5d|", 400000));
	
	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-.5d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%-.5d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|% .5d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|% .5d|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%.5d|", -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%.5d|", -42));
	
	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%-.5d|", -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%-.5d|", -42));
	
	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|% .5d|", -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|% .5d|", -42));
	
	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%15.4d|", -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%15.4d|", -42));
	
	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%8.4d|", -424242424));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%8.4d|", -424242424));
	
	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|%10.5d|, |%10.5d|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|%10.5d|, |%10.5d|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|abcdefg%0.0d|abcde", 012));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|abcdefg%0.0d|abcde", 012));
	
	printf("{%d}\n", printf("\033[1;32mTest 57 => \033[0m|abcdefg%00.0d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 57 => \033[0m|abcdefg%00.0d|abcde", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 58 => \033[0m|abcdefg%00.d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 58 => \033[0m|abcdefg%00.d|abcde", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 59 => \033[0m|abcdefg%00d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 59 => \033[0m|abcdefg%00d|abcde", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 60 => \033[0m|abcdefg%.d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 60 => \033[0m|abcdefg%.d|abcde", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 61 => \033[0m|abcdefg%.0d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 61 => \033[0m|abcdefg%.0d|abcde", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 62 => \033[0mOKLM"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 62 => \033[0mOKLM"));
	
	printf("{%d}\n", printf("\033[1;32mTest 63 => \033[0m"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 63 => \033[0m"));
	
	printf("{%d}\n", printf("\033[1;32mTest 64 => \033[0m|%05.1d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 64 => \033[0m|%05.1d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 66 => \033[0m|%09.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 66 => \033[0m|%09.5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 67 => \033[0m|%09.3d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 67 => \033[0m|%09.3d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 68 => \033[0m|%09.2d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 68 => \033[0m|%09.2d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 69 => \033[0m|%.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 69 => \033[0m|%.5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 70 => \033[0m|%.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 70 => \033[0m|%.5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 71 => \033[0m|%-10.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 71 => \033[0m|%-10.5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 72 => \033[0m|% .5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 72 => \033[0m|% .5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 74 => \033[0m|%.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 74 => \033[0m|%.5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 75 => \033[0m|%-.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 75 => \033[0m|%-.5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 76 => \033[0m|% .5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 76 => \033[0m|% .5d|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 78 => \033[0m|%.d, %.0d|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 78 => \033[0m|%.d, %.0d|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 79 => \033[0m|%.d, %.2d|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 79 => \033[0m|%.d, %.2d|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 80 => \033[0m|%.d, %.0d|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 80 => \033[0m|%.d, %.0d|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 81 => \033[0m|%.d, %.2d|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 81 => \033[0m|%.d, %.2d|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 82 => \033[0m|%d, %d, %d|", 0, -02, 02));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 82 => \033[0m|%d, %d, %d|", 0, -02, 02));

	printf(" ---> {%i}\n", printf("%     .i", 0));
	ft_printf(" ---> {%i}\n",  ft_printf("%     .i", 0));





	printf("\n\n\033[1;41m|-----------------------| (Lancement du test UNSIGNED DECIMAL en cours...) |-----------------------|\033[0m\n");
	
	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
	
	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%.u, %.0u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%.u, %.0u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%.u, % .0u|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%.u, % .0u|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%0u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%0u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%05.2u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%05.2u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%-9u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%-9u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%05.9u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%05.9u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%-0u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%-0u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-0.u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%-0.u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%-0.5u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%-0.5u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%09.5u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%09.5u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%-9.5u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%-9.5u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%-5.9u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%-5.9u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%5.u|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%5.u|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%.u, %.0u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%.u, %.0u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%.u, %.2u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%.u, %.2u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%.u, %.0u|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%.u, %.0u|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%.u, %.2u|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%.u, %.2u|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%.u, %.0u|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%.u, %.0u|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%.u, %.2u|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%.u, %.2u|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%.u, %.2u, %u|", 0, -02, 02));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%.u, %.2u, %u|", 0, -02, 02));
	
	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%05u|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%05u|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%9.2u|", 1234));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%9.2u|", 1234));
	
	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%.0u|, |%.u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%.0u|, |%.u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%.1u|, |%.1u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%.1u|, |%.1u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5u|, |%.5u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%.5u|, |%.5u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%10.5u|, |%10.5u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%10.5u|, |%10.5u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-10.5u|, |%-10.5u|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%-10.5u|, |%-10.5u|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%u|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%u|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-5u|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%-5u|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%u|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%u|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%5u|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%5u|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 58 => \033[0m|%u|", -523));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 58 => \033[0m|%u|", -523));





	printf("\n\n\033[1;41m|-----------------------| (Lancement du test HEXADECIMAL en cours...) |-----------------------|\033[0m\n");
	
	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
	
	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|% x|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|% x|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%x|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%x|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%X|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%X|", (unsigned int)42));
	
	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%-5x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%-5x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%6.9x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%6.9x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|%-9.5x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|%-9.5x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%-9.1x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%-9.1x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%05x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%05x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|%0.5x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|%0.5x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%.5x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%.5x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%09.5x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%09.5x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%09.3x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%09.3x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|%09.2x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|%09.2x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%.x, %.2x|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%.x, %.2x|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%.x, %.0x|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%.x, %.0x|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%.x, %.2x|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%.x, %.2x|", 42, 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%.x, %.2x, %x|", 0, -02, 02));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%.x, %.2x, %x|", 0, -02, 02));
	
	printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%05x|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%05x|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%9.2x|", 1234));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%9.2x|", 1234));
	
	printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%.0x|, |%.x|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%.0x|, |%.x|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%.1x|, |%.1x|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%.1x|, |%.1x|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%.5x|, |%.5x|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%.5x|, |%.5x|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%10.5x|, |%10.5x|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%10.5x|, |%10.5x|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%-10.5x|, |%-10.5x|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%-10.5x|, |%-10.5x|", 0, 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%-5x|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%-5x|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%x|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%x|", 0));
	
	printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%5x|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%5x|", 0));

	printf(" ---> {%i}\n", printf("%   10   .5x", 236));
	ft_printf(" ---> {%i}\n",  ft_printf("%   10   .5x", 236));





	printf("\n\n\033[1;41m|----------------------------| (Lancement du test more bullshit en cours...) |----------------------------|\033[0m\n");
	
	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
	
	printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%?"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%?"));
	
	printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|% |"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|% |"));
	
	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%%%|", "test"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%%%|", "test"));
	
	printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%%   %|", "test"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%%   %|", "test"));
	
	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%010s is a string|", "this"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%010s is a string|", "this"));
	
	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%05c|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%05c|", 42));
	
	printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m@main_ftprintf: |%33d|", 256));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m@main_ftprintf: |%33d|", 256));

	ft_printf("\n\n*********************PERCENT & RANDOM FLAGS*****************************\n\n");

	printf(" ---> {%i}\n", printf("<%  5.%>"));
	ft_printf(" ---> {%i}\n", ft_printf("<%  5.%>"));

	printf(" ---> {%i}\n", printf("<%05d>", 3));
	ft_printf(" ---> {%i}\n", ft_printf("<%05d>", 3));

	printf(" ---> {%i}\n", printf("<%2Hola como va la people?>"));
	ft_printf(" ---> {%i}\n", ft_printf("<%2Hola como va la people?>"));

	printf(" ---> {%i}\n", printf("<%05.3c", 'a'));
	ft_printf(" ---> {%i}\n", ft_printf("<%05.3c", 'a'));

	printf(" ---> {%i}\n", printf("<%5-c %20-s %15-d", 'a', "Tascon Gomez", 2001));
	ft_printf(" ---> {%i}\n", ft_printf("<%5-c %20-s %15-d", 'a', "Tascon Gomez", 2001));

	printf(" ---> {%i}\n", printf("<%5--c %20.05s %15-d", 'a', "Tascon Gomez", 2001));
	ft_printf(" ---> {%i}\n", ft_printf("<%5--c %20.05s %15-d", 'a', "Tascon Gomez", 2001));

	printf(" ---> {%i}\n", printf("<%5-*c> <%*.05-s> <%0d>", 3, 'a', 20, "Tascon Gomez", 2001));
	ft_printf(" ---> {%i}\n", ft_printf("<%5-*c> <%*.05-s> <%0d>", 3, 'a', 20, "Tascon Gomez", 2001));

	printf(" ---> {%i}\n", printf("<%5--c> <%20.05-s> <%15-d>", 'a', "Tascon Gomez", 2001)); // ------> Watch out!, if you are using linux, you gonna get a "segmentation fault" by this line.
	ft_printf(" ---> {%i}\n", ft_printf("<%5--c> <%20.05-s> <%15-d>", 'a', "Tascon Gomez", 2001));

	printf(" ---> {%i}\n", printf("<%030.p>", &i));
	ft_printf(" ---> {%i}\n", ft_printf("<%030.p>", &i));

	printf(" ---> {%i}\n", printf("<%030.3s>", "Mateo"));
	ft_printf(" ---> {%i}\n", ft_printf("<%030.3s>", "Mateo"));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*u>", 30, 4294967295));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*u>", 30, 4294967295));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.i>", 30, 2147483647));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.i>", 30, 2147483647));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.1i>", 30, -2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.1i>", 30, -2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.*i>", 30, 20, 2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.*i>", 30, 20, 2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.*-i>", -30, 20, 2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.*-i>", -30, 20, 2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%*.*-i>", -30, -20, 2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%*.*-i>", -30, -20, 2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*u>", -30, 4294967295));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*u>", -30, 4294967295));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.i>", -30, 2147483647));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.i>", -30, 2147483647));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.1i>", -30, -2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.1i>", -30, -2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.*i>", -30, -20, 2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.*i>", -30, -20, 2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%0*.*-i>", -30, -20, 2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%0*.*-i>", -30, -20, 2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%*.*-i>", -30, -20, 2147483648));
	ft_printf(" ---> {%i}\n", ft_printf("<%*.*-i>", -30, -20, 2147483648));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%*>", 30));
	ft_printf(" ---> {%i}\n", ft_printf("<%*>", 30));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%05>"));
	ft_printf(" ---> {%i}\n", ft_printf("<%05>"));

	ft_printf("\n\n*********************************************************\n\n");

	printf(" ---> {%i}\n", printf("<%-05>"));
	ft_printf(" ---> {%i}\n", ft_printf("<%-05>"));

	ft_printf("\n\n*********************************************************\n\n");

	return (0);
}
